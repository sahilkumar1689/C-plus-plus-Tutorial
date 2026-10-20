using namespace std;
#include <iostream>

// 1. Make swap function using templates:
template <class T>

void swap_num(T &x,T &y){
    T temp = x;
    x = y;
    y = temp;
}

// 2. Set multiple parameter in teh template:
template <class T1,class T2>
float func_average(T1 a,T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

// 3. Function overriding:
void func(int a){
    cout<<"I am the original function."<<endl;
}

template <class T>
void func(T a){
    cout<<"I am the template function."<<endl;
}


int main(){
    // 1. Function Templates = We can also make the templates for the function.The concept of using templates with the function is similar to the class templates concept.But the only difference is that,at the time of function call we no need to specify the data type in the square barackets.

    // e.g. : Make a swap function with the help of function templates:
    // int a = 1, b = 2;
    // swap_num(a,b);  // Here we see that we no need to gave data type in the square brackets.But we have to gave in the class.
    
    // printf("The value of a is %d and b is %d.",a,b);
    // cout<<a<<endl<<b<<endl;

    // 2. Multiple parameters template = We can also make a mulitple parameter template.
    // e.g. : Make a average find function:
    float a = func_average(95.5,89);
    cout<<a<<endl;

    // 3. Function Overriding = If a simple function with the same name or the template function with the same name is present in the code,then first priority will gave to the original function,if the original function does'nt match then they gave to the template function.
    // e.g. :
    func(5.5);
   
    return 0;
}
