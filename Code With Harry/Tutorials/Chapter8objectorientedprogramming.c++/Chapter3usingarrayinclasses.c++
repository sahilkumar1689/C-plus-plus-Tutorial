using namespace std;
#include <iostream>

class shop
{
    int items[100];
    int price[100];
    int counter = 0;

public:
    void set_item();
    void display_item();
};
void shop ::set_item()
{
    int n;
    cout << "Please enter the number of items to store:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Please enter the item id of " << i + 1 << " product:";
        cin >> items[i];
        cout << "Please enter the price of the " << i + 1 << " product:";
        cin >> price[i];
        counter++;
    }
}
void shop ::display_item()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The itemid " << items[i] << " price is:" << price[i] << endl;
    }
}

// Make a employee class with the static variable:
class Employee{
    int id;
    static int counter;    // static variable have default value zero, so we no need to initialize it.
    public:
    void set_id(){
        cout<<"Please enter the id:";
        cin>>id;
        counter++;
    }
    void get_id(){
        cout<<"The id of the "<<counter<<" employee is:"<<id<<endl;
    }
    static void show_count(){
        cout<<"The counter is:"<<counter<<endl;
    }
};

int Employee ::counter;  // it is important line to initialize a static variable

// Make a class to add the complex number:
class complex{
    int a,b;
    public:
    void set_data(int a1,int b1){
        a = a1;
        b = b1;
    }
    void get_complex_data(complex obj1,complex obj2){
        a = obj1.a +obj2.a;
        b = obj1.b + obj2.b;
    }
    void print(){
        cout<<"The complex number is:"<<a<<"+"<<b<<"i"<<endl;
    }
};

int main()
{
    // Array with classes and objects = In classes array are used to store multiple value. in the single variable and array with objects are used to store the multiple objects value in the single objects.

    // e.g. :Making a program to store the multiple items id and their prices for the 2 shops.
    // shop s1[5];
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << "For shop " << i + 1 << ":" << endl;
    //     s1[i].set_item();
    //     cout << "For shop " << i + 1 << " details are:" << endl;
    //     s1[i].display_item();
    // }

    // Static variable and the static function = When a static varaible is created then there is only one copy of the variable which is shared to all of the objects.And static function are used to access only static variable they cannot access any other property of the class.
    // e.g :

    // Employee sahil;
    // sahil.set_id();
    // sahil.get_id();
    // Employee::show_count();  // Call static function

    // Passing object as a function arguments = Objects can be passed as the function arguments.This is usefull when we want to assign the value of the passed objects to the current objects.
    // e.g. : Make a program to add the complex number:
    complex obj1,obj2,obj3;
    obj1.set_data(1,2);
    obj1.print();

    obj2.set_data(2,1);
    obj2.print();

    obj3.get_complex_data(obj1,obj2);   // you can also set the objects as the arguemnts.
    obj3.print();
    
    return 0;
}