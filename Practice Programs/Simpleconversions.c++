using namespace std;
#include <iostream>
// 1. Make a function to convert feet into meter:
void feet_to_meter()
{
    float meter, feet;
    cout << "Please enter the value of feet:";
    cin >> feet;
    meter = feet / 3.280;
    cout << "Meter is:" << meter << endl;
}
// Make a function to convert meter into feet:
void meter_to_feet()
{
    float meter, feet;
    cout << "Please enter the value of meter:";
    cin >> meter;
    feet = (meter)*3.280;
    cout << "Feet is:" << feet << endl;
}

// 2. Make a program to convert fahrenheit to celsius and vise-versa:
void fahr_to_cels()
{
    float farh, cels;
    cout << "Please enter the fahrenheit value:";
    cin >> farh;
    cels = (farh - 32) / 1.8;
    cout << "Celsius value is:" << cels << endl;
}
void cels_to_fahr()
{
    float farh, cels;
    cout << "Please enter the celsius value:";
    cin >> cels;
    farh = (1.8 * cels) + 32;
    cout << "Fahrenheit value is:" << farh << endl;
}

int main()
{
    // 1. Convert meter to feet and vise-versa:formula used (m=f/2.380)

    // char a;
    // cout<<"Please enter 1 to convert feet to meter and 2 for convert meter to feet:";
    // cin>>a;
    // if (a == '1')
    // {
    // feet_to_meter();
    // }
    // else if{
    //     meter_to_feet();
    // }
    // else{
    //     cout<<"Please enter the required value."<<endl;
    // }

    // 2. Convert fahrenheit to celsius and vise-versa:formula used(c=(f-32)/1.8)
    // char a;
    // cout<<"Please enter 1 to convert fahrenheit to celsius "<<endl<<"or 2 for convert celsius to farhrenheit:";
    // cin>>a;
    // if (a == '1')
    // {
    //     fahr_to_cels();
    // }
    // else if(a == '2'){
    //     cels_to_fahr();
    // }
    // else{
    //     cout<<"Please enter the valid value."<<endl;
    // }

    // 3. Find the ASCII value of the characteristics:

    // char ch;
    // cout << "Please enter the number to find its ASCII value:";
    // cin >> ch;
    // cout << "Your ASCII value related to " << ch << " is:" << int(ch) << endl;

    // 4. Convert days into years,weeks and days:
    int days;
    cout << "Please enter the days to find its corresponding(years,weeks,days):";
    cin >> days;

    int years = (days / 365);
    int weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    cout << "Years:" << years << endl
         << "Weeks:" << weeks << endl
         << "Days:" << days << endl;
         
    return 0;
}