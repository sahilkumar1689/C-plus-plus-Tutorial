using namespace std;
#include <iostream>

int main()
{
    // 1. Make a program to print the number of total days in a any month:

    // int month,flag = 0;
    // cout << "Please enter the month number:" << endl;
    // cin >> month;
    // if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
    // {
    //     flag = 1;
    // }

    // switch (flag)
    // {
    // case (1):
    //     cout << month << " month has "
    //          << "31 days." << endl;
    //     break;
    // case (0):
    //     cout << month << " month has "
    //          << "30 days." << endl;
    //     break;
    // default:
    //     cout << "Please enter the valid value." << endl;
    //     break;
    // }

    // 2. Make a program to print the week day name:
    // int week_num;
    // cout<<"Please enter the any week number:";
    // cin>>week_num;
    // switch (week_num)
    // {
    // case (1):
    //     cout<<week_num<<" day is Monday."<<endl;
    //     break;
    // case (2):
    //     cout<<week_num<<" day is Tuesday."<<endl;
    //     break;
    // case (3):
    //     cout<<week_num<<" day is Wednesday."<<endl;
    //     break;
    // case (4):
    //     cout<<week_num<<" day is Thursday."<<endl;
    //     break;
    // case (5):
    //     cout<<week_num<<" day is Friday."<<endl;
    //     break;
    // case (6):
    //     cout<<week_num<<" day is Saturday."<<endl;
    //     break;
    // case (7):
    //     cout<<week_num<<" day is Sunday."<<endl;
    //     break;

    // default:
    // cout<<"Please enter the valid value."<<endl;
    //     break;
    // }

    // 3. Make a program to check whether the number is even or odd:
    // int num;
    // cout<<"Please enter any number to find its even or odd:";
    // cin>>num;
    // switch (num%2)
    // {
    // case 0:
    //     cout<<num<<" is even number."<<endl;
    //     break;

    // case 1:
    //     cout<<num<<" is odd number."<<endl;
    //     break;
    // }

    // 4. Check the input character is vowel or consonant:
    // char ch;
    // static int flag;
    // cout<<"Please enter any alphabet:";
    // cin>> ch;
    // if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    // {
    //     flag = 1;
    // }
    // switch (flag)
    // {
    // case 1:
    //     cout<<ch<<" is an vowel."<<endl;
    //     break;

    // case 0:
    //     cout<<ch<<" is an consonant."<<endl;
    //     break;
    // }

    // 5. Make a program to print the maximum numbers between two:
    // int a, b;
    // cout << "Please enter two value:";
    // cin >> a >> b;
    // switch (a > b)
    // {
    // case 1:
    //     cout << a << " is maximum." << endl;
    //     break;

    // case 0:
    //     cout << b << " is maximum." << endl;
    //     break;
    // }

    // 6. Make a program to check the gender:
    // char ch;
    // cout << "Please enter you gender(M/m or F/f):";
    // cin >> ch;
    // switch (ch)
    // {
    // case ('M'):
    // case ('m'):
    //     cout << "Male." << endl;
    //     break;
    // case ('F'):
    // case ('f'):
    //     cout << "Femal" << endl;
    //     break;
    // default:
    //     cout << "Transgender" << endl;
    //     break;
    // }

    // 7. Make a simple calculator using switch case:
    int a, b;
    char op;
    cout << "Please enter any two operand:";
    cin >> a >> b;
    cout << "Please enter any operator you have to perform(e.g. : +,-,*,/):";
    cin >> op;

    switch (op)
    {
    case ('+'):
        cout << "Addition is:" << (a + b) << endl;
        break;
    case ('-'):
        cout << "Subtraction is:" << (a - b) << endl;
        break;
    case ('*'):
        cout << "Multiplication is:" << (a * b) << endl;
        break;
    case ('/'):
        cout << "Division is:" << (a / b) << endl;
        break;

    default:
        cout << "Please enter the valid operator." << endl;
        break;
    }

    return 0;
}