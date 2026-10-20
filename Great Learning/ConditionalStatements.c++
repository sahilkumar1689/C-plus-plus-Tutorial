using namespace std;
#include <iostream>

int main()
{

    // 1. Conditional Statements = Conditiona statements are used to execute the set of code in accordance to the some desired conditions.In C++ we have mainly five types of conditional statements:
    // 1. if statement = It is used to execute the set of code,after check the conditional statement is true.
    // Syntax:
    /*
        if(condition){
            // statement(s);
        }
    */

    // e.g.

    //    int a;
    //    cout<<"Please enter any number:";
    //    cin>>a;
    //    if(a%2==0){
    //     cout<<a<<" is an even number.";
    //    }
    //    if (a%2!=0)
    //    {
    //    cout<<a<<" is an odd number.";
    //    }

    // 2. if-else statement = In this statements we have two block,first is if and second is else.Firstly if block check the condition if the condition is true,then the code written in the block is executed and if the condition is false,then the code written inside the else block is executed.
    // Syntax:
    /*
     if(conditon){
         // statement(s);
     }
     else{
         //statement(s);
     }
    */

    // e.g.

    //    int a;
    //    cout<<"Please enter any number:";
    //    cin>>a;
    //    if (a%2==0)
    //    {
    //     cout<<a<<" is an even number.";
    //    }
    //    else
    //    {
    //     cout<<a<<" is an odd number.";
    //    }

    // 3. If-else if-else = In this we have three block of code,first block is if, second block is else if and the third block is else.Firstly, if block check the condition, if the condition is true then the code written inside the block is execute but if the condition is false,then the condition of else if block is checked,now if condition is true the code written inside the block is executed but if condition is false then automatically the code write inside the else block is executed.
    // Syntax:
    /*
      if(condition1){
          // statement1(s);
      }
      else if(condition2){
          // statement2(s):
      }
      else{
          // statement3(s);
      }
    */

    // e.g.

    //    int a ,b;
    //    cout<<"Please enter first number:";
    //    cin>>a;
    //    cout<<"Please enter seconf number:";
    //    cin>>b;

    //    if (a>b)
    //    {
    //     cout<<"a is greater than b.";
    //    }
    //    else if (b>a)
    //    {
    //     cout<<"b is greater than a.";
    //    }
    //    else
    //    {
    //     cout<<"a is equalls to b.";
    //    }

    // 4. Nested if else = In this we have one if else block inside the other if else block.It is used to check the multiple conditions at a time.
    // Syntax:
    /*
       if(condition1){
           if(condition2){
               // statement1(s);
           }
           else{
               // stetement2(s);
           }
       }
       else{
            if(condition3){
               // statement3(s);
           }
           else{
               // stetement4(s);
           }
       }
    */

    // e.g.

    //    int a,b,c;
    //     cout<<"Please enter first number:";
    //     cin>>a;
    //     cout<<"Please enter second number:";
    //     cin>>b;
    //     cout<<"Please enter third number:";
    //     cin>>c;

    //     if ((a>b) && (a>c)){
    //         cout<<"a is an greatest number.\n";
    //         if (a%2 == 0){
    //             cout<<"a is an even number.\n";
    //         }
    //         else{
    //             cout<<"a is an odd number.\n";
    //         }
    //     }
    //     else if((b>a) && (b>c)){
    //         cout<<"b is an grethest number.\n";
    //         if (b%2 == 0){
    //             cout<<"b is an even number.\n";
    //         }
    //         else{
    //             cout<<"b is an odd number.\n";
    //         }
    //     }
    //     else if((c>a) && (c>b)){
    //         cout<<"c is an greatest number.\n";
    //         if (c%2 == 0){
    //             cout<<"c is an even number.\n";
    //         }
    //         else{
    //             cout<<"c is an odd number.\n";
    //         }
    //     }
    //     else{
    //         cout<<"a,b,c all are equall values.\n";
    //     }

    // 5. Switch Case = It is used to check the one set of number of conditions again and again.
    // Syntax:
    /*
    Switch(expression){
        case1(condition1):
        // statement1(s);
        break;

        case2(condition2):
        // statement2(s);
        break;

        default:
        // statement1(s);
        break;
    }
    */
    // e.g. Make a simple calculator:

    // int a, b;
    // char c;

    // cout << "Please enter first number:";
    // cin >> a;
    // cout << "Please enter second number.";
    // cin >> b;
    // cout << "Please enter the operand (e.g. +,-,*,/):";
    // cin >> c;

    // switch (c)
    // {
    // case ('+'):
    //     cout<<"Sum of a and b is :"<<a+b<<"\n";
    //     break;
    // case ('-'):
    //     cout<<"Subtraction of a and b is :"<<a-b<<"\n";
    //     break;
    // case ('*'):
    //     cout<<"Multiplication of a and b is :"<<a*b<<"\n";
    //     break;
    // case ('/'):
    //     cout<<"Division of a and b is :"<<a/b<<"\n";
    //     break;
    
    // default:
    //     cout<<"Please enter the valid operand.";
    //     break;
    // }

    // Loop Conditons = Looping condition is used to execute the set of code continously number of times. In c++ there are mainly three types of loopinfg coditions:

    // 1. For loop = It execute the set of code till the condition is true, if condition is false it stop execution.
    // syntax:
    /*
     for(initialization;condition;updation){
         // statement(s);
     }
    */

   // e.g.

//    for(int i =1;i<=10;i++){
//         cout<<i<<" ";
//    }
   


    // 2. While loop = It is similar to the for loop but is used when the number of iteration is known.
    // suntax:
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
   

    return 0;
}