using namespace std;
#include <iostream>
// 1. Make a program to read and print the employee data and implement it with the structure array:
typedef struct employee
{
    string name;
    int id;
    float salary;
    void set_details()
    {
        cout << "Please enter your name:";
        cin >> name;
        cout << "Please enter your id:";
        cin >> id;
        cout << "Please enter salary:";
        cin >> salary;
    }
    void get_details()
    {
        cout << "Name is:" << name << endl
             << "Id is:" << id << endl
             << "Salary is:" << salary << endl;
    }
} emp;

// 2. Make a program to accept and print the student details and the marks with the help of structure array:
typedef struct studentdetails
{
    string name;
    int rollno;
    int total_subject;
    float marks[100];
    float percentage,total=0.0;
    void get_std_details()
    {
        cout << "Please enter your name:";
        cin >> name;
        cout << "Please enter you rollno:";
        cin >> rollno;
        cout << "Enter you total number of the subjects:";
        cin >> total_subject;
        for (int i = 0; i < total_subject; i++)
        {
            cout << "Please enter your " << i + 1 << " subject marks:" << endl;
            cin >> marks[i];
            total += marks[i];
        }
        cout << "Your details are successfully stored." <<total<< endl;
    }

    void print_std_details()
    {
        cout << "Name is:" << name << endl
             << "Rollno is:" << rollno << endl;
        percentage = total / total_subject;
        cout << "Your percentage is:" << percentage <<"%"<< endl;
    }
} stud;

int main()
{
    // 1. Make a program to read and print the employee data and implement it with the structure array:
    // emp company1[10];
    // emp *ptr = &company1[0]; // you can also use pointer with structure.
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"Employee "<<i+1<<" please enter your details:"<<endl;
    //     (ptr+i)->set_details();
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"Employee "<<i+1<<" details are:"<<endl;
    //     company1[i].get_details();
    // }

    // 2. Make a program to accept and print the student details and the marks with the help of structure array:
    stud school[2];
    stud *ptr = &school[0];
    for (int i = 0; i < 2; i++)
    {
        cout << "Student " << i + 1 << " please enter your details:" << endl;
        (ptr + i)->get_std_details();
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Student " << i + 1 << " details are:" << endl;
        (ptr + i)->print_std_details();
    }

    return 0;
}