using namespace std;
#include <iostream>

// 1. Pointer to the derived class:
class base
{
public:
    int a_base;
    void display()
    {
        cout << "The value of the a_base is:" << a_base << endl;
    }
};

class derived : public base
{
public:
    int a_derived;
    void display()
    {
        cout << "The value of the a_base is:" << a_base << endl;
        cout << "The value of the a_derived is:" << a_derived << endl;
    }
};

// 2. Make a virtual function class:
class base_greet
{
public:
    virtual void greet()
    {
        cout << "Hello World." << endl;
    }
};
class derived_greet : public base_greet
{
public:
    void greet()
    {
        cout << "Hello welcome in the c++ world." << endl;
    }
};

// 3. Make a program to ellustrate the pure virtual function and the Abstract base class:
// This function is called the abstract base class:
class CWH
{
protected:
    string title;
    int rating;

public:
    CWH(string s, int r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // It is called pure virtual function .
};
class CWH_video : public CWH
{
    int video_length;

public:
    CWH_video(string s, int r, int vl) : CWH(s, r)
    {
        video_length = vl;
    }
    void display()
    {
        cout << "The title of the video is:" << title << endl;
        cout << "The rating of the video is:" << rating << endl;
        cout << "The video length of the video is:" << video_length << endl;
    }
};
class CWH_text : public CWH
{
    int word_Count;

public:
    CWH_text(string s, int r, int wc) : CWH(s, r)
    {
        word_Count = wc;
    }
    void display()
    {
        cout << endl
             << "The title of the text content is:" << title << endl;
        cout << "The rating of the text content is:" << rating << endl;
        cout << "The word_Count of the text content is:" << word_Count << endl;
    }
};

int main()
{
    // Polymorphism = It is the combination of two words "poly" which means several and "morphism" which means form.So,in the simple words we can say that polymorhism is something that has several forms or we can also say that it has one name and multiple forms.

    // In c++ there are two type of the polymorhism :
    /*
    1. Compile time polymorhism = In compile time polymorhism the compiler already known that which function to run, it is also called early binding.There are two type of the compile time polymorhism:
    1. Function Overloading - It is the feature which allow us to make more than one function with the same name but differet data type.
    2. Operator Overloading = It is also a feature which allow us to done more than one operation with the same same function.

    2. Run time polymorhism = In this the compiler does't known already which function to run,all these things they see at the run time,it is also called late binding.It is considerd as the slow process.In c++ we achieve it with the help of virtual function.
    1. Virtual Function = Suppose that one function is defined in the parent class and that same function is re-defined in the child class, this process is called virtual function.
    */

    // 1. Pointer to derived class = Pointer can also point to the address of the derived class.
    // e.g. :

    // We make two objects:
    // base b1;
    // derived d1;

    // But here we make a base class pointer and and set the derived class address in side them:
    // base *ptr_base = &d1;

    // Here we simply make a derived class pointer and set the derived address in them:
    // derived *ptr_derived = &d1;

    // After that the base pointer can only permission to access their own class member not the derived class members,it is the default behaviour of the class pointer.
    // ptr_base->a_base = 10;
    // ptr_base->a_derived = 16;  // Show error
    // ptr_base->display();

    // But derived pointer can access the both classes members.
    // ptr_derived->a_base = 18;
    // ptr_derived->a_derived = 16;
    // ptr_derived->display();

    // But now if we want to overight the default behaviour of the class pointer then we use the virtual function:

    // 2. Virtual Function = A member function in the base class which is declared using the "virtual" keyword is called virtual function.They can also be re-declared in the derived class with the same name.
    // e.g. : We take the similar type of example,which we used in the pointer to derived class:

    // We make two class object:
    // base_greet bg;
    // derived_greet dg;

    // Set base class pointer to the derived class:
    // base_greet *ptr_base = &dg;

    // Set simple derived pointer to the derived class:
    // derived_greet *ptr_derived = &dg;

    // Now by using the virtual function we overight the default behaviour of the class pointer now we can call the function of the derived class:
    // ptr_base->greet();

    // Similary, the derived can call their own:
    // ptr_derived->greet();

    // 3. Pure Virtual Function and Abstract Base Class = Pure virtual function is a function that does'nt perform any operation in the program and the function is decalred by assigning the value 0 to it.

    // Abstract base class = Abstract base class is a class which contains atleast one pure virtual function in it.

    // e.g. :
    CWH_video obj1("djvideo", 5, 10);
    CWH_text obj2("djtext", 5, 200);

    CWH *ptr[2];
    ptr[0] = &obj1;
    ptr[1] = &obj2;

    ptr[0]->display();
    ptr[1]->display();

    // We can also done it with the help of dynamically memory location:
    CWH *ptr1 = new CWH_video("djvideo", 5, 10);
    ptr1->display();

    /*Note = 1. One thing is keep that in your mind virtual base class is used in the hybrid inheritance.
    2. Virtual or pure virtual function or abstract base class is used in the Hierarchical inheritnace.
    */

    return 0;
}