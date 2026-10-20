using namespace std;
#include <iostream>
// 1. Make a program to add the complex class with the help of operator oveloading:
class complex{
    int a,b;
    public:
    void get(int a1,int b1){
        a = a1;
        b = b1;
    }
    void print(){
        cout<<"Complex number is:"<<a<<"+"<<b<<"i"<<endl;
    }
    // we can use the void return type,when we can't return anything so that the add of complex data can be rewrite in the object which call this member function.
    // void operator+(complex obj){
    //     a = this->a+obj.a;
    //     b = this->b+obj.b;
    // }
    // But if we want to assign the addition of the complex data in the other class object so we have to return the value.
    complex operator+(complex obj){
        complex temp;
        temp.a = this->a+obj.a;
        temp.b = this->b + obj.b;
        return temp;
    }
};
// 2. Make a program to demonstrate the unary operators:
class base{
    int a;
    public:
    base(){
        int a =0;
    }
    base(int x):a(x){};
    void print(){
        cout<<a<<endl;
    }
    // It is calles prefix unary oprator:
    void operator++(){
        ++a;
    }
    // It is calles postfix unary operator:
    void operator++(int){
        a++;
    }
};
int main(){
    // 1. Operator Overloading = Operator overloading is the functionality that allow us to overload the user defined data types. e.g. : structures,classes functions,etc.

    // Now there are two types of operator overloading:
    // 1. Unary operator overloading = In this we have only one operand.e.g. : a++,++a,etc.
    // In this we have two type of unary overloading:1.prefix overloading 2.postfix overloading.
    // 1. syntax for prefix is:
    /*  
    return_type operator symbol(){
        // code
    }
    */
   // 2. syntax for postfix is:
   /*
   return_type operator symbol(int){
       // code
   }
   */

    // 2. Binary operator overloading = In this we have two operand.e.g. : a+b,a-b,etc.
    // syntax for binary overloading is:
    /*
    return_type operator symbol(object){
        // code
    }
    */


   // 1. Make a program to add the complex class with the help of operator oveloading:

    // complex c1,c2,c3;
    // c1.get(1,2);
    // c1.print();
    // c2.get(1,2);
    // c2.print();
    // // In this we cannot assign the value to the new object:It is called implicit call
    // //  c1+c2;  // it indirect means that c1.operator+(c2)

    // // In this we can assign the value to the new object:It is also called explicit call
    // c3 = c1+c2;
    // c3.print();

    // 2. Make a program to demonstrate the unary operators:

    // base b1;     // Initially a = 0, because of default constructor.
    // b1.print();
    // ++b1;       // it indirect means that b1.operator++(); prefix
    // b1.print();
    // b1++;      // it's indirect means that b1.operator++(int); postfix
    // b1.print();


    // 2. Exception Handling = It is the concept in which exception is handled by the code itself,so that the program does'nt not terminate.
    // For this purpose int c++ we have three keywords:try,catch,through.
    // 1. try = A bloch of code which is supposed to be thrown an error are written inside the try block.In try block if written code shown any error then the thrown block through this error to the catch block.
    // 2. catch = A catch block take the exception through by the try block and perform the code written inside it.

    // 3. Make a program to demonstrate the exception handling:

    int a,b,result;
    cout<<"Please enter numenator and denominator:";
    cin>>a>>b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        
        result = a/b;
        cout<<result<<endl;
    }
    catch(int b)
    {q
        cout<<"Error: Denominator can't be zero."<<endl;
    }
    
    
    
    

    return 0;
}