using namespace std;
#include <iostream>
#include <string.h>

int main()
{
    // 1. To convert the string into uppercase to lowercase without using any string function and vise-versa:

    // string str, a;
    // cout << "Please enter any word:";
    // cin >> str;
    // cout << "Please enter 1 to convert the entered word into uppercase " << endl
    //      << "enter 2 to convert it into lowercase:";
    // cin >> a;
    // if (a == "1")
    // {
    //     for (int i = 0; i < str.length(); i++)
    //     {
    //         if (str.at(i) >= 'a' && str.at(i) <= 'z')
    //         {
    //             str.at(i) -= 32;
    //         }
    //     }
    //     cout<<"Your upper case word is:"<<str<<endl;
    // }
    // else if(a == "2"){
    //     for (int i = 0; i < str.length(); i++)
    //     {
    //         if (str.at(i) >= 'A' && str.at(i) <= 'Z')
    //         {
    //             str.at(i) += 32;
    //         }
    //     }
    //     cout<<"Your lower case word is:"<<str<<endl;
    // }

    // 2. Make a program to reverse the user string:
    // string str,rev;
    // cout << "Please enter any word:";
    // cin >> str;
    // for (int i = (str.length()- 1); i >= 0; i--)
    // {
    //      rev+=str.at(i);
    // }
    // cout<<"Your reverse word is:"<<rev<<endl;

    // 3. Find the number of alphabets and digit and sepecial character:

    // string str;
    // cout << "Please enter any alphanumeric with come special character code:";
    // cin >> str;
    // static int alphabet, digit, special_char;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if ((str.at(i) >= 'a' && str.at(i) <= 'z') || (str.at(i) >= 'A' && str.at(i) <= 'Z'))
    //     {
    //         alphabet++;
    //     }
    //     else if (str.at(i) >= '0' && str.at(i) <= '9')
    //     {
    //         digit++;
    //     }
    //     else
    //     {
    //         special_char++;
    //     }
    // }
    // cout << "Number of:" << endl
    //      << "Alphabets is:" << alphabet << endl
    //      << "Digit is:" << digit << endl
    //      << "Special symbol is:" << special_char << endl;
         

    return 0;
}