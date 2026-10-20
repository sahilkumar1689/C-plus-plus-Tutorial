using namespace std;
#include <iostream>
// 1. Make a program to crate a class for student to get and print details of N students:
class student{
    string name;
    int rollno;
    float cgpa;
    public:
    // student(string nm,int rn,float gpa):name(nm),rollno(rn),cgpa(gpa){};
    void get_details(){
        cout<<"Please enter the name of the student:";
        cin>>this->name;
        cout<<"Please enter the rollno of the student:";
        cin>>this->rollno;
        cout<<"Please enter the cgpa of the student:";
        cin>>this->cgpa;
    }
    void print_details(){
        cout<<"Name of the student is:"<<name<<endl;
        cout<<"Rollno of the student is:"<<rollno<<endl;
        cout<<"Cgpa of the student is:"<<cgpa<<endl;
    }
};
// 2. Make a program to read the house details and room details from the users:
class property_details{
    int no_houses;
    string name_of_house[100];
    string address[100];
    int rooms[100];
    public:
    void get_details(){
        cout<<"Please enter the number of houses do you have:";
        cin>>no_houses;
        for (int i = 0; i < no_houses; i++)
        {
            cout<<"Please enter the name of your's "<<i+1<<" house:";
            cin>>name_of_house[i];
            cout<<"Please enter the number of rooms do you have in your's "<<i+1<<" house:";
            cin>>rooms[i];
            cout<<"Please enter the address of your "<<i+1<<" house:";
            cin>>*(address+i);
        }        
    }
    void print_details(){
        cout<<"Your have "<<no_houses<<" houses."<<endl;
        for (int i = 0; i < no_houses; i++)
        {
            cout<<"Your "<<i+1<<" house name is:"<<*(name_of_house+i)<<endl;
            cout<<"In this house you have "<<rooms[i]<<" rooms."<<endl;
            cout<<i+1<<" house located in "<<*(address+i)<<"."<<endl;
        }  
    }
};
// 3. Make a program to demonstrate the constructor and destructore declaration,defination with the help of a simple program:
class demonstrate{
    int a;
    public:
    demonstrate(int a){
        this->a = a;
        cout<<"Constructor called."<<a<<endl;
    }
    ~demonstrate(){
        cout<<"Destructor called."<<a<<endl;
    }
    void print(){
        cout<<"A is:"<<a<<endl;
    }
};

// 4. Make a program to read and write the student details with the help of two classes:
class student_details{
    string name;
    int rollno;
    float cgpa;
    public:
    student_details(string nm,int rn,float gpa):name(nm),rollno(rn),cgpa(gpa){};
    void print_details(){
        cout<<"Name of the student is:"<<name<<endl;
        cout<<"Rollno of the student is:"<<rollno<<endl;
        cout<<"Cgpa of the student is:"<<cgpa<<endl;
    }
};
class student_marks:public student_details{
    int maths ,physics,chemistry;
    public:
    student_marks(string nm,int rn,float gpa,int m1,int m2,int m3):student_details(nm,rn,gpa){
        maths = m1;
        physics = m2;
        chemistry = m3;
    };
    void print_marks(){
        print_details();
        cout<<"Maths marks is:"<<maths<<endl;
        cout<<"Physics marks is:"<<physics<<endl;
        cout<<"Chemistry marks is:"<<chemistry<<endl;
    } 
};

// 5. Make a program to read and print the square and cube of the number with the help of hybrid inheritance:
class num{
    protected:
    int a;
    public:
    void get_num(){
        cout<<"Please enter the number:";
        cin>>this->a;
    }
    void print_num(){
        cout<<"Value is:"<<a<<endl;
    }
};
class square: virtual public num{
    public:
    void num_square(){
        cout<<"Square of the "<<a<<" is:"<<a*a<<endl;
    }
};
class cube: virtual public num{
    public:
    void num_cube(){
        cout<<"Cube of the "<<a<<" is:"<<a*a*a<<endl;
    }
};
class number:public square,public cube{
};
// 6. Make a program to read and print the employee details using the heirachical inheritance:
class details{
    public:
    string name;
    int id;
    void get_details(){
        cout<<"Please enter name:";
        cin>>name;
        cout<<"Please enter the id:";
        cin>>id;
    }
    void print_details(){
        cout<<"Name of the employee is:"<<name<<endl;
        cout<<"Id of the employee is:"<<id<<endl;
    }
};
class language:virtual public details{
    public:
    int no_language;
    string language[10];
    void get_lang_details(){
        cout<<"Please enter the number of coding languages you know:";
        cin>>this->no_language;
        for (int i = 0; i < no_language; i++)
        {
            cout<<"Please enter the "<<i+1<<" language name you know:";
            cin>>*(language+i);
        }  
    }
    void print_lang_details(){
        cout<<"Employee know "<<no_language<<" coding language."<<endl;
        cout<<"These are:"<<endl;
        for (int i = 0; i < no_language; i++)
        {
            cout<<*(language+i)<<" ";
        } 
        cout<<endl; 
    }
};
class salary: virtual public details{
    public:
    float salary;
    void get_emp_salary(){
        cout<<"Please enter you salary:"<<endl;
        cin>>salary;
    }
    void print_salary(){
        cout<<"Employee salary is:"<<salary<<endl;
    }
};
class employee: public language,public salary{
};
// 7. Make a flight booking system:
class passenger_details{
    int n;
    string name[100];
    int passport_no[100],visa_no[100];
    public:
    void get_passenger_details(){
        cout<<"How many tickets you have to book:";
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cout<<"Please enter the details of the "<<i+1<<" passenger:"<<endl;
            cout<<"Name of the passenger:";
            cin>>*(name+i);
            cout<<"Please enter the passport no:";
            cin>>*(passport_no+i);
            cout<<"Please enter the visa no:";
            cin>>*(visa_no+i);
        }   
    }
    void print_passenger_details(){
        for (int i = 0; i < n; i++)
        {
            cout<<"Name of the "<<i+1<<" passenger is:"<<*(name+i)<<endl;
            cout<<"Passport number is:"<<*(passport_no+i)<<endl;
            cout<<"Visa number is:"<<*(visa_no+i)<<endl;
        }
    }
};
class flight_details: public passenger_details{
    string country;
    string type;
    public:
    void get_country(){
        cout<<"Please enter the country for book the ticket:";
        cin>>country;
        cout<<"Please enter the type of the ticket(e.g.:Economy class, Bussiness class)";
        cin>>type;
    }
    void print_country(){
        cout<<"Ticket book for the country:"<<country<<endl;
        cout<<"In "<<type<<" class.";
    }
};
class flight_booking:public flight_details{
};
int main(){
    // 1. Make a program to crate a class for student to get and print details of N students:
    // student s1[2] = {{"sahil",1,8.5},{"Akshay",1,8.8}};
    // int n;
    // cout<<"Please enter the total number of students:";
    // cin>>n;
    // student s1[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"Student "<<i+1<<" please enter your details:"<<endl;
    //     s1[i].get_details();
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     cout<<"Student "<<i+1<<" details are:"<<endl;
    //     s1[i].print_details();
    // }

    // 2. Make a program to read the house details and room details from the users:
    // property_details peoples[5];
    // for (int i = 0; i < 2; i++)
    // {
    //     cout<<"Person "<<i+1<<" please enter your details:"<<endl;
    //     peoples[i].get_details();
    //     peoples[i].print_details();
    // }

    // 3. Make a program to demonstrate the constructor and destructore declaration,defination with the help of a simple program:
    // demonstrate d1(1);
    // static demonstrate d2(2);   // static object always destruct at the last of the program.
    // demonstrate d3(3);
    // d1.print();
    // d2.print();
    // d3.print();
    
    // 4. Make a program to read and write the student details with the help of two classes:
    // student_marks s1("Sahil",5,8.5,95,84,89);
    // s1.print_marks();

    // 5. Make a program to read and print the square and cube of the number with the help of hierachical inheritance:
    // number n1;
    // n1.get_num();
    // n1.print_num();
    // n1.num_square();
    // n1.num_cube();

    // 6. Make a program to read and print the employee details using the heirachical inheritance:
    // employee e1;
    // e1.get_details();
    // e1.get_lang_details();
    // e1.get_emp_salary();
    // e1.print_details();
    // e1.print_lang_details();
    // e1.print_salary();

    // 7. Make a flight booking system:
    flight_booking f1;
    f1.get_passenger_details();
    f1.get_country();
    f1.print_passenger_details();
    f1.print_country();
    return 0;
}
