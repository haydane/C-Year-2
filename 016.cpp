#include <windows.h>
#include <iostream>
#include <vector>
#include "Time1.h"

void  LeftClick();														
POINT GetMousePosition();												
void  SetMousePosition(POINT& mp);										

int main()
{
	HWND myWindow;
	AllocConsole();
	myWindow = FindWindowA( "ConsoleWindowClass", NULL );
	
	float seconds           = 0.0f;										
	int   clicks            = 0;										
	float waitTime          = 0.0f;										
	bool  running           = true;										
	bool  getMousePositions = true;										
	int   vectorPosition    = 0;										
	int   vectorSize        = 0;										
	bool  hasPoints         = false;									

	std::vector<POINT> mousePoints;										

	std::cout << "=== READ ME ===" << std::endl;
	std::cout << "*** Warning - Make sure you don't have the mouse over something important! ***" << std::endl;
	std::cout << "*** This window will close after a 5 second countdown and start clicking!! ***" << std::endl;
	std::cout << "*** After the wait time you enterd the window will open itself again.      ***" << std::endl;

	std::cout << "\n\nHow long do you want the mouse to click for in seconds \n\n >> ";
	std::cin >> waitTime;
	std::cout << std::endl;

	do
	{
		std::cout << "Press ctrl to add the current mouse position to the list or 'C' to continue" << std::endl;
		POINT mouse = GetMousePosition();
		std::cout << "Mouse X : " << mouse.x << "                " << std::endl;
		std::cout << "Mouse Y : " << mouse.y << "                " << std::endl;
		std::cout << "\nPoints saved in list : " << mousePoints.size() << std::endl;

		if(GetAsyncKeyState(VK_CONTROL))
		{
			hasPoints = true;
			mousePoints.push_back(mouse);
			std::cout << "Added Point (" << mouse.x << ", " << mouse.y << ")" << std::endl;
			Sleep(250);
		}
		if(GetAsyncKeyState('C'))
		{
			getMousePositions = false;
		}

		COORD pos = {0, 10};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

	}while( getMousePositions );

	Timer t;
	t.InitGameTime();
	t.GetDeltaTime();
	float DT  = 5.0f;

	do
	{
		DT -= t.GetDeltaTime();		
		COORD pos = {0,15};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		std::cout << "Clicks will start in : " << DT << std::endl;

	}while(DT > 0.0f);
    DT = 0.0f;
	ShowWindow(myWindow,0);
	vectorSize = (mousePoints.size() - 1);

	do
	{
		DT += t.GetDeltaTime();

		if(hasPoints)
		{
			SetMousePosition(mousePoints[vectorPosition]);
			vectorPosition++;
			if(vectorPosition > vectorSize)
			{
				vectorPosition = 0;
			}
		}
		Sleep(1);

		clicks++;
		if( DT > 1.0f )
		{
			seconds += DT;
			DT = 0.0f;
		}
		if(GetAsyncKeyState(VK_ESCAPE))
		{
			running = false;
		}

	}while(seconds < waitTime && running);

	std::cout << "Finished - Mouse Was Clicked : " << clicks << " times in " << seconds << " seconds" << std::endl;
	ShowWindow(myWindow,1);
}
void LeftClick()
{  
	INPUT    Input={0};													
	Input.type        = INPUT_MOUSE;									
	Input.mi.dwFlags  = MOUSEEVENTF_LEFTDOWN;							
	SendInput( 1, &Input, sizeof(INPUT) );								

	ZeroMemory(&Input,sizeof(INPUT));									
	Input.type        = INPUT_MOUSE;									
	Input.mi.dwFlags  = MOUSEEVENTF_LEFTUP;								
	SendInput( 1, &Input, sizeof(INPUT) );							
}
POINT GetMousePosition()
{
	static POINT m;
	POINT mouse;
	GetCursorPos(&mouse);
	m.x = mouse.x;
	m.y = mouse.y;
	return m;
}
void SetMousePosition(POINT& mp)
{
	long fScreenWidth	    = GetSystemMetrics( SM_CXSCREEN ) - 1; 
	long fScreenHeight	    = GetSystemMetrics( SM_CYSCREEN ) - 1; 
    float fx		        = mp.x * ( 65535.0f / fScreenWidth  );
	float fy		        = mp.y * ( 65535.0f / fScreenHeight );		  
				
	INPUT Input             = { 0 };			
	Input.type		        = INPUT_MOUSE;

	Input.mi.dwFlags	    = MOUSEEVENTF_MOVE|MOUSEEVENTF_ABSOLUTE;
	Input.mi.dx		        = (long)fx;
	Input.mi.dy		        = (long)fy;

	SendInput(1,&Input,sizeof(INPUT));
}
Timer::Timer()
{
	this->lastUpdate        = 0;
	this->fpsUpdateInterval = 1.0f;
	this->numFrames         = 0;
	this->fps               = 0;
	this->lastGameTime      = 0;
	this->timeAtGameStart   = 0;

	this->InitGameTime();
}
Timer::~Timer(){}
void Timer::InitGameTime()
{
	QueryPerformanceFrequency((LARGE_INTEGER *)&ticksPerSecond);
	timeAtGameStart = GetGameTime();
}
float Timer::GetGameTime()
{
	UINT64 ticks;
	float time;

	QueryPerformanceCounter((LARGE_INTEGER *)&ticks);

	time = (float)(__int64)ticks/(float)(__int64)ticksPerSecond;
	
	time -= timeAtGameStart;
	return time;
}
float Timer::GetFramesPerSecond()
{
	numFrames++;
	float currentUpdate = GetGameTime();
	if( currentUpdate - lastUpdate > fpsUpdateInterval )
	{
		fps = numFrames / (currentUpdate - lastUpdate);
		lastUpdate = currentUpdate;
		numFrames = 0;
	}
	return fps;
}
float Timer::GetDeltaTime()
{
	float dt = GetGameTime() - lastGameTime;
	lastGameTime += dt;
	return dt;
}