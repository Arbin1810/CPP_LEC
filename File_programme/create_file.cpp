#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create file of fstream class
    fstream file;

    // opening file "createfile.txt" in out(write) mode
    file.open("createfile.txt", ios::out);

    if (!file)
    {
        cout << "Error in creating filee!!";
        return 0;
    }
    cout << "File created succesfully";
    // closing the file
    file.close();
    return 0;
}