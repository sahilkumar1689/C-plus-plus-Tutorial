using namespace std;
#include <iostream>
#include <cmath>
// 1. Make a program to check number is even or odd;
void check_ev_od(int num);

// 2. Make a program to check whether the number is prime or armstrong:
void check_prime(int num);
void check_armst(int num);

// 3. Make a program to check the prime number in the given range:
void range_prime(int a, int b);

// 4. Make a program to convert decimal to binary number and vice-versa:
void binary_to_decimal(int binary);
void decimal_to_binary(int decimal);

// 5. Make a program to print the sum of n natural number using recursion:
int natural_rec(int a);

// 6. Make a program to find the factorial of a given number using recursion:
int factorial(int fact);

// 7. Make a program to print the nth term of the fibonacci series:
int fibo(int n);

// 8. Make a program to print the fibonacci series till nth term:
void print_fibo(int n);

// 9. Make a program to calculate the HCF or GCD of the two positive numbers with the help of recursion:
int get_gcd(int min, int num1, int num2);

// 10. Make a program to solve the tower of hanoi:
int tower_hanoi(int n, char a, char b, char c);

// 11. Make a program to compute the binomial cofficient:formula:(n-1,k-1)+(n-1,k) at base condition (n,0) or (n,n);
int binomial_coff(int n, int k);

// 12. Make a program to compute the ackermann function:
int ack(int m, int n);

int main()
{
    // 1. Make a program to check number is even or odd:
    // int a;
    // cout<<"Please enter any number:";
    // cin>>a;
    // check_ev_od(a);

    // 2. Make a program to check whether the number is prime or armstrong:
    // int num, f;
    // cout << "Please enter any number:";
    // cin >> num;
    // cout << "Please enter 1 to find the number is prime or not" << endl
    //      << "and enter 2 for find the number is armstrong or not:";
    // cin >> f;
    // if (f == 1)
    // {
    //     check_prime(num);
    // }
    // else if (f == 2)
    // {
    //     check_armst(num);
    // }
    // else
    // {
    //     cout << "Please enter the valid value." << endl;
    // }

    // 3. Make a program to print the prime number between the given range:
    // int a, b;
    // cout << "Please enter the range to find the prime number between them:";
    // cin >> a >> b;
    // range_prime(a, b);

    // 4. Make a program to convert decimal to binary number and vice-versa:
    int a;
    cout << "Please enter 1 to start binary to decimal conversion " << endl
         << " and 2 for convert decimal to binary";
    cin >> a;
    if (a == 1)
    {
        int binary;
        cout << "Please enter the binary number:";
        cin >> binary;
        binary_to_decimal(binary);
    }
    else if (a == 2)
    {
        int decimal;
        cout << "Please enter the decimal value:";
        cin >> decimal;
        decimal_to_binary(decimal);
    }
    else
    {
        cout << "Please enter the valid value." << endl;
    }

    // 5. Make a program to print the sum of n natural number using recursion:
    // int a;
    // cout<<"Please enter any number:";
    // cin>>a;
    // int sum = natural_rec(a);
    // cout<<"Total sum is:"<<sum<<endl;

    // 6. Make a program to find the factorial of a given number using recursion:
    // int fact;
    // cout<<"Please enter any number:";
    // cin>>fact;
    // int facto = factorial(fact);
    // cout<<"Factorial of "<<fact<<" is:"<<facto<<endl;

    // 7. Make a program to print the nth term of the fibonacci series:
    // int n;
    // cout<<"Please enter any number to find the nth term of the fibonacci series:";
    // cin>> n;
    // int nth_term = fibo(n);
    // cout<<n<<"th term of the fibonacci series is:"<<nth_term<<endl;

    // 8. Make a program to print the fibonacci series till nth term:
    // int n;
    // cout<<"Please enter the length of the fibonacci series:";
    // cin>>n;
    // print_fibo(n);

    // 9. Make a program to calculate the HCF or GCD of the two positive numbers with the help of recursion:
    // int num1,num2,min;
    // cout<<"Please enter the two numbers:";
    // cin>> num1>> num2;
    // min = (num1>num2)?num1:num2;
    // int gcd = get_gcd(min,num1,num2);
    // cout<<"GCD of the "<<num1<<" and "<<num2<<" is:"<<gcd<<endl;

    // 10. Make a program to solve the tower of hanoi:
    // int n;
    // cout<<"Please enter the number of disk:";
    // cin>>n;
    // tower_hanoi(n,'A','B','C');

    // 11. Make a program to compute the binomial cofficient:formula:(n-1,k-1)+(n-1,k) at base condition (n,0) or (n,n);
    // int n,k;
    // cout<<"Please enter the n and k value for the binomial cofficient:";
    // cin>>n>>k;
    // cout<<"Binomial cofficient of "<<"c("<<n<<","<<k<<") is:"<<binomial_coff(n,k)<<endl;

    // 12. Make a program to compute the ackermann function:
    // int a = ack(1,2);
    // cout<<a<<endl;

    return 0;
}

// 1. Make a program to check number is even or odd;
void check_ev_od(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " is an even." << endl;
    }
    else
    {
        cout << num << " is an odd." << endl;
    }
}

// 2. Make a program to check whether the number is prime or armstrong:
void check_prime(int num)
{
    int flag = 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not an prime number." << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << num << " is an prime number." << endl;
    }
}
void check_armst(int num)
{
    cout << "Checking Start." << endl;
    int cp_num = num, power = 0, total, cp_num1 = num;
    int last = 0;
    while (cp_num > 0)
    {
        cp_num = cp_num / 10;
        power++;
    }
    for (int i = cp_num1; i > 0; i /= 10)
    {
        last = i % 10;
        total += pow(last, power);
    }
    if (total == num)
    {
        cout << num << " is an armstrong number." << endl;
    }
    else
    {
        cout << num << " is not an armstrong number." << endl;
    }
}
// 3. Make a program to check the prime number in the given range:
void range_prime(int a, int b)
{
    cout << "Prime number between the range " << a << " to " << b << " are:" << endl;
    for (int num = a; num <= b; num++)
    {
        int flag = 0;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << num << endl;
        }
    }
}

// 4. Make a program to convert decimal to binary number and vice-versa:
void binary_to_decimal(int binary)
{
    int last, total = 0, j = 0, cp_binary = binary;
    for (int i = cp_binary; i > 0; i /= 10)
    {
        last = i % 10;
        total += last * pow(2, j);
        j++;
    }
    cout << binary << " in decimal is:" << total << endl;
}
void decimal_to_binary(int decimal)
{
    int total = 0;
    int remainder, i = 1, cp_decimal = decimal;
    while (cp_decimal > 0)
    {
        remainder = (cp_decimal) % 2;
        cp_decimal /= 2;
        total += remainder * i;
        i *= 10;
    }
    cout << decimal << " in binary is:" << total << endl;
}

// 5. Make a program to print the sum of n natural number using recursion:
int natural_rec(int a)
{
    if (a == 1)
    {
        return 1;
    }
    return a + natural_rec(a - 1);
}

// 6. Make a program to find the factorial of a given number using recursion:
int factorial(int fact)
{
    if (fact == 1)
    {
        return 1;
    }

    return fact * factorial(fact - 1);
}

// 7. Make a program to print the nth term of the fibonacci series:
int fibo(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
// 8. Make a program to print the fibonacci series till nth term:
void print_fibo(int n)
{
    int first = 0, second = 1, third;
    cout << first << " " << second << " ";
    for (int i = 2; i < n; i++)
    {
        third = first + second;
        first = second;
        second = third;
        cout << third << " ";
    }
}
// 9. Make a program to calculate the HCF or GCD of the two positive numbers with the help of recursion:
int get_gcd(int min, int num1, int num2)
{
    int hcf, flag = 0;
    if (min == 0)
    {
        return 1;
    }
    if (num1 % min == 0 && num2 % min == 0)
    {
        hcf = min;
        flag = 1;
    }
    if (flag == 1)
    {
        return hcf;
    }
    else
    {
        get_gcd(min - 1, num1, num2);
    }
}
// 10. Make a program to solve the tower of hanoi:
int tower_hanoi(int n, char a, char b, char c)
{
    if (n == 0)
    {
        return 1;
    }
    tower_hanoi(n - 1, a, c, b);
    cout << "Disk " << n << " moves from rod " << a << " to rod " << c << endl;
    tower_hanoi(n - 1, b, a, c);
}
// 11. Make a program to compute the binomial cofficient:formula:(n-1,k-1)+(n-1,k) at base condition (n,0) or (n,n);
int binomial_coff(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return binomial_coff(n - 1, k - 1) + binomial_coff(n - 1, k);
}
// 12. Make a program to compute the ackermann function:
int ack(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if ((m > 0) && (n == 0))
    {
        return ack(m - 1, 1);
    }
    else if ((m > 0) && (n > 0))
    {
        return ack(m - 1, ack(m, n - 1));
    }
}