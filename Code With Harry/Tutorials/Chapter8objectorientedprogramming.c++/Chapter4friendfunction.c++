using namespace std;
#include <iostream>

// 1. Make a complex friend class:
class complex
{
    int a, b;

public:
    void set_data(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    // Now prototype to set the friend function:
    friend complex get_complex_data(complex obj1, complex obj2);

    void print()
    {
        cout << "The complex number is:" << a << " + " << b << "i" << endl;
    }
};

// Write the code for the friend function:
complex get_complex_data(complex obj1, complex obj2)
{
    complex obj3; // we simple make a object because the friend function cannot directly access the properties of the complex class only comlex object can done it.
    obj3.set_data((obj1.a + obj2.a), (obj1.b + obj2.b));
    return obj3;
}

// 2. Member friend function and friend class:
// forward declaration;
class comp;

class calculator
{
public:
    int add(int x, int y)
    {
        return (x + y);
    }

    int add_real(comp o1, comp o2);
    int add_complex(comp o1, comp o2);
    // void printr(){
    //     cout<<"The sum of the real part is:"<<a+b<<endl;
    // }
    // void printc(){
    //     cout<<"The sum of the complex part is :"<<(a+b)<<endl;
    // }
};

class comp
{
    int a, b;

    // Make a member friend function of the other class:
    // friend int calculator :: add_real(comp o1,comp o2);
    // friend int calculator :: add_complex(comp o1,comp o2);

    // Instead doing the above we will make the whole class as a friend:
    friend class calculator;

public:
    void set_data(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void print()
    {
        cout << "The complex number is:" << a << " + " << b << "i" << endl;
    }
};

int calculator ::add_real(comp o1, comp o2)
{

    return (o1.a + o2.a);
}
int calculator ::add_complex(comp o1, comp o2)
{

    return (o1.b + o2.b);
}

// 3. Make function which swap the data of two classes:

// Forward Declaration:
class second;

class first
{
    int val1;
    // Make individual function our friend function:
    friend void swap(first *obj1, second *obj2);

public:
    void set_Val1(int data)
    {
        val1 = data;
    }
    void print_val1()
    {
        cout << "The data of val1 is:" << val1 << endl;
    }
};

class second
{
    int val2;
    // Make individual function our friend function:
    friend void swap(first *obj1, second *obj2);

public:
    void set_val2(int data)
    {
        val2 = data;
    }
    void print_val2()
    {
        cout << "The data of val2 is:" << val2 << endl;
    }
};

// Now make a indivaidual function:
void swap(first *obj1, second *obj2)
{
    int temp = obj1->val1;
    obj1->val1 = obj2->val2;
    obj2->val2 = temp;
}

int main()
{
    // 1. Friends Functions = Friend functions are those functions that have the right to access the private data of the class even they are not defined inside the class.To use the friend function it is neccessary to write the prototype of the friend function inside the class.Now one more important thing is that,if we write the prototype of the friend function inside the class it does'nt means that it will make the member of the class.

    // e.g. :Make a complex class function with the help of friend functions:

    // complex obj1,obj2,sum;
    // obj1.set_data(1,2);
    // obj1.print();

    // obj2.set_data(2,1);
    // obj2.print();

    // // sum.get_complex_data(obj1,obj2);  // we cannot do this because get_complex_data() is not the member of the complex class. So we cannot use dot operator to access them.
    // sum = get_complex_data(obj1,obj2);
    // sum.print();

    // 2. Member friend and class friend function :

    // Member friend funtion = Member friend function are those function which have the permission to access the private member of the class.
    // Friend class = It means that whole memebers of the class have permission to access the private member of the other class.
    // e.g. :

    // comp obj1,obj2;
    // obj1.set_data(1,2);
    // obj1.print();
    // obj2.set_data(2,1);
    // obj2.print();

    // calculator a1,c1,c2;
    // int a = a1.add(1,4);
    // cout<<a<<endl;
    // int b = c1.add_real(obj1,obj2);
    // cout<<b<<endl;
    // int c = c2.add_complex(obj1,obj2);
    // cout<<c<<endl;

    // 3. Individual function with friend more than one class = This means that we can also make a individual function add gave them permission to access more than one class.

    // e.g. : Make a function which swap the data of the two class:

    first a1;
    a1.set_Val1(5);
    a1.print_val1();

    second a2;
    a2.set_val2(10);
    a2.print_val2();

    swap(&a1, &a2);

    a1.print_val1();
    a2.print_val2();

    /*  Note = 1. If you want a function can work with your class properties and method, then make the same class friend function. e.g. 1.
    2. If you want a function can work only with you class properties,then make the friend class or indivaidual class. e.g. 2,3.
    3.
    */

    return 0;
}