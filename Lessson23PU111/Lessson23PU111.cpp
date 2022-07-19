
#include <iostream>
using namespace std;
//C++ 
void test_pow(const int* v)
{
	
	//*v = 15;
	
}
class Base
{
	virtual void foo() {}
};

class C:public Base{};
class D:public C{};
class Other
{

	virtual void foo() {}
};
class Value
{
private:
	int i;
public:
	Value(int i)
	{
		this->i = i;
	}
	int getI()
	{
		return this->i;
	}
	operator int()
	{
		return this->i;
	}
};
int main()
{
/*	D* pd = new D();
C *pc=	dynamic_cast<C*>(pd);
cout << typeid(pc).name() << endl;

Base* pb = dynamic_cast<Base*>(pd);
cout << typeid(pb).name() << endl;


Base* pbd = dynamic_cast<Base*>(pd);
cout << typeid(pbd).name() << endl;*/


	/*C* pc = new C();
	D* pd = dynamic_cast<D*>(pc);*/
	/*Other* otherPtr = new Other();
	if (dynamic_cast<Base*>(otherPtr))
		cout << "Base" << endl;
	else
		cout << "Other" << endl;
		*/

	//double tmp;
	//int i ;
	//Value obj(20);
//	i = (int)obj;
//	i=static_cast<int>(obj);
	//cout << i;

	int x;
	const char* str = "T";
	cout << str << endl;
	x = reinterpret_cast<int>(str);
	cout << x << endl;
}

