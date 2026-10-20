using namespace std;
#include <iostream>
#include <cmath>
// Make a base class:
class employee
{
public:
    int id;
    string name;
    int salary;
    employee() {}

    employee(int emp_id, string emp_name, int emp_salary)
    {
        id = emp_id;
        salary = emp_salary;
        name = emp_name;
    }

    void show()
    {
        cout << "The name of the employee is:" << name << endl;
        cout << "The id of the employee is:" << id << endl;
        cout << "The salary of the employee is:" << salary << endl;
    }
};

// Make a derived class:
class programmer : public employee // You can also try for private
{
public:
    int number_of_language;
    programmer(int emp_id, string emp_name, int emp_salary, int emp_lang)
    {
        id = emp_id;
        salary = emp_salary;
        name = emp_name;
        number_of_language = emp_lang;
    }
    void show_lang()
    { // show();   // This function is called when the visibility mode is private
        cout << "The number of language a programmer knowns are:" << number_of_language << endl;
    }
};

// e.g.2:
// class employee{
//     protected:
//     int a;
//     public:
//     string name;
//     int id;
//     employee(string emp_name,int emp_id){
//         name=emp_name;
//         id=emp_id;
//     }
//     void show_emp_detials(){
//         cout<<"Name is:"<<name<<endl;
//         cout<<"Id is:"<<id<<endl;
//     }
// };
// class programmer:protected employee{
//     int lang;
//     public:
//     programmer(string name,int id,int emp_lang):employee(name,id){
//         lang=emp_lang;
//         a=1;
//     }
//     void show_lang(){
//         show_emp_detials();
//         cout<<"Number of languages:"<<lang<<endl;
//     }
//     void set_a(int a1){
//         a=a1;
//     }
//     void get_a(){
//         cout<<a<<endl;
//     }
// };

// 1. Make a single inheritance class:
class base
{
    int data1;

public:
    int data2;
    void set_data(int a, int b)
    {
        data1 = a;
        data2 = b;
    }
    int get_data1()
    {
        return data1;
    }
    int get_data2()
    {
        return data2;
    }
};

class derived : public base
{ // You can also try for the private
public:
    int data3;
    // int a,b;
    // derived(){
    // cout<<"Please enter the value of a and b:";    // This code is run when the visibility mode is private.
    // cin>>a>>b;
    // }

    void process()
    {
        // set_data(a,b);      // This code is run when the visibility mode is private.
        data3 = data2 * get_data1();
    }
    void show_data()
    {
        cout << "data1 is:" << get_data1() << endl;
        cout << "data2 is:" << data2 << endl;
        cout << "data3 is:" << data3 << endl;
    }
};

// 2. Make a protected modifier class:
class base_data
{
protected:
    int a;

private:
    int b;

public:
    int c;
};

class derived_data : private base_data
{
public:
    // d1.a = 1;

    void set(int a1, int b1)
    {
        a = a1;
        c = b1;
    }
    void print()
    {
        cout << "Protected is:" << a << "Public is:" << c << endl;
    }
};

// 3. Make a program for multilevel Inheritance:
class student
{
protected:
    string name;
    int roll_no;

public:
    void set_std_details(string std_name, int std_rollno)
    {
        name = std_name;
        roll_no = std_rollno;
    }
    void get_std_details()
    {
        cout << "The name of the student is :" << name << endl;
        cout << "The roll_no of the student is :" << roll_no << endl;
    }
};

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_std_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_std_marks()
    {
        cout << "The maths marks is:" << maths << endl;
        cout << "The physics marks is:" << physics << endl;
    }
};

class result : public exam
{
public:
    void display_Result()
    {
        get_std_details();
        get_std_marks();
        cout << "The percentage of the student is :" << (maths + physics) / 2 << "%" << endl;
    }
};

// 4. Make a program for multiple Inheritace:
class num1
{
protected:
    int a;

public:
    void set_num1(int a1)
    {
        a = a1;
    }
};
class num2
{
protected:
    int b;

public:
    void set_num2(int b1)
    {
        b = b1;
    }
};
class num3 : public num1, public num2
{
public:
    void show()
    {
        cout << "Num1 is:" << a << endl;
        cout << "Num2 is:" << b << endl;
    }
};

// Exercise Solve:

// Make a simple calculator class:
class simple_calculator
{
protected:
    int a, b;

public:
    void set_values()
    {
        cout << "Please enter any two numbers:";
        cin >> a >> b;
    }
    void Perform_simple_Calc()
    {
        cout << "The Sum is:" << a + b << endl;
        cout << "The subtraction is:" << a - b << endl;
        cout << "The multiplication is:" << a * b << endl;
        cout << "The division is:" << a / b << endl;
    }
};

class scientific_calculator
{
protected:
    int a;

public:
    void set_value()
    {
        cout << "Please enter any number:";
        cin >> a;
    }
    void perform_scientific_calc()
    {
        cout << "The sin " << a << "degree is:" << sin(a) << endl;
        cout << "The cos " << a << "degree is:" << cos(a) << endl;
        cout << "The tan " << a << "degree is:" << tan(a) << endl;
        cout << "The sqrt of " << a << " is:" << sqrt(a) << endl;
    }
};

class hybrid_Calculator : public simple_calculator, public scientific_calculator
{
public:
    void set_all_details()
    {
        set_values();
        set_value();
    }
    void perform_all_calc()
    {
        Perform_simple_Calc();
        perform_scientific_calc();
    }
};

// 5. Make program to resolve ambiguity :
class base1
{
public:
    void greet()
    {
        cout << "Hello World." << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Welcome in the C++ World." << endl;
    }
};
class derived1 : public base1, public base2
{
public:
    void greet()
    {
        base1 ::greet();
    }
};

// 6. Hybrid with the virtual base class:
class hb_student
{
protected:
    int roll_no;

public:
    void set_rollno(int a)
    {
        roll_no = a;
    }
    void print_rollno()
    {
        cout << "Your roll no is:" << roll_no << endl;
    }
};
class test : virtual public hb_student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Maths marks are:" << maths << endl;
        cout << "physics marks are:" << physics << endl;
    }
};
class sports : virtual public hb_student
{
protected:
    int scores;

public:
    void set_scores(int sc)
    {
        scores = sc;
    }
    void print_scores()
    {
        cout << "Your scores are:" << scores << endl;
    }
};
class total_result : public test, public sports
{
public:
    int total;
    void display()
    {
        total = maths + physics + scores;
        print_rollno();
        print_marks();
        print_scores();
        cout << "Your total is:" << total << endl;
    }
};

int main()
{
    // Inheritance = Reusability is the very important feature in the object oriented programming,this concept of reusability in the c++ is supported using inheritance,in this we can reuse the properites of the existing class by inheriting it.The existing class is called base class,and the new class which is inherited by the base class is called derived class.

    /* There are different types of inheritance in c++:

    1. Single Level Inheritance = Single inheritance is the type of inheritance in which one derived class can inherited from the one base class.
    2. Multiple Inheritance = Multiple inheritance is the type of inhreritance in which one derived class can be inherited from more than one base class.
    3. Hierarchical Inheritance = In this several derived class can be inherited from only one base class.
    4. Multilevel Inheritance = In this one derived class can be derived from the other derived class.
    5. Hybrid Inheritance = It is the combination of mutiple inheritance and the multilevel inheritance.The structure of hybrid inheritnace form a dimond type structures.
    */

    // Base class = The class which is inherited by the other class is called base class.
    // e.g. :

    // employee e1(1, "Sahil", 36), e2;
    // e1.show();

    // Derived class Syntax:
    /*
    class {{derived_class_name}} : {{visibility_mode}} {{base_class_name}}{
        // Write the properites of the derived class.
    }

    Note : 1. By default visibility mode is private.
    2. Public visibility mode = In the public visibility mode the public members of the base class becomes the public memeber for the derived class.It means that the public members of the base class can be used inside the derived class and in the main function.Similarly the protected members of the base class can be used inside the derived class but not used in the main function.
    3. Private visibility mode = In the private visibility mode the public members of the base class becomes the private members for the derived class they can be used inside the derived class,but not used outside the class,it means in the main function.Similary the protected members of the base class can be used in the derived class but not used in the main function.
    4. Protected visibility mode = It is similar to the private visibility mode.
    5. The private members of the base class cannot be inherited in any visibility mode.
    */
    // e.g. :
    // programmer p1(2, "Sahil", 36, 5);
    // p1.show();
    // p1.show_lang();

    // 1. Single Inheritance = In this one base class one derived class.

    // e.g. :
    // derived d1;
    // d1.process();
    // d1.show_data();

    // 2. Protected Modifier = Protected modifier are similar to the private access modifier but the only difference is that, private access modifier can be accessed inside the inherited class.

    /* A table is used to clarify:
                        |    Private_Modifier  |  Public_Modifier    | Protected_Modifier

    Private_members     |   not inherited      |  not inherited      |     not inherited

    Public_members      |    inherited but     | inherited also they |    inherited but
                        |    not call          |  can call           |     they can't call

    Protected_members   |    inherited but     |  inherited but      |    inherited but not
                        |    not call          | not call            |     call
    */

    // e.g. :
    // derived_data d1;
    // d1.set(1,2);
    // d1.print();

    // 3. Multilevel Inheritance = In this one derived class can be derived from the other derived class.
    // e.g. : Make a program to calculated the percentage and the student details:
    // result s1;
    // s1.set_std_details("Sahil",5);
    // s1.set_std_marks(94,85);
    // s1.display_Result();

    // 4. Multiple Inheritance = In this one derived class and more than one base class.
    // e.g. :
    // num3 n1;
    // n1.set_num1(1);
    // n1.set_num2(2);
    // n1.show();

    // Exercise solve = Make two class one name is simple_calculator and the second name is the scientific calculator.Simple_calculator takes two number as a input and perform the +,-,*,/ on them and also print their result,similary scientific calculator done the same things and perform any four calculation of our choice and print.Now also make a another class which is inherited from the both of the two class and they use the properties of both the two classes.

    // simple_calculator s1;
    // s1.set_values();
    // s1.Perform_simple_Calc();

    // scientific_calculator sc1;
    // sc1.set_value();
    // sc1.perform_scientific_calc();

    // hybrid_Calculator hb1;
    // hb1.set_all_details();
    // hb1.perform_all_calc();

    // 5. Ambiguity Resolution =  when a derived class can be inherited from the two or more base classe then sometime it happens that both the classes have a function with same name,so it is confusing for the derived class which function to use,so to solve this confusion we use scope resolution "::" operator, in the derived class.
    // e.g. :

    // derived1 d1;
    // d1.greet();

    // 6. Hybrid Inheritance and Virtual base class = In hybrid inheritance we generally use the combination of the multiple and the multilevel inheritance so in that case the ambiguity arises every time,so to resolve this we simple use the "virtual" key words with the base class every time in the case of inheritance syntax.
    // e.g. :

    total_result s1;
    s1.set_rollno(5);
    s1.set_marks(95, 90);
    s1.set_scores(100);
    s1.display();

    // Note = 1. You not so vary about the virtual base class,only one thing keep that in your mind is whenever hybrid inheritance is used only then virtual base class used.Rest of the concept is similar in the inheritance.

    // 2. Examples of inheritance:
    // Single = employee <-- programmer.
    // Hyrarchical = employee <-- programmer and employee <-- manager.
    // Multiple = simpleCal,ScientificCal <-- hybridCal.
    // Multilevel,hybrid = student,test/sports,result.

    return 0;
}