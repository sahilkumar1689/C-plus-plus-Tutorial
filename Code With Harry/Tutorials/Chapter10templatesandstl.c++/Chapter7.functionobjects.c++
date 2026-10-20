using namespace std;
#include <iostream>
#include <functional>
#include <algorithm>

int main(){
    // Function Objects = A function object is a function wrappped in a class,so that it is available to us as an object or we can use the function as an object.There are number of function object classes are present to use them firstly include the "<functional>" header file.One more important thing is that we can use function object with the combination of algorithms, so also include the "<algorithm>" header file.
    
    // Function object is also known as functor.
    // e.g. :
    
    int arr[] = {1,4,5,3,2};   // We simple make an a array.
    // Now if we want to sort an array,we can use the algorithm function sort():
    // It take two arguemnt first is the start of the array and second the end of the array:
    sort(arr,arr+5);     
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    // Now by default this algorithm sort the array in the ascending order,but if we want to sort in the decending order then gave a extra third argument in the sort() function,this third argument is the function object.

    sort(arr,arr+5,greater<int>());
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}