using namespace std;
#include <iostream>
#include <list>
void display(list<int> &li)
{
    list<int>::iterator iter = li.begin();
    cout << endl;
    for (int i = 0; i < li.size(); i++)
    {
        cout << *(iter++) << " ";
    }
}

int main()
{

    // List = List is the sequence container that allow insertion and deletion from anywhere in the list.There are number of member function in the list to use all of them firstly we need to include the  "<list>" header file.

    // Syntax to declare a list:
    // list<data_type> list_object_name;

    // Now there are number of method to declare a list:
    // 1. list<int> l1;    // It create an empty list with the zero size.

    // 2. list<int> l2(n);  // It is used to create the list with the nth number of size.

    // There are number of member function in the list,some of them are as follow:
    // 1. Push_back() = It is used to push the element in the last of the list.
    // e.g. :
    // list<int> l1;
    // l1.push_back(1);
    // l1.push_back(2);
    // display(l1);

    // 2. push_front() = It is used to push the element in the front of the list.
    // e.g. :
    // l1.push_front(0);
    // display(l1);

    // 3. pop_back() and pop_front() = It is used to delete the element from the back and it is used to delete the element from the front.
    // e.g. :
    // l1.pop_back();
    // l1.pop_front();
    // display(l1);

    // 4. inert(iterator,value_to_be_stored) = It is used to insert any element in the list at the specified place.
    // e.g. :
    // list<int> :: iterator it = l1.begin();
    // it++;
    // l1.insert(it,5);
    // display(l1);

    // 5. erase(interator) = It is used to erase any element from its index value.
    // e.g. :
    // it--;
    // l1.erase(it);
    // display(l1);

    // 6. remove(value_to_be removed) = It is used to remove any value from the list.
    // e.g. :
    // l1.remove(0);
    // display(l1);

    // 7. Sort() It is used to sort the list.
    // e.g. :
    // list<int> l2;
    // for (int i = 0; i < 5; i++)
    // {
    //     int element;
    //     cout<<"Please enter the number:";
    //     cin>> element;
    //     l2.push_back(element);
    // }
    // cout<<"Your sorted list is:";
    // l2.sort();
    // display(l2);

    // 8. Merge() = It is used to merge any two list elements.
    // e.g. :
    // l2.merge(l1);
    // display(l2);

    // 9. reverse() = It is used to reverse any list.
    // e.g. :
    // l2.reverse();
    // display(l2);

    // 10. splice(iterator,list_to_be_splice) = It is used to transffer one list element to the second element.
    // e.g. :
    list<int> l1, l2;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(2);
    l1.push_back(2);

    l2.push_back(3);
    l2.push_back(4);

    list<int>::iterator it = l1.begin();
    int a;
    cout << "Please enter the place were you want splice:";
    cin >> a;
    for (int i = 0; i < (a - 1); i++)
    {
        it++;
    }
    l1.splice(it, l2);
    display(l1);

    /*Note = 1. In the vector we can travel with the help of index value or iterator also. But in the list for traversal we only use the iterator,because in the list the element is bidirectional.e.g. : In vector = vec[i] or *(itr+i) but In list we can only use the *(itr++).

    2. In list we have more functionality as compare to the vector.
     */
    return 0;
}