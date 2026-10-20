using namespace std;
#include <iostream>
#include <iomanip>

int main()
{

    // 1. Basic Input/Output Functions = The input and output are the basic aspect of any programming language. The c++ language can also allow us to take and input and output from the user.For this we firstly have to include the "<iostream >"library. In this library file we have two types of stream: input stream and output stream.
    /* 1. Input stream = In this the direction of flow of bytes from input devices(e.g. keyboard) to the main memory.For this purpose we have to use "cin" keyword which is used to take input from the user at runtime.
    Syntax:
    cin >> varibale_name;
    ">>" it is called extraction operator.

    2. Output Stream = In this the direction of the flow of bytes from the main memory to the input device (e.g. monitor).For this purpose we have to use "cout" keyword to print.
    Syntax:
    cout << "Hello World";
    "<<" are called the insertion operator.
    */

    // e.g. :
    // int a ;
    // cout << "Hello World"<<endl;
    // cout << "Please enter any number:";
    // cin>>a;

    // 2. Header files = In c++ "#include" are user to import any header files in the c++ program. For example, we include "<iostream>" so that we can use the "cout" and "cin" functions write init.Now we have two types of header files:
    /*
    1. System header files = These are those files which are shiped with the compiler. e.g."iostream".
    2. User defined header files = These are those files which can be created by a user.
    e.g. #include "hello.h" but the hello.h file have to created first before include.
    */

    // 3. Data types = Basically,data types are used to discribe the type of the data that a variable have to store.For example, a int variable can only store the integer type data and a char variable can store only character type data.In c++ there are three types of data types:
    /* 1. Built-in data type = It includes int,char,float,double,bool.
    2. User defined data type = It includes struct,union,enum.
    3. Derived data type = It include array,pointer,function.
    */
    // e.g. of built-in data types are discussed below:
    //   int a = 10;
    //   float b = 10.10;
    //   char c = 'c';
    //   double d = 10.1234;
    //   bool e = true;
    //   cout <<"Integer a value is:"<<a<<endl;
    //   cout <<"float b value is:"<<b<<endl;
    //   cout <<"character c value is:"<<c<<endl;
    //   cout <<"double d value is:"<<d<<endl;
    //   cout <<"boolean e value is:"<<e<<endl;

    // 4. Variables = Variables is the name of the memory location which is used to store the some data.
    // Basic syntax to declare a variable are:
    // data_type variable_name = value/data to be store;
    // e.g. :
    // int a = 10;
    // char b = 'c';

    // On the basic of scope variable are of two types:
    // 1. Local Variable = These are those variable which is declared inside the function brackets and it can be used only inside the function.
    // Syntax:
    /*  void add(){
        int a = 10;
        cout<<a;
    }
    */

    // 2. Global Variable = These are those variable which is declared outside the function and declared anywhere from the function.
    // Syntax:
    /*int a = 10;
    void add(){
        cout<<a;
    }

    Note = 1. The global and local variable can have same variable name.
    2.In the presence of both global and local variable the importance can gave to the local variable.But if we have to access the gloable variable insted of local variable then we have to used the scope resolution operator "::" symbol.
    //e.g. :
    int a = 10;
    void main(){
        int a = 5;
        cout<<::a;  // global variable
    }
    */

    // Now there are some rules we have to follow to declare a variable:
    /* 1. First letter can be a alphabet or a "_" underscore.
    2. No special character or white space inside the variable name.
    3. The variable name length range can be vary from the 1 to 255 characters.
    4. The reserved keyword cannot be used as a variable name.
    5. After first letter, variable name contains letters and numbers.
    */

    // 5. Reference Variable and Type Casting  = Reference variable can used as a alias of a variable.
    // Syntax:
    // int this_is_a_integer_variable_ = 10;
    // int &y = this_is_a_integer_variable_;

    // cout << this_is_a_integer_variable_<<endl;
    // cout << y;

    // 6. Type Casting = It is used to change the variable of one data type to the another data type.
    // Syntax:
    // int a = 10;
    // float b = (float)a;
    // cout<<b;
    // cout<<(int)b;    // Type casting the datatype.
    // cout<< a;

    // 7. Constant and Manipulator = Constant are those variable whose value cannot be changed in the whole code.
    // Syntax:
    // const float pi = 3.14;
    // // pi++;  // can't work
    // cout<<pi;

    // Manipulator = It is used as a escape characters.
    // e.g. = "endl" is used to generate new line and "setw()" is used to generate space, etc.To use the""setw()" manipulator we have to include the "iomanip" library file.

    // Syntax:
    // cout<<"Hello World."<<endl<<setw(5)<<"Hello World.";

    // 8. Static Variables = Static variable are those variable whose value will remain static untill the program execution is stop.The by default value of the "static" is 0.Not matter you initialized or not.
    // e.g. :
    // static int a_;
    // a_ = a_ + 1;
    // cout << a_ << endl;
    // a_ = 5;
    // cout << a_ << endl;

    return 0;
}