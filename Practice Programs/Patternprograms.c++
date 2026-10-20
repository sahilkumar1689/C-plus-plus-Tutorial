using namespace std;
#include <iostream>

void take_range(int &size);
int main()
{
    // 1. Make a 90 degree hill pattern with the stars:

    // int range;
    // cout<<"Please enter the range of the pattern:";
    // cin>>range;
    // for (int i = 0; i < range; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 2. Make a reverse 90 degree hill pattern with the help of stars
    // int r;
    // take_range(r);
    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = r-i; j >= 1; j--)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 3. Make a program to combine the 90 degree hill pattern with the reverse hill pattern and vice-verse:
    // int r;
    // take_range(r);
    // cout<<"Combination of hill and reverse hill:"<<endl;
    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int k = r - i; k >= 1; k--)
    //     {
    //         cout << " ";
    //     }
    //     for (int l = r - i; l >= 1; l--)
    //     {
    //         cout << " ";
    //     }
    //     for (int m = 1; m <= i; m++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // cout <<"combination of reverse hill and hill:"<<endl;
    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = r - i; j >= 1; j--)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << "*";
    //     }
    //     for (int m = 1; m <= i; m++)
    //     {
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    // 4. Make a program to print the triangle of the stars or numbers:
    int r;
    take_range(r);
    for (int i = 1; i <= r; i++)
    {
        for (int j = r - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int m =i-1; m >=1; m--)
        {
            cout << m;
        }
        cout << endl;
    }

    // Note = 1. 90 degree hill pattern =  It include two pattern : 
    // 1. Only symbol= (initialization = master loop initialization) and (condition <= master loop initialization).
    // 2. Only space= (initialization = master loop initialiation +1) and (condition <= master loop initialization).
    // 2. Reverse 90 degree hill pattern = It include two patters:
    // 1. Only symbol = (initialization = master loop condition) and (condition > master loop initialization).
    // 2. Only space = (initialization = master loop condition-1) and (conditon > master loop initialization).
    return 0;
}
void take_range(int &size)
{
    cout << "Please enter the range:";
    cin >> size;
}