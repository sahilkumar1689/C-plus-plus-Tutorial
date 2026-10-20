using namespace std;
#include <iostream>

// 1. Make template to find the dot product:
template <class T>

class vector
{
public:
    T *ptr;
    int size;   
    vector(int s)
    {
        size = s;
        ptr = new T[size];
    }
    T dot_product(vector obj)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->ptr[i] * obj.ptr[i];
        }
        return d;
    }
};

// 2. Multiple parameters in the templates:
template <class T1, class T2>
class base
{
public:
    T1 data1;
    T2 data2;
    base(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "Data1 is:" << data1 << endl
             << "Data2 is:" << data2 << endl;
    }
};

// 3. Default parameters in the templates:
template <class Temp1 = int, class Temp2 = int>

class base2
{
public:
    Temp1 a;
    Temp2 b;
    base2(Temp1 x, Temp2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a is:" << a << endl
             << "b is:" << b << endl;
    }
};
// 4. Make a template class and define its member function outside it:
template <class T>
class set{
    public:
    T data;
    T set_data(T a);
    void get_data(){
        cout<<"Data is:"<<data<<endl;
    }
};
// Following syntax is used to define the member function outside the class:
template <class T>
T set <T> :: set_data(T a){
    data = a;
    return data;
}

int main()
{
    // Templates = Basically,templates are a feature of the c++ programming language that allow functions and classes to operate with the generic data types.This allows a function or class to work on many different data type without being rewritting for each one.In simple words we can say that templates is a blueprint for creating a generic classes or functions.

    /* Syntax for declaring a templates are as follow:
    template <class T>   // This line is very important to make any class template.

    // After that simple make your classes,but inside the class at the place of data type we use "T" word,it means data type can be replaces.
    class base{
        T data;
        public:
        void set(T a){
            data = a;
        }
    };

    int main(){

        // Now see how we call template class:
        base <int> b1;
        b1.set(1);

        return 0;
    }

    */

    // e.g. : Make a template class which is used to find the dot product of the two class with different data type:

    // 1. We can use int data type:
    vector<int> v1(3);
    v1.ptr[0] = 1;
    v1.ptr[1] = 2;
    v1.ptr[2] = 3;
    vector<int> v2(3);
    v2.ptr[0] = 1;
    v2.ptr[1] = 2;
    v2.ptr[2] = 3;
    int a = v1.dot_product(v2);
    cout << a << endl;

    // We can also use float data type:
    vector<float> v3(3);
    v3.ptr[0] = 1.2;
    v3.ptr[1] = 2.3;
    v3.ptr[2] = 3.4;
    vector<float> v4(3);
    v4.ptr[0] = 1.0;
    v4.ptr[1] = 2.1;
    v4.ptr[2] = 3.2;
    float a1 = v3.dot_product(v4);
    cout << a1 << endl;

    // 2. Templates with multiple parameters = In this we can set the mutiple parameters in the templates.
    // e.g. :

    base<int, float> b1(16, 16.16);
    b1.display();

    // 3. Default parameters in the templates = You can also set the default parameters in the templates.
    // e.g. :
    base2<> b2(5, 5);
    b2.display();

    // 4. Templates used with member functions of the class = Since,we already know that we declare the member function inside the class and after that write its defination outide the class,with the help of scope resolution "::" operator.But if we use templates in our class,then also we can done it with the help of similar syntax with some addition modifications.
    /* Syntax are as follow:
    template <class T>
    class base{
        public:
        T a;
        T set(int a1);
    };
    T base<T> :: set(int a1){
        a = a1;
    }
    */
    // e.g. : Make a template class and define its member function outside it:
    set<int> s1;
    s1.set_data(10);
    s1.get_data();
    



    

    return 0;
}