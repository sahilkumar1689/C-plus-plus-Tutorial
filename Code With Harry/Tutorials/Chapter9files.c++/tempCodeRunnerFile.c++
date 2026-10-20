using namespace std;
#include <iostream>
#include <fstream>

int main()
{

    // Now there are some usefull classes in c++ which are used to read and write the files:
    /*
    1. fstreambase  = You firstly include fsteam header file.
    2. ofstream = derived from the fstreambase.It is used to writting in the file.
    3. ifstream = derived from the fstreambase.It is used to reading from the file.
   */

    // 1. Writting and reading from a file = There are two method to write and read from the file:
    // 1. with the help of constructor.
    // 2. with the help of open() member function.

    // 1. Writting in the file with the help of constructor = In this you simple write the class name and make object and after that in the construtor gave the file name in which you want to write.After that write in the file in the similar way as the cout.
    string str = "Hello world";
    ofstream write("sahil.txt");
    write << str;
    write.close();  // It is very important to close the file after work is done.

    // Reading from the file with the help of constructor = In this you simple write the class name and make object and pass the file name in the condtructor,after that read file similar way as the cin.
    string str2;
    ifstream read("sahil.txt");
    // read>>str2;    // But by using this method of read a file we can only read the charaters,if space or new line come it stop reading.

    // To overcome this drawback we use getline() function which take two argument,first argument is the object name,second argument is the empth string in which data store.
    getline(read,str2);
    cout<<str2;
    read.close();



    // 2. Writting in the file with the help of the open() member function = In this you simply create an a class object and after that call the open() function with the help of dot "." operator.
    ofstream write_again;
    write_again.open("sahil.txt");
    write_again<<endl<<str;
    write_again.close();

    // Reading from the file with the help of the open() member function and also read file with the help of "eof" function:
    ifstream read_again;
    read_again.open("sahil.txt");
    string s;
    while (read_again.eof() == 0)
    {
        getline(read_again,s);
        cout<<s<<endl;
    }
    


    return 0;
}