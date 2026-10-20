using namespace std;
#include <iostream>

// 2. Use pointer to objects:
class complex
{

    int a, b;

public:
    void set_val(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void get_val()
    {
        cout << "The value of a is:" << a << endl
             << "The value of b is:" << b << endl;
    }
};

// "this" pointer use case1:
// class A
// {
//     int a;

// public:
//     void set(int a)
//     {
//         this->a = a; // Here we can use this pointer
//     }
//     void get(){
//         cout<<a<<endl;
//     }
// };

// "this" pointer use case2 :
class A
{
    int a;

public:
    A &set(int a)
    {
        this->a = a; // Here we can use this pointer
        return *this;
    }
    void get()
    {
        cout << a << endl;
    }
};
int main()
{
    // Suggestion = Before start,please re-memorize the pointers concept ones from the pointer chapters files number 4,5,7,8(3).

    // 1. New and delete keywords = These are those keyworks which are used by the pointer to initialize the memory dynamically.

    // New keyword = It is used to initialize the memory dynamically.
    // Dynamically initialize a variable:

    // int *ptr = new int(5);  // we dynamically initialize the variable and set value to it by 5
    // cout<<*ptr<<endl;

    // Dynamically initialize an array:
    // int *arr = new int[5]; // We dynamically initialize an array.

    // We directly set the value to the array:
    // arr[0]=1;
    // arr[1]=2;
    // arr[2]=3;
    // arr[3]=4;
    // arr[4]=5;

    // But we can also set with the help of pointers:
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"Please enter the "<<i+1<<" number to add:";
    //     cin>>*(arr+i);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<*(arr)<<endl;  // You can also use there methods to print the value
    //     arr++;
    // }

    // Delete keyword = It is used to delete the dynamically initialize memory.
    // e.g. :

    // delete ptr;    // It is used to delete any variable.
    // delete[] arr;  // It is used to delete any array.
    // cout<<*ptr<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<*(arr+i)<<endl;  // You can also use ther methods to print the value
    // }

    // 2. Use pointer with objects = In this pointer can store the address of the object.And use there function with the help of arrow(->) function.
    // e.g. :

    // complex obj;
    // complex *ptr = &obj;

    // We can also doing this:In this brackets are very important,because the dot operator have higher scope.
    // (*ptr).set_val(2,3);
    // (*ptr).get_val();

    // But recommended use arrow operator:
    // ptr->set_val(1,2);
    // ptr->get_val();

    // Now we can also make object dynamically with the help of pointer:
    // e.g. :
    // complex *ptr1 = new complex;
    // ptr->set_val(1,5);
    // ptr->get_val();

    // 3. Use pointer with the array of object = In this pointer can used to store the address of the array objects.
    // e.g. :
    // complex obj[5];
    // complex *ptr = &obj[0];

    // for (int i = 0; i < 2; i++)
    // {
    //     int a, b;
    //     cout << "Please enter two values:";
    //     cin >> a >> b;
    //     ptr->set_val(a, b);
    //     ptr->get_val();
    //     ptr++;
    // }

    // Now we can also make a array of objects dynamically with the help of the pointers:
    // e.g. :
    // complex *ptr1 = new complex[5];

    // for (int i = 0; i < 2; i++)
    // {
    //     int a,b;
    //     cout<<"Please enter the two number:";
    //     cin>>a>>b;
    //     ptr1->set_val(a,b);
    //     ptr1->get_val();
    //     ptr1++;
    // }

    // 4. "this" pointer keyword = "this" pointer points to the object which calls the member function.Basically "this" pointer is used to in the two cases:
    /* Case1 = When you want to make same variable with the same name of the private class and the public member function. e.g. :
    class A{
        int a;
        public:
        void set(int a){
            this->a = a;    // Here we can use this pointer
        }
    };
    Case2 = When you want to return the same object. e.g. :
    class A{
        int a;
        public:
        A & set(int a){
            this->a = a;
            return *this;     // Here we can use
        }
        void get(){
            cout<<a<<endl;
        }
    };
    int main(){
        A a1;
        a1.set(1).get();    // By the use of this pointer we can do this.
        return 0;
    }
    */

    // e.g. :

    // case1 :
    // A a1;
    // a1.set(1);
    // a1.get();

    // case2 :
    A a1;
    a1.set(1).get();

    return 0;
}