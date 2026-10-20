using namespace std;
#include <iostream>
#include <cstring>

// Make a public animal class:
class Animal
{
public:
    string name;
    int age;

    void set_details(string name1, int age1)
    {
        name = name1;
        age = age1;
    }
    void get_details()
    {
        cout << "The name is :" << name << endl;
        cout << "The age is :" << age << endl;
    }
};

// Make a private class:
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void set_private_data(int a1, int b1, int c1);
    void get_all_data()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    }
};

void employee ::set_private_data(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

// Make a binary class to find the ones complement:
class binary
{
    // In class everything write outside the public modifier is private.
    string s; // Private
public:
    void get_binary();
    void check_binary();
    void ones_complement();
    void display();
};
void binary ::get_binary()
{
    cout << "Please enter any binary number:";
    cin >> s;
}
void binary ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid Binary Format.";
        }
    }
}
void binary ::ones_complement()
{
    check_binary(); // It is called nesting of member function.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout<< s.at(i);
    }
}

int main()
{
    // Classes = Classes are the user defined data type and are a templates which is used to declare objects.Classes consists of variables and functions,which are also called class variable.

    // Modifiers  = In c++ classes we have three types of modifiers : public and private,protected.
    // Public Access Modifier = All the variable and functions are declared inside the public access modifiers will be available for everyone.They can be accessed from both inside and outside the class.Dot(.) operator are used in the program to access public data.
    // Private Access Modifier = All the variable and function are declared inside the private modifier will not be available for everyone.They can only be accessed inside the class but not permissible to access directly from outside the class.
    /* Syntax to declare a class are as follow:

    class class_name{
        Modifier_name:
        // Write properites here
    }
    int main(){
        class_name object_name;
        // Now use all the properties of the class with the help of the dot operator.
    }
    */
    // e.g. :
    //    Animal a1;
    //    a1.set_details("Dog",5);
    //    a1.age = 7;
    //    a1.name = "Cat";
    //    a1.get_details();

    // Make a class array to store and print the data:
    // Animal a2[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     string a;
    //     int b;
    //     cout << "Please enter the name of your pet:";
    //     cin >> a;
    //     cout << "Please enter the age of your pet:";
    //     cin >> b;
    //     a2[i].set_details(a, b);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     a2[i].get_details();
    // }

    // Make a private class and access there variables indirectly:
    // employee e1;
    // //e1.a = 1;   // We cannot set the private variable with the help of dot operator.
    // e1.d = 36;
    // e1.e = 40;
    // e1.set_private_data(1,2,3); // We can access the private variable indirectly.
    // e1.get_all_data();

    // Nesting of members functions = It is the process in which one function of the class can call inside the other class function is called nesting of member function.
    // e.g. : Making a class to find the ones complement of the binary number.

    binary b1;
    b1.get_binary();
    b1.ones_complement();
    b1.display();
    return 0;
}