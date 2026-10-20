using namespace std;
#include <iostream>

int main()
{
    // 1. Make a program to find the largest number among three using conditional operator(ternary operator):

    // int first,second,third,largest;
    // cout<<"Please enter three numbers:";
    // cin>>first>>second>>third;
    // largest = (first>second)?((first>third)?first:third) : (second>third?second:third);

    // cout<<"Largest number is:"<<largest<<endl;

    // 2. Make a program to check whether the year is a leap year or not,by using ternary operator:
    // int year;
    // cout<<"Please enter the year:";
    // cin>> year;
    // (year %4 == 0 && year%100 != 0)?cout<<year<<" is a leap year."<<endl : cout<<year<<" is not a leap year."<<endl;

    // 3. Check the entered character is a alphabet or not,by using ternary operator:

    // char ch;
    // cout<<"Please enter any character:";
    // cin>>ch;
    // ((ch >= 'a' && ch <= 'z') || (ch>='A' && ch<='Z'))?cout<<ch<<" is a character."<<endl : cout<<ch<<" is not a character."<<endl;

    // 4. Find whether the student is eligible for the engineering collage or not:
    // float maths,physics,chemistry;
    // cout<<"Please enter the marks of maths,physics and chemistry:";
    // cin>>maths>>physics>>chemistry;
    // float total_of_three = maths+physics+chemistry;
    // float total_of_two = maths+physics;
    // if (total_of_three >= 180 && total_of_two >= 140)
    // {
    //       cout<<"Candidate are eligible for the admmission."<<endl;
    // }
    // else{
    //     cout<<"Your are nor eligible for the admmission."<<endl;
    // }

    // 5. Make a program to take number of subject then take their marks after that calculate the total,percentage and division:
    // float sub_marks[100];
    // int sub,total;
    // cout<<"Please enter the total number of subject:";
    // cin>>sub;
    // for (int i = 0; i < sub; i++)
    // {
    //     cout<<"Please enter the "<<(i+1)<<" subject marks:";
    //     cin>>sub_marks[i];
    // }
    // for (int i = 0; i < sub; i++)
    // {
    //     total += sub_marks[i];
    // }
    // cout<<"Your total is:"<<total<<endl;
    // float percentage = total/sub;
    // cout<<"Your percentage is:"<<percentage<<endl;

    // if(percentage >= 90 && percentage <= 100){
    //     cout<<"Your division is first in the class."<<endl;
    // }
    // else if (percentage >= 80 && percentage <90)
    // {
    //     cout<<"Your division is second in the class."<<endl;
    // }
    // else if(percentage >= 70 && percentage <80){
    //     cout<<"Your division is third in the class."<<endl;
    // }
    // else if (percentage >= 55 && percentage <70)
    // {
    //     cout<<"Your division is fourt in the class."<<endl;
    // }
    // else{
    //     cout<<"Your are pass."<<endl;
    // }

    // Make a program which takes three angles values and print whether the values are valid for the trinagle or not:
    int angle1, angle2, angle3, total;
    cout << "Please enter three angle values for the trinalge:";
    cin >> angle1 >> angle2 >> angle3;
    total = angle1 + angle2 + angle3;
    if (total == 180)
    {

        cout << "Triangle is valid." << endl;
    }
    else
    {
        cout << "Triangle is not valid." << endl;
    }

    return 0;
}