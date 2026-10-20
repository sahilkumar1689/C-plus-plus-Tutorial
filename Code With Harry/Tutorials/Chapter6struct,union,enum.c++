using namespace std;
#include <iostream>
#include<cstring>

// Make a structure:
struct student
{
    int rollno;
    char name[10];
    float cgpa;
};

// Make a structure using typedef:
typedef struct employe
{
    char name[10];
    int id;
    int salary;
}emp;

// Make a structure array:
typedef struct residence
{
    char name[10];
    int hno;
    int galino;
}res;

// Make a union:
union data
{
    int id;
    float num;
};

// Make a pointer structure function:
void get_std_details(struct student *ptr){
    cout<<"Please enter your name:";
    cin>>ptr->name;
    cout<<"Please enter your rollno:";
    cin>>ptr->rollno;
    cout<<"Please enter your cgpa:";
    cin>>ptr->cgpa;
    cout<<"Your details stored successfully.";
}

void set_res_details(res *ptr){
    for (int i = 0; i < 2; i++)
    {
        cout<<"Person "<<(i+1)<<" enter your details:"<<endl;
        cout<<"Please enter your name:";
        cin>>ptr->name;
        cout<<"Please enter you hno:";
        cin>>ptr->hno;
        cout<<"Please enter you galino:";   
        cin>>ptr->galino;
        ptr++;
    }
}

void get_res_details(res *ptr){
    for (int i = 0; i < 2; i++)
    {
        cout<<"Person "<<(i+1)<<"details are:"<<endl;
        cout<<"Name is: "<<ptr->name<<endl;
        cout<<"HNo is: "<<ptr->hno<<endl;   
        cout<<"Galino is: "<<ptr->galino<<endl;
        ptr++;
    }
}
void set_details(int *ptr){
    for (int i = 0; i < 5; i++)
    {
        cout<<"Please enter any number:";
        cin>>*(ptr+i);
    }
}
void get_details(int *ptr){
    for (int i = 0; i < 5; i++)
    {
        cout<<*(ptr+i)<<" ";
    }
}





int main(){
    // 1.Structures = Structures is used to store the value of different data types in the contigous memeory location.It is a user defined data type.
    // Syntax to declare a structure are follow:
    /*  struct student{   // "Struct" Keyword is used to declare a structure and "student is the name of the structure,it can be anything."
        int id;
        char name;          // These are called the properties.
        float cgpa;
    };

    // Now in the main function:
    int main(){
        struct student s1;    // Now with the help of "struct student" we can make numbers of students.
        s1.id = 5;            // Now with the help of "." operator we can assigne and   print any value.

    }
    */

   // e.g. :
//    struct student s1;
//    s1.rollno = 5;
//    strcpy(s1.name,"Sahil");
//    s1.cgpa = 8.5;
//    cout<<s1.rollno<<endl;
//    cout<<s1.name<<endl;
//    cout<<s1.cgpa<<endl;

   // Now we can also initialize an structure in the easy way:
//    struct student s2 = {1,"Akshay",8.8};
//    cout<<s2.name<<endl;
//    cout<<s2.rollno<<endl;
//    cout<<s2.cgpa<<endl;

    // Now you can also use typedef keyword to initialize a structure.with the help of type def keyword we can gave our structure a nickname or alias:
    /* Syntax to declare a structure with the help of typedef:
    typedef struct name_of_structure{
        // properties
    }short_name;

    int main(){
        short_name s1;  // Now you can make numbers of structure variable with the help of alias name.
    }
    */
   // e.g. :
//    emp e1 = {"Sahil",5,1600000};
//    cout<<e1.name<<endl;
//    cout<<e1.id<<endl;
//    cout<<e1.salary<<endl;

    // // Now you can also make a structure array:
    // res kv[10] = {{"Sahil",47,3},{"Shivam",32,4}}; // Now you can store the ten peoples data in the one structure variable.

    // // Print the value by using the index value:
    // cout<<kv[0].name<<endl;
    // cout<<kv[0].galino<<endl;
    // cout<<kv[0].hno<<endl;

    // We can also use for loop to store the value and print the value:
    // res kv[5];
    // for (int i = 0; i < 2; i++)
    // {
    //     cout<<"Person "<<(i+1)<<" please enter the details:"<<endl;
    //     cout<<"Please enter your name:";
    //     cin>>kv[i].name;
    //     cout<<"Please enter your galino:"<<endl;
    //     cin>>kv[i].galino;
    //     cout<<"Please enter your houseno:"<<endl;
    //     cin>>kv[i].hno;
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     cout<<"Person "<<(i+1)<<" name is:"<<kv[i].name<<endl;
    //     cout<<"Person "<<(i+1)<<" galino is:"<<kv[i].galino<<endl;
    //     cout<<"Person "<<(i+1)<<" hno is:"<<kv[i].hno<<endl;
    // }


    // You can also use pointer with the structure:
    // struct student s2 = {5,"Sahil",8.5};

    // struct student *ptr = &s2;
    // cout<<ptr->name<<endl;

    // Make an structure pointer function:
    // struct student s1;
    // get_details(&s1);

    // Make an structure array pointer function:
    // res kv[5];
    // set_res_details(&kv[0]);  // It is very important to gave proper starting address of the structure to the pointer because the structure are not the self pointers.
    // get_res_details(&kv[0]);



    // Union = It is similar to the structure but the only differece is that in this data stored at the shared memory location.
    /* Syntax to declared:
    Union union_name{
        // Properties
    };

    int main(){
        struct union_name variable_name;
    }

    Note = 1. In the union you can only store only one value at a time,and print at a time.
    */ 
   // e.g. :
//    union data s1;
//    s1.id = 5;
//    s1.num = 8.8;
//    cout<<s1.id<<endl;
//    cout<<s1.num;


    int arr[5];
    set_details(&arr[0]);
    get_details(&arr[0]);


    return 0;
}