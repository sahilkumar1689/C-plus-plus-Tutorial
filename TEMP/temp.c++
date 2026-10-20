using namespace std;
#include <iostream>
#include <math.h>
#include <fstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <bits/stdc++.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 5 - i + 1; j++)
        {
            cout << "*";
        }
        for (int l = 1; l <= 5 - i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}