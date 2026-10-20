using namespace std;            // Standard namespace. 
#include<iostream>              // Include iostream library file.

// Main function.
int main(){                    
    
    // 1. Standard input/output stream.

    cout << "Hello World.\n";     // "Cout<<" is used to print output to the console.It is called standard output stream.
    int A;
    cout << "Enter any number:";
    cin>>A;                      // "cin>>" is used to take input from the user and store the value in your desired variable "e.g.A".
    cout << "You enter:"<<A<<"\n";

    // 2. Data Types = Basically,data type are used to discribe the type of the data.There are two types of data types in c++:

    // 1. Premittive data types = int,char,float,bool,double(it maeans double size of float),void(it means valueless).
    // 2. Derived data types = Array.

    // 3. Variables = Variable is the name of the memory location which is used to store some data.
    int a = 10;
    float b = 10.00;
    char c = 's';
    bool d = true;
    double e = 165351;
    cout <<"Sum of a and b is:"<<a+b<<"\n";
    cout <<"Character is:"<<c<<"\n";
    cout<<"Boolean value is:"<<d<<"\n";
    cout<<"Double value is:"<<e<<"\n";

    // 4. Modifier = It is used to change the base type of the data type.Only char,int and double data type support the modifier.
    // There are four types of modifier: signed,unsigned,long,short.

    // 5. Now check the size of the all data type:
    cout<<"The sizeof(int) is:" <<sizeof(int) <<" bytes\n";
    cout<<"The sizeof(float) is:" <<sizeof(float) <<" bytes\n";
    cout<<"The sizeof(char) is:" <<sizeof(char) <<" bytes\n";
    cout<<"The sizeof(double) is:" <<sizeof(double) <<" bytes\n";
    cout<<"The sizeof(bool) is:" <<sizeof(bool) <<" bytes\n";
    cout<<"The sizeof(short) is:" <<sizeof(short) <<" bytes\n";
    cout<<"The sizeof(long) is:" <<sizeof(long) <<" bytes\n";

    // Operators = In c++ we have maninly five types of operators:

    // 1. Arithmetic Operators = It include two types of operators:
    // * Unary Operator = a++(Post increment) , ++a(Pre increment), a--(Post decrement), --a(Pre decrement).
    // * Binary operators = +,-,*,/,%,**,etc.

    // 2. Relational Operators = It is used to find the relation between the two operands.
    // e.g. : ==,<=,>=,!=,etc.

    // 3. Assignment Operators = It is used to assign the value.
    // e.g. : =,+=,-=,*=,/=,etc.

    // 4. Bitwise operator = It is used to work at the bit level.
    // e.g. : AND(Bitwise and),OR(Bitwise or),NOT(Bitwise not).

    // 5. Ternory Operator = It is also called the short hand technique of the if else condition.
    // Syntax:
    // (condition) ? statement(s):statement1(s)

    
    return 0;                   
}