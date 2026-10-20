using namespace std;
#include<iostream>

// Function Declaration:
int add(int x, int y);

int multiply(int x,int y);

double multiply(double x, double y);

int main(){

    // 1. Functions = Functions are block of code which is used to perform specific task.The main advantage of the function is that we can reuse the code again and again.
    // Syntax:
    /*
        function declaration:
        int add(int x,int y){
            return x+y;
        }

        int main(){
            cout<<add(a,b);
            return 0;
        }
    */

   // e.g. :

    int a = 10;
    int b = 6;
   cout<<add(a,b)<<"\n";

   // 2. Function Overriding = It is the process of making two or more functions with the same name but with the different return type.

   // e.g. :

   int  x = 10;
   int y = 8;
   cout<<multiply(x,y)<<"\n";
   cout<<multiply(x,y);



    return 0;
}

// Function Definition:
int add(int x,int y){
    return x+y;
}

int multiply(int x, int y){
    return x*y;
}

double multiply(double x, double y){
    return x*y;
}