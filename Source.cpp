#include<iostream>

class Test
{
public:
	Test()
	{
		a = 0;
		b = 0;
	}
	Test(int x, int y) : a(x), b(y) {}
	Test operator++()
	{
		++a;
		++b;
		return *this;
	}
	void Output()
	{
		std::cout << a << " " << b << std::endl;
	}
	~Test()
	{

	}

private:
	int a;
	int b;
};

int main()
{
	Test obj(2,3);
	obj.Output();
	++obj;
	obj.Output();
	Test obj1;
	obj1.Output();
	++obj1;
	obj1.Output();
}