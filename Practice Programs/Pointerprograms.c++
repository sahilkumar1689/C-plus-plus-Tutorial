using namespace std;
#include <iostream>

// 1. Make a program to swap two number using pointer:
void swapp(int *ptra,int *ptrb); 

// 2. Make a program to add two number using pointer:
void add_ptr(int *ptr1,int *ptr2);
    
// 3. Make a program to sum all the array element using pointer:
void sum_arr_ptr(int *arr,int size);

// 4. Make a program to print the lenght of the string using poiner:
void str_length_ptr(char *str);

// 5. Make a program to copy one string into other using poiner:
void str_cpy_ptr(char *str1,char *str2);

// 6. Make a program to concatenate two string using pointer:
void str_cat_ptr(char *ptr1,char *ptr2);

// 7. Make a program to print the array in reverse order using pointer:
void rev_arr_ptr(int *arr,int size);

int main(){
    // 1. Make a program to swap two number using pointer:
    
    // int a,b;
    // cout<<"Please enter two number:";
    // cin>>a>>b;
    // cout<<"Before swap:"<<endl<<"a is:"<<a<<endl<<"b is:"<<b<<endl;
    // swapp(&a,&b);
    // cout<<"After swap:"<<endl<<"a is:"<<a<<endl<<"b is:"<<b<<endl;

    // 2. Make a program to add two number using pointer:
    // int num1,num2;
    // cout<<"Please enter two number:";
    // cin>>num1>>num2;
    // add_ptr(&num1,&num2);

    // 3. Make a program to sum all the array element using pointer:
    // int arr[5] = {1,2,3,4,5};
    // sum_arr_ptr(arr,5);

    // 4. Make a program to print the lenght of the string using pointer:
    // char str[100];
    // cout<<"Please enter any word:";
    // cin>>str;
    // str_length_ptr(str);

    // 5. Make a program to copy one string into other using pointer:
    // char str1[100],str2[100];
    // cout<<"Please enter any word:";
    // cin>>str1;
    // str_cpy_ptr(str1,str2);
    // cout<<str1<<endl;
    // cout<<str2<<endl;

    // 6. Make a program to concatenate two string using pointer:
    // char str1[100],str2[100];
    // cout<<"Please enter the first word:";
    // cin>>str1;
    // cout<<"Please enter the second word:";
    // cin>>str2;
    // str_cat_ptr(str1,str2);
    // cout<<"After conatenation:"<<endl;
    // cout<<str1<<endl;

    // 7. Make a program to print the array in reverse order using pointer:
    // int arr[5] = {1,2,3,4,5};
    // rev_arr_ptr(arr,5);

    // 8. Find the output of the following code:
    // int a[] = {1,2,3,4,5,6,7};
    // int *p[] = {a+1,a+3,a,a+5,a+4};   
    // int **q  = p;
    // cout<<*a<<" "<<**p<<" "<<**q<<endl;
    // ++*++*q;   //  Presedence [++(*(++(*q)))}
    // cout<<*a<<" "<<**p<<" "<<**q<<endl;
    // ++++*p;    // [++(++(*p))]
    // ++*++++q;  // [++(*(++(++q)))]
    // cout<<*a<<" "<<**p<<" "<<**q<<endl;


    // char *p[] = {"Hello","This","Is","Jay"};
    // char **q[] = {p+3,p+2,p+1,p};
    // char ***r = q;
    // cout<<**++r<<endl;   // [*(*(++r))]
    // cout<<*--*++r+2<<endl;  // [*(--(*(++r)))]+2
    // cout<<*r[-2]+1<<endl;   // [*(r[-2])]+1
    // cout<<r[-1][-1]+1<<endl;  // [(r[-1])[-1]]+1

    // Recommendation  = Please make diagram of the array pointers on your copy to solve this type of questions. 
    
    return 0;
}
// 1. Make a program to swap two number using pointer:
void swapp(int *ptra,int *ptrb){
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
}
// 2. Make a program to add two number using pointer:
void add_ptr(int *ptr1,int *ptr2){
    int sum = (*ptr1 + *ptr2);
    cout<<"Sum of "<<*ptr1<<" and "<<*ptr2<<" is:"<<sum<<endl;
}
// 3. Make a program to sum all the array element using pointer:
void sum_arr_ptr(int *arr,int size){
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += *(arr+i);
    }
    cout<<"Sum of the array element is:"<<total<<endl;
    
}
// 4. Make a program to print the lenght of the string using pointer:
void str_length_ptr(char *str){
    int count=0,i=0;
   while (*(str+i) != '\0')   
   {    
    count++;
    i++;
   }
    cout<<"length of the string is:"<<count<<endl;    
}

// 5. Make a program to copy one string into other using poiner:
void str_cpy_ptr(char *str1,char *str2){
    while (*str1 != '\0'){
        *(str2++) = *(str1++);
    }
}

// 6. Make a program to concatenate two string using pointer:
void str_cat_ptr(char *ptr1,char *ptr2){
    while (*(++ptr1));
    while (*(ptr1++) = *(ptr2++));
}
// 7. Make a program to print the array in reverse order using pointer:
void rev_arr_ptr(int *arr,int size){
    for (int i = (size-1); i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
}