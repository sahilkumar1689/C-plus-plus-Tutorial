using namespace std;
#include <iostream>
int sum(int a, int b)
{
    return (a + b);
}
int main()
{

    // 1. Pointers = Pointers are the special type of variable which is used to store the memory address of the other variables.
    // Syntax to declare a pointer:
    /*
    Data_type *pointer_variable_name = &variable_name;
    */
    // e.g. :
    int a = 10;    // firstly declare a variable.
    int *ptr = &a; //  Now in this (*ptr) is a pointer and it store the address(&) of varaible a .

    cout << "The address stored in pointer is:" << ptr << endl; // To find the address stored in pointer we do not use asterisk "*" sign.

    cout << "The value store at pointer address is:" << *ptr << endl; // To find the value stores at pointer address we use asterisk "*" sign.

    // Now one more example to declare a pointer:
    int age;
    int *ptr1;
    ptr1 = &age; // If we want to store the address we cannot use asterisk "*" sign.
    *ptr1 = 10;  // If we want to store the value we use asterisk "*" sign.

    cout << "The value present at age is:" << age << endl;
    cout << "The value present at the pointer is:" << *ptr1 << endl;

    // Note = 1. Now,it is clear from the above example that if we want to store or print the address we cannot use the "*" sign.
    // 2. Also,if we want to store or print the value at the pointer address we use "*" sign.

    // 2. Pointer to pointer = Now, pointer to pointer is also a special type of variable which is used to store the address of the other pointer.
    // Syntax to declare a pointer to pointer variable:
    int ages = 10;
    int *ptr2 = &ages;
    int **ptr3 = &ptr2; // Now (**ptr3) is used to store the address of the other pointer variable.

    cout << "The value at ages is:" << ages << endl;
    cout << "The value stored at ptr2 is:" << *ptr2 << endl;
    cout << "The value stored at ptr3 is:" << **ptr3 << endl;
    // Now it is clear that if you want to store the address or value of the pointer in the other variable then we use "**" sign.

    // 3. Program to demonstrate the pointer function:
    int a, b;
    cout << "Please enter two number:";
    cin >> a >> b;

    // Declare a pointer function:
    int (*ptr)(int, int);
    // ptr = sum;

    // int total = (*ptr)(a,b);
    // cout<<"Sum is:"<<total<<endl;
    return 0;
}