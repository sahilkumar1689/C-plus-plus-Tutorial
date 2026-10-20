using namespace std;
#include <iostream>

int main()
{

    // Arrays = Array is collection of similar data types, which is stored at contigeous memory location.
    /* Syntax to declare an array:
    Data_type array_variable_name[Size_of_array] = {value_of_array};
    e.g.
    int arr[5] = {1,2,3,4,5};
    */

    // write a program to take input from the user and stored in the array:
    // int arr[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Please enter " << (i + 1) << " value in the array:";
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Array with poiner = We can also use pointer with arrays.
    // Pointer arithmetic = Pointer can be increment and decrement.
    /* Syntax are as follow:
    int a = 10;
    int *ptr = &a;
    ptr++;           // It can be increase by 4-bit(depending upon the data type).

    Note = 1. You can also subtract two pointer address.
    2. You can also compare two pointer.
    */

    // Write a program to print the value of an array with the help of pointer:
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // You can also write &arr[0];
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr; // Instead of ptr++ we can also write *(ptr+i) or *(ptr++)
        ptr++;
    }

    // Note = 1. Array is a self pointer,so it means arr = &arr[0].
    // 2. You can increment pointer address by using ptr++ or ptr+i and print the value by using *(ptr++) or *(ptr+i).
    // 3. One more important thing the *(ptr++) and *(ptr+i) are two different things.In
    // *(ptr++) = You assign and increment the pointer value.
    // *(ptr+i) = You only increment the pointer value.

    return 0;
}