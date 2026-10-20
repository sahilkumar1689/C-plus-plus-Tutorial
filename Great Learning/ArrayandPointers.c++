using namespace std;
#include<iostream>

int main(){

    // 1. Array = Basically array is a collection of elements of same data type.The elements store in the array are at contigous memeory locations.We can store homogenous type of elements int the array. In c++ we are mainly used two types of array:
    // 1. 1 Dimensional Array.
    // 2. 2 Dimensional Array.

    // Syntax:
    // data_type Variable_name[Size_of_array] = {Value_of_array};

    // Syntax:
    // data_type variable_name[Size_of_rows][Size_of_columns] = {{value1},{value2}};

    // e.g.

    // Static method to store value in the array:
    // int arr[5] = {1,2,3,4,5};

    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    // Dynamic method to store value in the array:
    // int arr[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"Please enter the "<<i+1<<" number to store in the string:";
    //     cin>>arr[i];
    // }
    // cout<<"\n";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    
    // 2. Pointer = Pointer is an special type of variable which is used to store the value of the other variable.
    // Syntax:
    // data_type *pointer_variable_name = address of the variable;

    // e.g. :
    int a = 10;
    int *ptr = &a;
    // To print the value stored in the pointer we use "*" asterisk sign.
    cout<<"Value of the pointer is:"<<*ptr<<"\n";
    //  To print the address stored in the pointer we cannot use "*" asterisk sign.
    cout<<"Address of the pointer is:"<<ptr;
    


    
    

    return 0;
}