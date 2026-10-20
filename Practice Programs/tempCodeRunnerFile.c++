using namespace std;
#include <iostream>
#include <cmath>
class comp
{
private:
	int a, b;

public:
	comp(int a1, int b2) : a(a1), b(b2){};
	void add(comp obj1)
	{
		a = this->a + obj1.a;
		b = this->b + obj1.b;
	}
	void print_details()
	{
		cout << "Complex number is:" << a << "+" << b << "i" << endl;
	}
};

int main()
{
	comp obj1(1, 2);
	obj1.print_details();
	comp obj2(4, 3);
	obj2.print_details();
	obj1.add(obj2);
	obj1.print_details();
	return 0;
}