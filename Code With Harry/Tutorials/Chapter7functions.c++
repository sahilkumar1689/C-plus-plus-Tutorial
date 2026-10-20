using namespace std;
#include <iostream>
#include <cmath>

// Make a sum functions for add two values:
// int sum(int a,int b)   // Acceptable code
// int sum(int ,int)      // Acceptable,but not so much used
// int sum(int a,b)      // Not acceptable code
int sum(int a, int b)
{
    // Here a and b are the parameters(formal parameter) which is used to take the value from the arguments(actual parameters).
    int c = a + b;
    return c;
}

// Make a functions prototype:
float sqrte(float a);

// Make a swap function with the help of call by value method:
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Make a swap function with the help of call by reference method:
void swap_r(int *ptra, int *ptrb)
{
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
}
// Make a swap function with the help of call by refernce variable method:
void swap_rv(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Set value to the function name:
int &swap_(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

// Make a inline product function:
inline int product(int a, int b)
{
    return a * b;
}

// Make a default argument function:
float moneyreciever(int money, float interest = 1.04)
{
    return money * interest;
}

// Make a recursive function to find the factorial:
int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return a * factorial(a - 1);
}

// Make a recursive function to find the nth term of the fibonacci series:
int fibo(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

// Make a overloading functions:
int add(int a, int b)
{
    return a + b;
}
float add(float a, float b)
{
    return a + b;
}

int main()
{
    // 1. Functions = Functions is a block of code that performs particular set of code.In functions we break the code into small pieces and make a functions of that particular code.Functions help us to reuse the code easily.

    /* Syntax to make functions are as follow:
    type_of_functions function_name(// Parameters if any){
        // Code to execute.
    }

    // Use in the main function:
    int main(){
        function_name(//arguments_if_any);
        return 0;
    }
    */

    // e.g. Make a function to add two value:

    //    int num1,num2;
    //    cout<<"Please enter first value:";
    //    cin>>num1;
    //    cout<<"Please enter second value:";
    //    cin>>num2;
    //    // Here,num1 amd num2 are the arguments(actual paremeters) used to send the value to the formal parameters.
    //    int c = sum(num1,num2);
    //    cout<<"The sum of two numbers is:"<<c;

    // 2. Function prototype = Basically,functions prototype is the template of the function which tells the details of the function (e.g. name,parameters,etc) to the compiler.Functions prototype help us to define a function after the function call.
    /* Syntax to declare a function are as follow;

     // Function prototype:
     int sum(int a, int b);

     // Call of main function:
     int main(){
         // Call the function sum.
         int a,b;
         sum(a,b);
     }

     // Declare a function:
     int sum(int a,int b){
         int c = a+b;
         return c;
     }
    */

    // e.g. Make a function which give the square root of the given number:
    // float a ;
    // cout<<"Please enter any number to find the square root:";
    // cin>>a;
    // cout<<"The square root is: "<<sqrte(a);

    // 3. Call by value and call by reference function:

    // Call by value = The call by value is a method in the c++,in which we can pass the values to the function arguments,which means that if we change value inside the function it will not reflect in the actual values because in the call by value method the copies of the actual parameters are sent to the formal parameters.
    // e.g. : Make a function to swap t number by using call by value:
    // int a =4,b=5;
    // cout<<"Before swap value of a and b is:"<<a<<" "<<b<<endl;
    // swap(a,b);
    // cout<<"After swap value of a and b is:"<<a<<" "<<b<<endl;

    // Call by reference = The call by reference is the method in the c++, in which we can pass the address to the functions as a arguments,which means that if we change the value inside the function then it will reflected inside the actual value as well because in the call by reference method the actual address of the variable can be used to change the value.
    // e.g. : Make a function to swap t number by using call by value:
    // int a = 4,b=5;
    // cout<<"Before swap value of a and b is:"<<a<<" "<<b<<endl;
    // swap_r(&a,&b);
    // cout<<"After swap value of a and b is:"<<a<<" "<<b<<endl;

    // 4. Call by reference variable = In this the values can be sent to the function as a argument but in the function declaration we can use the reference variable parameters.Also in this if we change the value in the function it will also affect the value in the main functions.Beacuse the reference variable can also point to the actual values.
    // e.g. Make a swap function with the help of reference variable:
    // int a = 4,b=5;
    // cout<<"Before swap value of a and b is:"<<a<<" "<<b<<endl;
    // swap_rv(a,b);
    // cout<<"After swap value of a and b is:"<<a<<" "<<b<<endl;

    // One more topic which is not so important:
    // You can also set the value to the function name.
    // e.g. :
    // int x = 4,y = 5;
    // cout<<"Before swap value of x and y is:"<<x<<" "<<y<<endl;
    // swap_(x,y) = 16;
    // cout<<"After swap value of x and y is:"<<x<<" "<<y<<endl;

    // 5. Inline function = Inline function is used to reduced the function call.Basically,When one function is being called multiple time in the program it increase the execution time. So inline function is used to reduce time and increase the program efficiency.But the inline function is used only when the function is small otherwise it is not recommended to use the inline function.
    /* Syntax to declare a inline function:
    inline int product(int a,intb){
        return a*b;
    }
    int main(){
        product(a,b);
        return 0;
    }
    */
    // e.g. :
    //    int a,b;
    //    cout<<"Please enter the value for a and b:";
    //    cin>>a>>b;
    //    cout<<"The product of a and b is:"<<product(a,b)<<endl;

    // 6. Default and constant arguments = Default arguments are those values which are used by the function,if we don't input our values.Now it is recommended to write the default arguments after the other arguments.
    // e.g. :
    // int money = 100000;
    // cout<<"If you have "<<money<< "in your bank account,so after one year it will be: "<<moneyreciever(money)<<endl;
    //  cout<<"For VIP:If you have "<<money<< "in your bank account,so after one year it will be: "<<moneyreciever(money,1.1)<<endl;

    // Note = 1. Default argument direction always start from right side.

    // Constant arguments are used when we don't want our values to changed by the functions.
    /* Syntax :
    int str(const char *ptr){
       // Properties
    }
    */

    // 7. Recursion and recursive function = When a function call itself is called recursion and the function which is caling itself is called recursive function. The recursive function consists of a base condition,it is very important to add base condition in the resursive function otherwise the function will never stop executing.
    // e.g. : Make a program to find the factorial of the given number:
    // int a;
    // cout<<"Please enter the number to find the factorial of that number:";
    // cin>>a;
    // cout<<"The factorial of "<<a<<" is :"<<factorial(a);

    // Make a program to find the nth term of the fibonacci series:
    // int a;
    // cout<<"Please enter the number to find the nth term of the fibonacci series:";
    // cin>>a;
    // cout<<"The nth term of the fibonacci series is: "<<fibo(a);

    // 8. Function overloading = It is the process to make more than one function with the same name but the different data type, parameters and arguments.
    // e.g. :
    int a, b;
    float x, y;
    cout << "Pleas enter two number:";
    cin >> a >> b;
    cout << "Please enter two floating number:";
    cin >> x >> y;
    cout << "The sum of " << a << " " << b << " is:" << add(a, b) << endl;
    cout << "The sum of " << x << " " << y << " is:" << add(x, y);

    return 0;
}

// Declaration of the functions:
float sqrte(float a)
{
    float b = sqrt(a);
    return b;
}