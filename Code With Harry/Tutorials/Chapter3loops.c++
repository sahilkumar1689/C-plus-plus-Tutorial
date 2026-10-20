using namespace std;
#include <iostream>

int main()
{

    // Loop Conditons = Looping condition is used to execute the set of code continously number of times. In c++ there are mainly three types of looping coditions:

    // 1. For loop = It execute the set of code till the condition is true, if condition is false it stop execution.
    // syntax:
    /*
     for(initialization;condition;updation){
         // statement(s);
     }
    */

    // e.g.
    //    Print the number 1 to 10:
    //    for(int i =1;i<=10;i++){
    //         cout<<i<<" ";
    //    }

    //   Print the even numbers from 1 to 10:
    // for(int i=1;i<=10;i++){
    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }
    // }

    // Write a program to make a table:
    // int a;
    // cout<<"Please enter the number to print the table of them:";
    // cin>>a;
    // cout<<"Table of"<<a<<"is:\n";
    // for (int i = 1; i <=10; i++)
    // {
    //     cout<<a<<"x"<<i<<"="<<(a*i)<<endl;
    // }

    // 2. While loop = It is similar to the for loop but is used when the number of iteration is known.
    // Syntax:
    /*
      initialization;
      while(condition){
          // statement(s);
          updation;
      }
    */

    // e.g.

    // int i = 0;
    // while (i<=10)
    // {
    //     cout<<i<<" ";
    //     i++;
    // }

    // 3. Do-While loop = It is similar to the while loop but the only difference is that it execute the code atleast one time, and after that check the condition.
    // Syntax:
    /*
       initialization;
       do{
           // statement(s);
           updation;
       }while(condition);
    */
    // e.g.

    //     int i = 0;
    //    do
    //    {
    //     cout<<i<<" ";
    //     i++;
    //    } while (i<=10);

    // Break and Continue Statement = Break statement is used to stop the flow of code and exit the code from them and continue is used to skip any iteration of the code.

    // e.g. of break statement:
    for (int i = 0; i < 10; i++)
    {
        if (i==3)
        {
            break;
        }
        cout<<i<<" ";    
    } 

    // e.g. of continue statement:
    for (int i = 0; i < 10; i++)
    {
        if (i==3)
        {
            continue;
        }
        cout<<i<<" ";
    }

    
    return 0;
}
