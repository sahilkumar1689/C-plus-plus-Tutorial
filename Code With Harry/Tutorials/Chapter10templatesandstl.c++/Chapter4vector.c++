using namespace std;
#include <iostream>
#include <vector>

void display(vector<int> &vec)
{
    vector<int> :: iterator iter = vec.begin();
    for (int i = 0; i < vec.size(); i++)
    {
        cout << *(iter+i)<< " ";
    }
}

int main()
{
    // Vector = Vector is a class,that makes an a dynamic array which allowing insertion and deletion at the back.If you want to use the vector class member function,then firstly include the "<vector>" header file.Now there are number of advantages of the vector but the main advantage is that,it's size is not fixed we can increase it.

    /* Syntax to create an a vetor array:
    vetor<data_type> vector_object_name;

    // Now this object is a used as an a object but treated as a array.
    */

    // e.g. : Now there are number of method to create an a vector array:

    // 1. vector<int> arr1; // It create a zero size vector

    // 2. vector<int> arr2(n); // It is used to create nth number size of vector

    // 3. vector <int> arr3(arr2); // It is used to make vector whose size depends upon the arr2

    // 4. vector<int> arr4(3,5);  // It is used to make a vetor of size 3,but also set there value to the 5.
    // for (int i = 0; i < 3; i++)
    // {
    //  cout<<arr4[i]<<endl;
    // }

    // Now there are number of functions that a vector object can used but the most widely used functions are :
    // 1. push_back() = This function is used to insert element in the vector at the end.
    // e.g. :
    vector<int> arr;
    arr.push_back(1); // Now you can add number of elements in the vector,without worry about their size.
    arr.push_back(2);
    // display(arr);        // You can access any elememt with their index value.

    // 2. pop_back() = This function is used to delete the number from the end.
    // e.g. :
    // arr.pop_back();
    // display(arr);

    // 3. insert(iterator,value_to_be_insert) = It is used to insert element in the specified index value.It take two arguments first is the iterator which point to the that element of the container in which we want to insert and second is the value to be inserted.
    // Firstly,we need to known the syntax of making iterator:
    // vector<data_type> :: iterator iterator_obj = vector_obj_name.begin();
    // begin() function is used to point the iterator to the start of the container.

    vector<int>::iterator iter = arr.begin();
    arr.insert(iter, 5);
    // display(arr);

    // we can also use end() function to point interator to the end of the container.
    vector<int>::iterator iter2 = arr.end();
    arr.insert(iter2, 5);
    display(arr);

    // 4. size() = It is used to find the size of the vector.
    cout << endl
         << arr.size() << endl;

    // 5. at() = It is used to print the elements from the vector,also arr.at(i) or arr[i] both are similar.
    // e.g. : Both the output are same for the following code:

    cout << arr.at(0) << endl;
    cout << arr[0] << endl;

    // 6. Erase(element_index) = It is used to erase any element.

    // Exercise = Make a vector and insert elements in it which is given by the user and also print their elements after that also confirm from the user you want to insert any element in the vector,if yes then take the required arguments from the user but if not exit the code.

    vector<int> arr2;
    int size, element;
    string ch;
    cout << "Please enter the number of elements you want to store in the vector:";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Please enter the " << (i + 1) << " element:";
        cin >> element;
        arr2.push_back(element);
    }
    cout << "Your vector are as follow:" << endl;
    display(arr2);
    cout << endl
         << "You want to insert any other element in the vector:";
    cin >> ch;
    if (ch == "yes" || ch == "Yes")
    {
        int insert_index, insert_val;
        cout << "Please enter the place were you want to insert:";
        cin >> insert_index;
        cout << "Please enter the value you want to insert:";
        cin >> insert_val;
        vector<int>::iterator ptr = arr2.begin();
        arr2.insert(ptr + (insert_index-1), insert_val);
        cout << "Here is your new vector:" << endl;
        display(arr2);
    }
    else if (ch == "no" || ch == "No")
    {
        string str;
        cout << "You want to delete any element from the vector:";
        cin >> str;
        if (str == "Yes" || str == "yes")
        {
            int a;
            cout << "Please enter the place were you want to delete the element:";
            cin >> a;
            arr2.erase((arr2.begin()) + (a-1));
            cout << "Here is you new vector:" << endl;
            display(arr2);
        }
        else
        {
            cout << "OK,have a good day." << endl;
        }
    }
    else
    {
        cout << "OK,have a good day." << endl;
    }

    // Suggestion = You can also done it with the help of functions,more efficiently.

    return 0;
}