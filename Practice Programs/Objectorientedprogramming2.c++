using namespace std;
#include <iostream>
// 1. Make a program to store the bank client data and also create a static member in the class to store the count of the number of the peoples(male/female):
class bank
{
    string name, gender;
    long long account_number;
    int pin;
    static int count_m, count_f;

public:
    void get_details()
    {
        cout << "Please enter the name:";
        cin >> name;
        cout << "Please enter the account number:";
        cin >> account_number;
        cout << "Please enter the pin:";
        cin >> pin;
        cout << "Please enter the gender:";
        cin >> gender;
        if (gender == "Male")
        {
            count_m++;
        }
        else
        {
            count_f++;
        }
    }
    void print_details()
    {
        cout << "Name is:" << name << endl;
        cout << "Account number is:" << account_number << endl;
        cout << "Pin is:" << pin << endl;
        cout << "Gender is:" << gender << endl;
    }
    static void get_counter()
    {
        cout << "Male users are:" << count_m << endl;
        cout << "Female users are:" << count_f << endl;
    }
};
int bank ::count_m;
int bank ::count_f;

// 2. Input and display library class and demonstrate the array of object:
class library
{
    string name, branch, current_time, book_name[5], return_book_store[5];
    int rollno, books, account_no, return_book_no;
    static int count_std, count_book;

public:
    void get_std_entery()
    {
        cout << "Please enter your name:";
        cin >> name;
        cout << "Please enter you branch:";
        cin >> branch;
        cout << "Please enter you rollno:";
        cin >> rollno;
        cout << "Please enter the curren time:";
        cin >> current_time;
        cout << "Your entery is successfull." << endl;
        count_std++;
    }
    void book_issued()
    {
        cout << "Please enter your account_no:";
        cin >> account_no;
        cout << "Please enter the number of book you want to be issued:";
        cin >> books;
        for (int i = 0; i < books; i++)
        {
            cout << "Please enter the " << i + 1 << " book name:";
            cin >> book_name[i];
            count_book++;
        }
        cout << "Following " << books << " books are successfull issued at you account:" << endl;
        for (int i = 0; i < books; i++)
        {
            cout << book_name[i] << " " << endl;
        }
    }
    void get_book_issued_details()
    {
        cout << "There are " << count_book << " books issued:" << endl;
        for (int i = 0; i < books; i++)
        {
            cout << book_name[i] << " " << endl;
        }
    }
    void return_book()
    {
        cout << "Please enter the number of books you have to be return:";
        cin >> return_book_no;
        for (int i = 0; i < return_book_no; i++)
        {
            cout << "Please enter the " << i + 1 << " book name you have to be return:";
            cin >> return_book_store[i];
            count_book--;
        }
        cout << "OK," << count_book << " are remaining to return." << endl;
    }
    void print_std_details()
    {
        cout << "Name is:" << name << endl;
        cout << "Branch is:" << branch << endl;
        cout << "Rollno is:" << rollno << endl;
        cout << "Entered at time is:" << current_time << endl;
    }
    static void get_total_std_count()
    {
        cout << "Total numbers of the students entered in the library are:" << count_std << endl;
    }
};
int library ::count_std;
int library ::count_book;

// 3. Make a program to add the complex numbers:
class complex
{
    int a, b;

public:
    void get_complex(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void print_complex()
    {
        cout << "Complex number is:" << a << "+" << b << "i" << endl;
    }
    void add_complex(complex obj)
    {
        a = this->a + obj.a;
        b = this->b + obj.b;
    }
};

// 4. Make a program to take and count vote from the candidates with the help of static variable:
class voter
{
    string name;
    int voter_card, age, store_vote;
    static int bjp_count, cong_count, aam_count, other_count;

public:
    void get_voter_details()
    {
        cout << "Please enter your name:";
        cin >> name;
        cout << "Please enter you age:";
        cin >> age;
        if (age >= 18)
        {
            cout << "Ok,your are eligible for the vote." << endl;
        }
        else
        {
            cout << "Your are not eligible for the vote." << endl;
            exit(1);
        }
        cout << "Please enter you voter card number:" << endl;
        cin >> voter_card;
    }
    void get_vote()
    {
        cout << endl
             << "Now please enter select any one of the following candidate,for which you want to gave your precious vote." << endl;
        cout << "1. BJP" << endl;
        cout << "2. Congerence" << endl;
        cout << "3. Aamadmi Party" << endl;
        cout << "4. Other" << endl;
        cout << "Please enter 1 for BJP and 2 for Congerence and 3 for Aamadmi Parti and 4 for others:";
        cin >> store_vote;
        if (store_vote == 1)
        {
            bjp_count++;
        }
        else if (store_vote == 2)
        {

            cong_count++;
        }
        else if (store_vote == 3)
        {
            aam_count++;
        }
        else if (store_vote == 4)
        {
            other_count++;
        }
        else
        {
            cout << "Please enter the valid number." << endl;
        }
        cout << "OK,thank you your vote is successfully submited." << endl;
    }
    static void get_vote_count()
    {
        cout << "BJP vote count is:" << bjp_count << endl;
        cout << "Congerence vote count is:" << cong_count << endl;
        cout << "Aamadmi Party vote count is:" << aam_count << endl;
        cout << "Other parties vote count is:" << other_count << endl;

        if (bjp_count > cong_count && bjp_count > aam_count && bjp_count > other_count)
        {
            cout << " Congractulations BJP Party wins." << endl;
        }
        else if (cong_count > (bjp_count && aam_count && other_count))
        {
            cout << " Congractulations Congrance Party wins." << endl;
        }
        else if (aam_count > (bjp_count && cong_count && other_count))
        {
            cout << " Congractulations Aamadmi Party wins." << endl;
        }
        else
        {
            cout << " Congractulations other Parties wins." << endl;
        }
    }
};
int voter ::bjp_count;
int voter ::cong_count;
int voter ::aam_count;
int voter ::other_count;

// 4. Make a program to solve amiguity in the multiple inheritance with the help of scope resolution operator or virtual function or virtual base class:
class base1
{
public:
    // virtual void greet(){         // with the help of virtual function.
    //     cout<<"Hello World."<<endl;
    // }
    void greet()
    {
        cout << "Hello World." << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Hello welcome in the c++ world." << endl;
    }
};
class derived : public base1, public base2
{
public:
    // void greet(){
    //     base2::greet();   // Resolve ambiguity with the help of scope resolution operator.
    // }
    // void greet(){
    //     base2::greet();   // with the help of virtual function.
    // }
};

int main()
{
    // 1. Make a program to store the bank client data and also create a static member in the class to store the count of the number of the peoples(male/female):
    // bank b1[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     b1[i].get_details();
    //     b1[i].print_details();
    // }
    // bank :: get_counter();

    // 2. Input and display library class and demonstrate the array of object:
    // library l1[5];
    // for (int i = 0; i < 1; i++)
    // {
    //     cout<<"Student "<<i+1<<" please enter your details:"<<endl;
    //     l1[i].get_std_entery();
    //     l1[i].print_std_details();
    //     l1[i].book_issued();
    //     l1[i].get_book_issued_details();
    //     l1[i].return_book();
    // }
    // library ::get_total_std_count();

    // 3. Make a program to add the complex numbers:
    // complex c1,c2;
    // c1.get_complex(1,2);
    // c1.print_complex();
    // c2.get_complex(1,2);
    // c2.print_complex();
    // c1.add_complex(c2);
    // c1.print_complex();

    // 4. Make a program to take and count vote from the candidates with the help of static variable:
    // voter v1[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"Person "<<i+1<<" please enter your details:"<<endl;
    //     v1[i].get_voter_details();
    //     v1[i].get_vote();
    // }
    // voter :: get_vote_count();

    // 5. Make a program to sove amiguity in the multiple inheritance with the help of scope resolution operator or virtual function or virtual base class:

    // with the help of scope resolution operator:
    // derived d1;
    // d1.greet();

    // with the help of virtual function :
    // base1 *ptr = new derived;
    // ptr->greet();

    return 0;
}