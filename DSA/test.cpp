// late binding : 
#include <iostream.h>
class base{
	protected :
		float data;
	public :
		base(float d=0.0):data(d){}
		float square(){return data*data;}
		virtual void out(){
			cout<<"Data= "<<data<<endl;
			cout<<"square= "<<square()<<endl;
		}
};
class deri:public base{
	private :
		float extradata;
	public :
		deri(float d=0.0,float ed=0.0):base(d),extradata(ed){}
		virtual float square(){return (data+extradata)*(data+extradata);}
		virtual void out(){
			cout<<"Data= "<<data<<endl;
			cout<<"Extradata= "<<extradata<<endl;
			cout<<"square= "<<square()<<endl;
		}
};
class deri1 : public base
{
	private:
		float edata;
		public:
		deri1(float a,float b):base(a),edata(b){}
		virtual float square(){return data*edata;}
		virtual void out(){
			cout<<"Data= "<<data<<endl;
			cout<<"Edata= "<<edata<<endl;
			cout<<"square= "<<square()<<endl;
		} 
};
void main(){
	base o(5.0);
	deri o1(2.0,2.0);
	deri1 o2(1,2);
	base *p=&o2;
	p->out();
}