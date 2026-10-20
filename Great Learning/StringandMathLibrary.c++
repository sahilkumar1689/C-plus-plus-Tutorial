using namespace std;
#include<iostream>
#include<cstring>
#include<math.h>

int main(){

    // String = It is used to store the sequence of characters.Basically c++ does not provide string as a data types but we can use the string as a character array.The one main advantage of the strings are that we can use lots of built in functions,to use those built in function we have to include the "cstring library".
    // Syntax:
    // data type varibale_name[] = "Value to be stored";

    // e.g. 
    char First[] = "Sahil";
    char Last[] = "Kumar";

    // Built in function used on the string:
    // 1. strlen(variable_name) = It is used to find the string lenght.
    cout<<"Lenght is:"<<strlen(First)<<"\n";

    // 2. strcat(first,second) = It is used to conctenate the two string.
    cout<<"Concatenation of the string is:"<<strcat(First,Last)<<"\n";

    // 3. strcpy(newstr,oldstr) = It is used to copy the old string into the new string.
    cout<<"Copy is:"<<strcpy(First,Last)<<"\n";

    // 2. Math Library = It is used to implement some mathematical operations. For this we have some built in functions, to use those functions firstly we have to include the "math.h" library.
    // Some built in functions are as follow:

    // 1.Trignometry Functions = It include sin(),cos(),tan().
    // 2. Mathematical Functions = It include pow(),floor(),abs(),round(),etc.




    return 0;
}