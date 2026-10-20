using namespace std;
#include<iostream>
#include<fstream>

int main(){


    // 1. Files = Files operations are used to store data in the physicall form. To store the data in the physicall form we have to include the "fstream" library file.In c++ we have two three types of stream: ofstream,instream,fstream
    // 1. ofstream = It is used to write data in the file.
    // e.g. :

    // Used to make and open a new file:
    ofstream create_file("Sahil1.txt");
    create_file << "Hello World.\n";
    create_file << "My name is Sahil Kumar.";
    create_file.close();
    
    // 2. instream = It is used to read data in the file.
    // e.g. :
    string str;
    ifstream readfile("Sahil1.txt");
    while (getline(readfile,str))
    {
        cout << str<<"\n";
    }
    
    // 3. fstream = It is used to both read and write data in the file.



    return 0;
}