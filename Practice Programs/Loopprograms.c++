using namespace std;
#include <iostream>
#include <math.h>

int main()
{
    // 1. Make a program to print alphabet from a to z:

    // for (int i = 97; i <= 122; i++)
    // {
    //     cout << char(i) << " ";
    // }

    // 2. Make a program to print all the ASCII value for the alphabets:
    // int a;
    // cout << "Please enter 1 to find the ASCII value for the uppercase alphabet" << endl
    //      << "or 2 for find the lowercase alphabets:";
    // cin >> a;
    // if (a == 1)
    // {
    //     for (char i = 'A'; i <= 'Z'; i++)
    //     {
    //         cout << "ASCII value of " << i << " is:" << int(i) << endl;
    //     }
    // }
    // else if (a == 2)
    // {
    //     for (char i = 'a'; i <= 'z'; i++)
    //     {
    //         cout << "ASCII value of " << i << " is:" << int(i) << endl;
    //     }
    // }
    // else{
    //     cout<<"Please enter the valid value."<<endl;
    // }

    // 3. Make a program to print the multiplication table:
    // int a;
    // cout<<"Please enter the value to print the table:";
    // cin>>a;
    // cout<<"Table of "<<a<<" is:"<<endl;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<a<<" * "<<i<<" = "<<(a*i)<<endl;
    // }

    // 4. Make a program to print the natural number in reverse order:
    // int a;
    // cout<<"Please enter any number:";
    // cin>>a;
    // for (int i = a; i >= 1; i--)
    // {
    //     cout<<i<<" ";
    // }

    // 5. Make a program to print the factorial or addition of the number given by the user:
    // int val,a;
    // cout<<"Please enter any value:";
    // cin>>val;
    // cout<<"Please enter 1 to print its addition "<<endl<<" and 2 for print its factorial:";
    // cin>>a;
    // if (a == 1)
    // {   static int count;
    //   for (int i = 1; i <= val; i++)
    //   {
    //     count += i;
    //   }
    //   cout<<"Your value is:"<<count<<endl;
    // }
    // else if(a ==2){
    //     static int count = 1;
    //   for (int i = 1; i <= val; i++)
    //   {
    //     count *= i;
    //   }
    //   cout<<"Your value is:"<<count<<endl;
    // }

    // 6. Make a program to find the first and last number of the digits enter by the user and also tell its sum:
    // int num,sum,last;
    // cout<<"Please enter any number:";
    // cin>>num;
    // last = num%10;  // This formula is used to find the last digit.
    // while (num>=10)
    // {
    //     num = num/10;   // This formula is used to find the first digit.
    // }
    // sum = num+last;
    // cout<<"First number is:"<<num<<endl<<"Last number is:"<<last<<endl;
    // cout<<"Sum is:"<<sum<<endl;

    // 7. Make a program to find sum or product of the digits enter by the user:
    // int num, sum=0, product=1, a;
    // cout << "Please enter the digits:";
    // cin >> num;
    // cout << "Please enter 1 to find the sum and 2 for the product:";
    // cin >> a;
    // if (a == 1)
    // {
    //     for (int i = num; i > 0; i/= 10) // Here we use firstdigit formula in the loop
    //     {
    //         sum += (i % 10); // Here we find the last digit and then add them.
    //     }
    //     cout << "Sum is:" << sum << endl;
    // }
    // else if (a == 2)
    // {
    //     for (product = 1; num > 0; num /= 10) // Here we use firstdigit formula in the loop.
    //     {
    //         product *= (num % 10); // Here we find the last digit and then multiply them.
    //     }
    //     cout << "Product is:" << product << endl;
    // }
    // else{
    //     cout<<"Please enter the valid value."<<endl;
    // }

    // 8. Make a program to find whether the number is armstrong or not:
    // int num,last,sum=0;
    // cout << "Please enter the digits to find it's a armstong or not:";
    // cin >> num;
    // for (int i = num; i >0; i = i/10)
    // {
    //     last = i%10;
    //     sum = sum+ (last*last*last);
    // }
    // if (sum == num)
    // {
    //     cout<<num<<" is an armstrong number."<<endl;
    // }
    // else{
    //     cout<<num<<" is not an armstrong number."<<endl;
    // }

    // 9. Make a program to check whether the digit is palindrome or not:
    // string str1,str2;
    // cout<<"Please entre the number to find it's a palindrome or not:";
    // cin>>str1;
    // for (int i = str1.length()-1; i >= 0; i--)
    // {
    //     str2 += str1.at(i);
    // }
    // if (str2 == str1)
    // {

    //     cout<<"It is a palindrome."<<endl;
    // }
    // else{
    //     cout<<"It is not a palindrome."<<endl;
    // }

    // 10. Find the LCM and HCF of the two number entered by the users:
    // int num1, num2, hcf, lcm, a;
    // cout << "Please enter two number:";
    // cin >> num1 >> num2;
    // cout << "Please enter 1 to find the hcf and 2 for find the lcm:";
    // cin >> a;
    // if (a == 1)
    // {
    //     int min = (num1 < num2) ? num1 : num2;
    //     for (int i = 1; i <= min; i++)
    //     {
    //         if (num1 % i == 0 && num2 % i == 0)
    //         {
    //             hcf = i;
    //         }
    //     }
    //     cout << "HCF of " << num1 << " and " << num2 << " is:" << hcf << endl;
    // }
    // else if (a == 2)
    // {
    //     int max = (num1 > num2) ? num1 : num2;
    //     while (1)
    //     {
    //         if (max % num1 == 0 && max % num2 == 0)
    //         {

    //             lcm = max;
    //             break;
    //         }
    //         else
    //         {
    //             max += max;
    //         }
    //     }
    //     cout << "LCM of " << num1 << " and " << num2 << " is:" << lcm << endl;
    // }
    // else
    // {
    //     cout << "Please enter the valid value." << endl;
    // }

    // 11. Make a program to check whether the number is prime or not:
    // int num,flag=0,i=2;
    // cout<<"Please enter the number to check whether it is prime or not:";
    // cin>>num;
    // while (i<=num/2)
    // {
    //     if(num%i == 0){
    //         flag = 1;
    //         break;
    //     }
    //     i++;
    // }
    // if (flag == 1)
    // {
    //     cout<<num<<" is not a prime number."<<endl;
    // }
    // else{
    //     cout<<num<<" is a prime number."<<endl;
    // }

    // 12. Make a program to print all the possible outcome of the three digit number:
    // int arr[4], count = 0;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "Please enter the " << i + 1 << " number in the array:";
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < 4; i++)            // 0
    // {
    //     for (int j = 0; j < 4; j++)        // 0,1
    //     {
    //         for (int k = 0; k < 4; k++)    // 0
    //         {
    //             for (int l = 0; l < 4; l++)
    //             {
    //                 if (i != j && i != k && i != l && j != k && j != l && k != l)   // 
    //                 {
    //                     cout << arr[i] << " " << arr[j] << " " << arr[k] <<" "<<arr[l] <<endl;
    //                     count++;
    //                 }
    //             }              
    //         }
    //     }
    // }
    // cout<<"So,there are total "<<count<<" possible outcome."<<endl;
    // Note = In this type of question there is no any particular concept but the only concept is that,make nested loops equal to the length of the digit(e.g. : if we have 3 digit number then make 3 nested loop,similarly if 4 digit number then make 4 nested loop),after that in the last nested loop make a condition that the first loop is not equal to the rest of the remaining loop and second loop not equal to the rest of the remainig loop and so on.


    // 13. Make a program to swap two numbers without using the third variable:
    // There are two ways:
    // 1.By using the + and - operator
    // int a = 4,b = 5;
    // cout<<"Before swap a ="<<a<<" b ="<<b<<endl;
    // a = a+b;  // 4+5 = 9
    // b = a-b;  // 9-5 = 4
    // a = a-b;  // 9-4 = 5
    // cout<<"After swap a ="<<a<<" b ="<<b<<endl;
    // // 2.By using the * and / operator.
    // int x = 1,y = 5;
    // cout<<"Before swap x ="<<x<<" y ="<<y<<endl;
    // x = x*y;  // 1*5 = 5
    // y = x/y;  // 5/1 = 5
    // x = x/y;  // 5/5 = 1
    // cout<<"After swap x ="<<x<<" y ="<<y<<endl;

    // 14. Make a program to find the phythagoras triplet number in the range 1 to 200:
    // cout<<"Phythgoras triplet numbers between the range 1 to 200 are:"<<endl;
    // int range = 200;
    // int a,b,c = 0;
    // int p= 2;
    // while (c<range)
    // {
    //     for (int i = 1; i < p; i++)
    //     {
    //         a = p*p - i*i;
    //         b = 2*i*p;
    //         c = p*p + i*i ;
    //         if (c> range)
    //         {
    //             break;
    //         }
    //         cout<<a<<" "<<b<<" "<<c<<endl; 
    //     }
    //     p++;  
    // }

    // 15. Make a program to check the armstrong number in the range 1 to 500:
    for (int j = 1; j <= 500; j++)
    {
        int temp, count = 0, last, sum = 0;
        temp = j;

        for (temp; temp > 0; temp /= 10)
        {
            count++;
        }
        for (int i = j; i > 0; i /= 10)
        {
            last = i % 10;
            sum += pow(last, count);
        }
        if (sum == j)
        {
            cout <<j<<" is an armstrong number." << endl;
        }
    }
    
    
    return 0;
}