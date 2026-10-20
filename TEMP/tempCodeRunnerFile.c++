using namespace std;
#include <iostream>
#include <math.h>
#include <fstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>

class parent
{
    int a, b;

public:
    parent(int a, int b) : a(a), b(b) {};

    parent(parent &obj)
    {
        this->a = obj.a;
        this->b = obj.b;
    }

    void display()
    {
        cout << "A is :" << a << endl
             << "B is :" << b << endl;
    }
};

int main()
{
    parent obj1(1, 2);
    obj1.display();

    parent copyObj(obj1);
    copyObj.display();

    return 0;
}