using namespace std;
#include <iostream>
#include <cmath>

// 1. Make a default constructor class:
class complex
{
    int a, b;

public:
    // Make a default constructor:
    complex();
    void printnumber()
    {
        cout << "The value of a and b is:" << a << "+" << b << "i" << endl;
    }
};

complex ::complex()
{
    a = 0;
    b = 0;
}

// 2. Make a Parameterized constructor:
class complex1
{
    int x, y;

public:
    complex1(int a1, int b1)
    {
        x = a1;
        y = b1;
    }
    void print_num()
    {
        cout << "The complex number is:" << x << "+" << y << "i" << endl;
    }
};

// 1. Make a program to find the distance between the two points:

// It is the simple approach to find the distance:
// class point{
//     int a1,b1;
//     public:
//     point(){
//         a1 = 0;
//         b1 = 0;
//     }
//     point(int x,int y){
//         a1 = x;
//         b1 = y;
//     }
//     void print_point(){
//         cout<<"The points are ("<<a1<<","<<b1<<")"<<endl;
//     }
//     float distance_btw(point obj1,point obj2){
//         float distance = sqrt(((obj2.a1-obj1.a1)*(obj2.a1-obj1.a1))+((obj2.b1-obj1.b1)*(obj2.b1-obj1.b1)));
//         return distance;
//     }
// };

class point
{
    int a1, b1;
    // Make a friend function:
    friend float distance_btw(point obj1, point obj2);

public:
    point(int x, int y)
    {
        a1 = x;
        b1 = y;
    }
    void print_point()
    {
        cout << "The points are (" << a1 << "," << b1 << ")" << endl;
    }
};
// Make a friend function:
float distance_btw(point obj1, point obj2)
{
    float distance = sqrt(((obj2.a1 - obj1.a1) * (obj2.a1 - obj1.a1)) + ((obj2.b1 - obj1.b1) * (obj2.b1 - obj1.b1)));
    return distance;
}

// 3. Make a function overloading constructor:
class simple
{
    int a, b;

public:
    simple(int x, int y)
    {
        a = x;
        b = y;
    }
    simple(int x)
    {
        a = x;
        b = 0;
    }
    simple()
    {
        a = 0;
        b = 0;
    }
    void printf()
    {
        cout << "The value of a and b is:" << a << " " << b << endl;
    }
};

// Make a function to set default value to the constructor:
class simple2
{
    int a, b;

public:
    // Set default arguments:
    simple2(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }

    void printf()
    {
        cout << "The value of a and b is:" << a << " " << b << endl;
    }
};

// 5. Dynamically initialization of the objects:
class bank_deposite
{
    int principal;
    int years;
    float interest;
    int return_value;

public:
    // This empty constructor is make so beacuse we can use dynamically initialization of the objects.
    bank_deposite() {};
    bank_deposite(int p, int y, float inr)
    {
        principal = p;
        years = y;
        interest = inr;
        return_value = principal;
        for (int i = 0; i < y; i++)
        {
            return_value = return_value * (1 + interest);
        }
        // while (years != 0)
        // {
        //     return_value = principal*(1+interest);
        //     years--;
        // }
    }
    bank_deposite(int p, int y, int inr)
    {
        principal = p;
        years = y;
        interest = float(inr) / 100;
        return_value = principal;
        for (int i = 0; i < y; i++)
        {
            return_value = return_value * (1 + interest);
        }
    }

    void show()
    {
        cout << "Your principal amount is:" << principal << endl
             << "After " << years << " years return value is:" << return_value << endl;
    }
};

// 6. Make a program to understand the copy constructor:
class value
{
    int a;

public:
    value() {};
    value(int val)
    {
        a = val;
    }

    // If we gave object address as the parameter,then it is called delaration of the copy constructor.
    value(value &obj)
    {
        cout << "Copy constructor is called:" << endl;
        a = obj.a;
    }
    // Note = if the above code for the copy constructor is not write then the complier automatically make its deafult copy constructor.
    void print_val()
    {
        cout << "The value is:" << a << endl;
    }
};

// 7. Make a destructor program:
class num
{
    static int count;

public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number:" << count << endl;
    }
    ~num()
    {
        cout << "This is the time when the destructor is called for the object number:" << count << endl;
        count--;
    }
};
int num ::count;

int main()
{
    // Constructors = Constructors is a special type of a member function of the class,with the same name as the class name.Constructor cannot have any return type and the return value,also it is autoamtically invoked when the objects are declared.

    // 1. e.g. : Make a simple default constuctor(it means it does not contain any parameter):

    // complex obj1;  // When the object is declared the default constructor automatically invoked.
    // obj1.printnumber();

    // Important characteristics of the constructor:
    /* 1. Constructor can also declared inside the public access modifier.
    2. It does not have any return type and return value.
    3. It is automatically invoked when the object is declared.
    4. It can also have default arguments.
    5. We cannot refer to their address.
    */

    // 2. Parameterized Constructor = Parameterized constructor are those constructor which take parameter and work with them.
    // e.g. : Make a paremeterized constructor to set the values of the class:
    // It is called implicit call to pass the arguments:
    // complex1 a(1,2);
    // a.print_num();

    // // It is called explicit call to pass the arguments:
    // complex1 b = complex1(2,1);
    // b.print_num();

    // 1. Make a program to which can set the co-ordinates point and find the distance between them with the help of friend function:

    // It is the simple approach to solve the problem:
    // point p1(2,2), p2(3,5), d;
    // // p1.point_set(2, 2);
    // p1.print_point();

    // // p2.point_set(3, 5);
    // p2.print_point();

    // int dist_btw = d.distance_btw(p1, p2);
    // cout << "The distance between two point is:" << dist_btw << endl;

    // Now it is the advance approach to solve the problem:
    // point p1(1,2),p2(2,1);
    // p1.print_point();
    // p2.print_point();

    // int dist_btw = distance_btw(p1,p2);
    // cout<<"The distance between the two points are:"<<dist_btw<<endl;

    // 3. Constructor Overloading = Constructor overloading is the concept in which one class can have multiple constructor with different parameters.So they can run accordingly the value of the arguments.
    // e.g :
    // simple s1(1,2);
    // s1.printf();

    // simple s2(2);
    // s2.printf();

    // simple s3;
    // s3.printf();

    // 4. Default argument to the constructor = We can also set the defalut arguments to the constructor.
    // e.g. :

    // simple2 s1(1,2);
    // s1.printf();

    // simple2 s2;
    // s2.printf();

    // 5. Dynamical Initialization of the objects = It means that object will be dynamically initialize at the run time. It is usefull when data of different format.
    // e.g. Make a bankdeposite program and find your return_value:

    //  bank_deposite b1,b2,b3; // It show no error because of empty constructor. It is called dynamically initialization.
    // int p,y,R;
    // float r;
    //  cout<<"Please enter the p,y and r :";
    //  cin>>p>>y>>r;
    //  // Explicit call;
    //  b1 = bank_deposite(p,y,r);
    //  b1.show();

    //  cout<<"Please enter the p,y and R:";
    //  cin>>p>>y>>R;
    //  b2 = bank_deposite(p,y,R);
    //  b2.show();

    // 6. Copy Constructor = A copy constructor is a special type of the constructor that create a copy of the one object.If we wants to ressemble one objects value to the other objects then we use copy constructor.Now one more important point about copy constructor is,if no copy constructor is make in the program then compiler will make its default copy connstructor.
    // e.g. :
    //  value v1,v2(2),v4;
    //  v2.print_val();

    // //  Copy constructor are called:
    // value v3 = v2;  // or value v3(v2);
    //  v3.print_val();

    //  Note = 1. value v4 = v2,is not valid beacause the copy constructor is make only those objects which are not already declared.

    // 7. Destructor = A destructor is a type of function which is automatically called when the object is destroyed. Destructor never takes any arguments nor return any value.
    // e.g. : Make simple program to understand the working of destructor:

    cout << "Main program starts:" << endl;
    cout << "Creating first object:" << endl;
    num n1;

    {
        cout << "Entering in the block:" << endl;
        cout << "Creating two more objects:" << endl;
        num n2, n3;
        cout << "Exiting the block" << endl;
    }
    cout << "Back to the main" << endl;

    return 0;
}