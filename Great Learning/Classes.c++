using namespace std;
#include <iostream>

// Simple student class:
class Student
{
public:
    string name; // these are also called the attributes.
    int rollno;

    // Write method to work with the attributes:
    void initialize()
    {
        string s_name;
        int s_rollno;
        cout << "Please enter your name:";
        cin >> s_name;
        cout << "Please enter your rollno:";
        cin >> s_rollno;
        name = s_name;
        rollno = s_rollno;
    }

    void printf()
    {
        cout << "Name of the student is:" << name << "\n";
        cout << "Rollno of the student is:" << rollno << "\n";
    }
};

// Student classes with constructor:
class Student_c
{
public:
    string name;
    int rollno;

    // Make constructor:
    Student_c(string s_name, int s_rollno)
    {
        name = s_name;
        rollno = s_rollno;
    }

    // Make attributes:
    void printf()
    {
        cout << "Name is:" << name << "\n";
        cout << "Rollno is:" << rollno;
    }
};

// Single Level Inheritance:
class vehicle
{
public:
    int milage = 30;

    void details()
    {
        cout << "Milage is:" << milage << "\n";
    }
};

class car : public vehicle
{
public:
    string name = "Maruti";

    void c_details()
    {
        cout << "I am a car.\n";
        cout << "Name is :" << name << "\n";
    }
};

// Multilevel Inheritance:
class grandparent
{
public:
    string name;
    void set_name(string n)
    {
        name = n;
    }
    void get_name()
    {
        cout << "Name is:" << name << "\n";
    }
};
class parent : public grandparent
{
public:
    int rollno;
    void set_rollno(int a)
    {
        rollno = a;
    }
    void get_rollno()
    {
        cout << "Rollno is:" << rollno << "\n";
    }
};
class child : public parent
{
public:
    int age;
    void set_age(int b)
    {
        age = b;
    }
    void get_age()
    {
        cout << "Age is:" << age << "\n";
    }
};

// Multiple Inheritance:
class parent1
{
public:
    void part1()
    {
        cout << "I am parent 1.\n";
    }
};
class parent2
{
public:
    void part2()
    {
        cout << "I am parent 2.\n";
    }
};
class child_class : public parent1,public parent2
{
public:
    void child_part()
    {
        cout << "I am child.\n";
    }
};

int main()
{

    // 1. Classes = Classes are the bundel of attributes and functions. Attributes are used for data storage and functions are used to process and work on that data.
    // 2. Objects = Objects are called the instances of classes.
    // e.g. = "Phone" is a class and "iphone or Samsung" is the object so in simple words we can says that classes are the blue print and the objects are the products based on the blue print.
    // Syntax:
    /*

        class name_of _the_class_with_first_word_capital{
            Public:
            // write your attribute.

            // write functions called method(s) to print work on the attributes.
        };
    */
    // e.g. :

    // Student s1;
    // Student s2;

    // s1.initialize();
    // s1.printf();

    // s2.initialize();
    // s2.printf();

    // 2. Constructor = Constructor are the special functions which are used to initialize the attributes of a class. There are two types of the classes:
    // 1. Parameterized Constructor.
    // 2. Non-Parameterized constructor.

    // Syntax:
    /*
        class blueprint_name{
            public:
            // write attributes.
            int a;
            int b;

            blueprint_name(int x,int y){
                a = x;
                b = y;
            }

            // write method to work on it;
        };
    */

    // e.g. :

    // string a;
    // int b;
    // cout << "Please enter your name:";
    // cin >> a;
    // cout << "Please enter you rollno:";
    // cin >> b;
    // Student_c s1(a, b);
    // s1.printf();

    // Inheritance = Inheritance is the process when a class directly or indirectly access to the other class attributes and method. The class inherited is called base class and the class are being inherit is called the sub class.There are five types of inheritance in c++:

    //  1. Single Inheritance = In this we have only one parent and one child.
    // syntax:
    /*
        class parent{
            public:
            // attributes
            // methods
        }

        class child:public parent{
            public:
            // attributes
            // methods
        }
    */
    // e.g. :

    // car c1;
    // c1.c_details();
    // c1.details();

    //    2. Multilevel Inheritance. = In this we have grandparent,parent and child.
    /* Syntax:
        class grandparent{
            public:
            // attributes and methods
        };
        class parent:public grandparent{
            public:
            // attributes and methods
        }
        class child:public parent{
            pulic:
            // attributes and method
        };
    */
    // e.g. :

    //    child c1;
    //    c1.set_name("Sahil");
    //    c1.set_age(19);
    //    c1.set_rollno(5);

    //    c1.get_name();
    //    c1.get_age();
    //    c1.get_rollno();

    //    3. Multiple Inheritance = In this we have two parents and one child,which is inherites from both of the two parents.
    /* Syntax:
    class parent1{
        public:
        //attributes and methods
    };
    class parent2{
        public:
        //attributes and methods
    };
    class child:public parent1,public parent2{
        public:
        //attributes and methods
    };
    */
    // e.g. :
    child_class c1;
    c1.part1();
    c1.part2();
    c1.child_part();

    //    4. Hierarchical Inheritance.
    //    5. Hybrid Inheritance.

    return 0;
}