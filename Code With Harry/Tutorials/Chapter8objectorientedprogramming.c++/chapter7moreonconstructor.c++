using namespace std;
#include <iostream>
// 1. Constructor in the deived class :

// Case1 : Single Inheritance
class a{
    int data1;
    public:
    a(int a1){
        data1 = a1;
        cout<<"a() called"<<endl;
    }
    void print_a(){
        cout<<"data1 is:"<<data1<<endl;
    }
};
class b:public a{
    int data2;
    public:
    // There is the syntax to set vase to the base constructor
    b(int a1,int a2):a(a1){
        data2 = a2;
        cout<<"b() called"<<endl;
    }
    void print_b(){
        cout<<"data2 is:"<<data2<<endl;
    }
};

// Case2 : Multiple Inheritance

class a1{
    int a;
    public:
    a1(int x){
        a = x;
        cout<<"a1() called."<<endl;
    }
    void print_a1(){
        cout<<"The value of a is:"<<a<<endl;
    }
};
class a2{
    int b;
    public:
    a2(int y){
        b = y;
        cout<<"a2() called."<<endl;
    }
    void print_a2(){
        cout<<"The vlaue of b is:"<<b<<endl;
    }
};
class b2:public a1,public a2{
    int c;
    public:
    b2(int x,int y,int z):a1(x),a2(y){
        c= z;
        cout<<"b2() called."<<endl;
    }
    void print_b2(){
        cout<<"The value of c is:"<<c<<endl;
    }
};

// Case3 : Multilevel Inheritance
class base{
    int data1;
    public:
    base(int a){
        data1 = a;
        cout<<"base() called."<<endl;
    }
    void print_base(){
        cout<<"The value of data1 is:"<<data1<<endl;
    }
};
class base_: public base{
    int data2;
    public:
    base_(int a,int b):base(a){
        data2 = b;
        cout<<"base_() called."<<endl;
    }
    void print_base_(){
        cout<<"The value of data2 is:"<<data2<<endl;
    }
};
class derived : public base_{
    int data3;
    public:
    derived(int l,int m,int n):base_(l,m){
        data3 = n;
        cout<<"derived() called."<<endl;
    }
    void print_derived(){
        cout<<"The value of data3 is:"<<data3<<endl;
    }
};

// Case4 : Hybrid Inheritence

// class student{
//     int rollno;
//     public:
//     student(int a){
//         rollno = a;
//         cout<<"student() called."<<endl;
//     }
//     void print_rollno(){
//         cout<<"The rollno is:"<<rollno<<endl;
//     }
// };
// class marks1:virtual public student{
//     int maths;
//     public:
//     marks1(int m1,int m2):student(m1){
//         maths = m2;
//         cout<<"marks1() called."<<endl;
//     }
//     void print_marks1(){
//         cout<<"The maths marks are:"<<maths<<endl;
//     }
// };
// class marks2:virtual public student{
//     int physics;
//     public:
//     marks2(int m1,int m2):student(m1){
//         physics = m2;
//         cout<<"marks2() called."<<endl;
//     }
//     void print_marks2(){
//         cout<<"The physics marks are:"<<physics<<endl;
//     }
// };
// class result:public marks1,public marks2{
//     int total;
//     public:
//     result(int a,int b,int c,int d):marks1(a,b),marks2(a,c){
//         total = d;
//         cout<<"result() called."<<endl;
//     }
//     void print_result(){
//         cout<<"The percentage is:"<<total/2<<endl;
//     }
// };

// 2. Initialization list in the constructor:
class initial_list{
    int a,b;
    public:
    // It is called initialization list:
    initial_list(int a1,int b1):a(a1),b(b1){
        cout<<"The value of a is:"<<a<<endl
        <<"The value of b is:"<<b<<endl;
    }
};

int main(){
    // 1. Constructor in derived class = Now we can also use the constructor in the derived class by using the following syntax:

    // Syntax are as follow:
    /*
    derived_consructor_name(arg1,arg2,...):base1(arg1,...),base2(arg2,...){
        // write code for the derived_constructor class
    }
    */

   // Now there are some priority are:
   /* case1 : In single inheritance first base class the derived class
   // e.g. :
   class B:public class A{
       // Firstly A() then B() class constructor used;
   };
    
    case2 : In multiple inheritance:
    class a:public class b ,public class c{
        // Firstly b() then c() after that a();
    };

    case3 : In multilevel inheritance:
    class a{};
    class b: public class a{}
    class c : public class b{
        // Firstly a() then b() then c();
    };
    
    Case4 : Hybrid Inheritance:
    class a{};
    class b:virtual public a{};
    class c:virtual public a{};
    class d:public b,public c{
        // Firstly a() then b() after that c() at the last d();
    };
   */

  // e.g. :

  // case1 :
//   b d1(1,2);
//   b1.print_a();
//   d1.print_b();

// case2 :
// b2 d2(1,2,3);
// d2.print_a1();
// d2.print_a2();
// d2.print_b2();

// Case3 :
// derived d3(1,2,3);
// d3.print_base();
// d3.print_base_();
// d3.print_derived();

// Case4 :
// result d4(5,95,90,185);
// d4.print_rollno();
// d4.print_marks1();
// d4.print_marks2();
// d4.print_result();


// 2. Initialization list in the constructor = It is the another advanced concept to initialize the varible in the constructor.
// e.g. :
initial_list l1(1,2);









    
    return 0;
}