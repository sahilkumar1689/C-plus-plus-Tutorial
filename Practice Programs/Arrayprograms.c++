using namespace std;
#include <iostream>

// 1. Make a program to print all the negative element present in the array:
void check_negative_elem(int *arr, int size);

// 2. Make a program to print the sum of the element of the array:
void sum_arr(int *arr, int size);

// 3. Make a program to count the total even or odd numbers present in the array,also set even and odd numbers in the two different arrays then print them:
void even_odd_arr(int *arr, int size);

// 4. Make a program to reverse an array and after that store the reverse element in the new array,then print all of them:
void reverse_arr(int *arr, int size);

// 5. Make a program find the minimum and the maximum element value present in the array:
void minimum_arr(int *arr, int size);
void maximum_arr(int *arr, int size);

// 6. Make a program to insert and delete any element in the array:
void print_arr(int *ptr, int size);
void insert_arr(int *arr, int &n, int new_element, int position);
void delete_arr(int *arr, int &size, int delete_position);

// 7. Make a program to count the total number of duplicate present in the array and also delete them:
void del_duplicate_arr(int *arr, int &size);

// 8. Make a program to done the left and right shift of the array:
void left_sh_arr(int *arr, int size, int shift);
void right_sh_arr(int *arr, int size, int shift);

// 9. Make a program to sort the array in the ascending order:
void sort_arr(int *arr, int size);

// 10. Make a program to print the merge sort:
void merge_sort(int *arr1, int *arr2, int size1, int size2);

int main()
{
    // 1. Make a program to print all the negative element present in the array:

    // int size;
    // int arr[size];
    // cout<<"Please enter the the size of the array:";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Please enter the "<<i+1<<" element:";
    //     cin>>arr[i];
    // }
    // cout<<"Elements are successfully entered."<<endl;
    // check_negative_elem(arr,size);

    // 2. Make a program to print the sum of the element of the array:
    // int size;
    // int arr[100];
    // cout<<"Please enter the size of the array:";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Please enter "<<i+1<<" element:";
    //     cin>>arr[i];
    // }
    // sum_arr(arr,size);

    // 3. Make a program to count the total even or odd numbers present in the array,also set even and odd numbers in the two different arrays then print them:

    // int size;
    // int arr[100];
    // cout << "Please enter the size of the array:";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Please enter the " << i + 1 << " element:";
    //     cin >> arr[i];
    // }
    // even_odd_arr(arr, size);

    // 4. Make a program to reverse an array and after that store the reverse element in the new array,then print all of them:
    // int size;
    // int arr[size];
    // cout<<"Please enter the size of the array:";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Please enter the "<<i+1<<" element:";
    //     cin>>arr[i];
    // }
    // reverse_arr(arr,size);

    // 5. Make a program find the minimum and the maximum element vaue present in the array:
    // int size;
    // int arr[size];
    // cout << "Please enter the size of the array:";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Please enter the " << i + 1 << " element:";
    //     cin >> arr[i];
    // }
    // minimum_arr(arr, size);
    // maximum_arr(arr, size);

    // 6. Make a program to insert and delete any element in the array:
    // int size;
    // int arr[100];
    // string str;
    // cout << "Please enter the size of the array:";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Please enter the " << i + 1 << " element:";
    //     cin >> arr[i];
    // }
    // print_arr(arr, size);
    // cout<<endl;
    // cout << "Your want to insert any new element in the array:";
    // cin >> str;
    // if (str == "Yes" || str == "yes")
    // {
    //     int new_element, position;
    //     cout << "Please enter the new element you want to insert:";
    //     cin >> new_element;
    //     cout << "Please enter the position were you want to insert:";
    //     cin >> position;
    //     insert_arr(arr, size, new_element, position);
    //     print_arr(arr,size);
    // }
    // else if(str == "No" || str == "no"){
    //     cout<<"You want to delete any element from the array:";
    //     cin >> str;
    //     if(str == "yes" || str == "Yes"){
    //         int delete_position;
    //         cout<<"Please enter the position where you want to delete:";
    //         cin>>delete_position;
    //         delete_arr(arr,size,delete_position);
    //         print_arr(arr,size);
    //     }
    //     else{
    //         cout<<"Ok,have a good day."<<endl;
    //     }
    // }
    // else{
    //     cout<<"Please enter the valid value."<<endl;
    // }

    // 7. Make a program to count the total number of duplicate present in the array and also delete them:
    // int size;
    // int arr[size];
    // cout<<"Please enter the size of the array:";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Please enter the "<<i+1<<" element:";
    //     cin>>arr[i];
    // }
    // del_duplicate_arr(arr,size);
    // cout<<"After remove duplicates:";
    // print_arr(arr,size);

    // 8. Make a program to done the left and right shift of the array:
    // int size, a;
    // int arr[size];
    // cout << "Please enter the size of the array:";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Please enter the " << i + 1 << " element:";
    //     cin >> arr[i];
    // }
    // cout << "Please enter 1 for the left shift and" << endl
    //      << "2 for the right shift:" << endl;
    // cin >> a;
    // if (a == 1)
    // {   int lf_shift;
    //     cout << "Please enter how many number of shift you want:";
    //     cin >> lf_shift;
    //     left_sh_arr(arr, size, lf_shift);
    //     print_arr(arr, size);
    // }
    // else if (a == 2)
    // {   int rg_shift;
    //     cout << "Please enter how many number of shift you want:";
    //     cin >> rg_shift;
    //     right_sh_arr(arr, size, rg_shift);
    //     print_arr(arr, size);
    // }
    // else
    // {
    //     cout << "Please enter the valid value." << endl;
    // }

    // 9. Make a program to sort the array in the ascending order:
    // int size;
    // int arr[size];
    // cout<<"Please enter the size of the array:";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Please enter the "<<i+1<<" element:";
    //     cin>>arr[i];
    // }
    // sort_arr(arr,size);
    // print_arr(arr,size);

    // 10. Make a program to print the merge sort:
    int size1,size2;
    cout << "Please enter the size of the two arrays:";
    cin >> size1 >> size2;
    int arr1[size1];
    int arr2[size2];
    cout << "Enter the element in the first array:" << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << "Please enter the " << i + 1 << " element:";
        cin >> arr1[i];
    }
    cout << "Enter the value for the second array:" << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << "Please enter the " << i + 1 << " element:";
        cin >> arr2[i];
    }
    sort_arr(arr1, size1);
    sort_arr(arr2, size2);
    merge_sort(arr1, arr2, size1, size2);
    


    return 0;
}
// 1. Make a program to print all the negative element present in the array:
void check_negative_elem(int *arr, int size)
{
    int count = 0, j = 0;
    int temp[100];
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) < 0)
        {
            temp[j] = *(arr + i);
            count++;
            j++;
        }
    }
    cout << "There are " << count << " negative value are present in the array:" << endl;
    for (int k = 0; k < count; k++)
    {
        cout << temp[k] << endl;
    }
}
// 2. Make a program to print the sum of the element of the array:
void sum_arr(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    cout << "Sum of all the element of the array are:" << sum << endl;
}
// 3. Make a program to count the total even or odd numbers present in the array,also set even and odd numbers in the two different arrays then print them:
void even_odd_arr(int *arr, int size)
{
    int even_temp[100], odd_temp[100];
    int et = 0, ot = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            even_temp[et] = *(arr + i);
            et++;
        }
        else
        {
            odd_temp[ot] = *(arr + i);
            ot++;
        }
    }
    cout << "There are " << et << " even numbers present in the array:";
    for (int i = 0; i < et; i++)
    {
        cout << even_temp[i] << " ";
    }
    cout << endl;
    cout << "There are " << ot << " odd numbers present in the array:";
    for (int i = 0; i < ot; i++)
    {
        cout << odd_temp[i] << " ";
    }
}
// 4. Make a program to reverse an array and after that store the reverse element in the new array,then print all of them:
void reverse_arr(int *arr, int size)
{
    int rev_temp[100], j = 0;
    for (int i = (size - 1); i >= 0; i--)
    {
        rev_temp[j] = arr[i];
        j++;
    }
    cout << "Reverse of the array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << rev_temp[i] << " ";
    }
}
// 5. Make a program find the minimum and the maximum element value present in the array:
void minimum_arr(int *arr, int size)
{
    int min = *arr; // Here we assume that array first element is the minimum.
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) < min) // Here we check the remaining element of the array to the assume minimum element.
        {
            min = *(arr + i); // if check is true then we change the min value.
        }
    }
    cout << "Minimum element of the array is:" << min << endl;
}
void maximum_arr(int *arr, int size)
{
    int max = *arr; // Here we assume that the first element of the array is maximum.
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > max) // Here we check the remaining element to the assume max element.
        {
            max = *(arr + i);
        }
    }
    cout << "Maximum element of the array is:" << max << endl;
}
// 6. Make a program to insert and delete any element in the array:
void print_arr(int *ptr, int size)
{
    cout << "Your array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << " ";
    }
}
void insert_arr(int *arr, int &n, int new_element, int position)
{
    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = new_element;
    n++;
}
void delete_arr(int *arr, int &size, int delete_position)
{
    for (int i = delete_position - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}
// 7. Make a program to count the total number of duplicate present in the array and also delete them:
void del_duplicate_arr(int *arr, int &size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
                count++;
                flag = 1;
            }
        }
    }
    cout << "There are " << count << " duplicate values present in the array:" << endl;
}
// 8. Make a program to done the left and right shift of the array:
void left_sh_arr(int *arr, int size, int shift)
{
    int temp;
    for (int i = 0; i < shift; i++)
    {
        temp = arr[0];
        for (int j = 0; j < size - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}
void right_sh_arr(int *arr, int size, int shift)
{
    int temp;
    for (int i = 0; i < shift; i++)
    {
        temp = arr[size - 1];
        for (int j = size - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}
// 9. Make a program to sort the array in the asscending order:
void sort_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
// 10. Make a program to print the merge sort:
void merge_sort(int *arr1, int *arr2, int size1, int size2)
{
    int count = 0, k = 0;
    int merge_arr[100];
    for (int i = 0; i < size1; i++)
    {
        merge_arr[count] = *(arr1 + i);
        count++;
    }
    for (int j =0; j < size2; j++)
    {
        merge_arr[count] = *(arr2 + j);
        count++;
    }
    sort_arr(merge_arr, size1 + size2);
    print_arr(merge_arr, size1 + size2);
}