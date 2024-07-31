#include<bits/stdc++.h>
using namespace std;
int main()
{
    //opening a text file for writing. use open() to open a file.
    ofstream my_file("example.txt");
    //check if the file has been opened properly
    if(!my_file)
    {
        cout<<"Error while opening the file."<<endl;
        return 1;
    }
    my_file.close();
    return 0;
}
