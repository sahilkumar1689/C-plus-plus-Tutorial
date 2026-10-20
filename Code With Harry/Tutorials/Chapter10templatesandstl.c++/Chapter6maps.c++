using namespace std;
#include <iostream>
#include <map>

int main(){
    // Maps = Maps is an associative container in the c++,which is used to store the key,value pair.To use the maps member function firstly you need to include the "<map>" header file.

    // Syntax used to declare the maps:
    // map<key_data_type,value_data_type> map_object_name;

    // 1. Insertion in the maps:

    map<string,int> student;
    student["Sahil"] = 5;
    student["Shivam"] = 6;
    
    // You can also insert the value with the help of insert() function:
    student.insert({{"Akshay",1},{"Sham",7}});

    // 2. Traversal in the maps = You can traversal in the maps with the help of iterator.

    map<string,int> :: iterator itr  = student.begin();
    for (int i = 0; i < student.size(); i++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
        // Now in this first means the key and the second means the value.
        itr++;
    }

    
    
    return 0;
}