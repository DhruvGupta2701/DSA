#include<bits/stdc++.h>
using namespace std;
int main()
{
    //open a text file for reading
    ofstream my_file("example.txt", ios::app);
    //check the file for errors
    if(!my_file)
    {
        cout<<"Error: Unable to open the file for appending."<<endl;
        return 1;
    }
    //append multiple lines to the file.
    my_file<<"Nami 22"<<endl;
    my_file<<"Ussop 20"<<endl;
    my_file<<"Chopper 19"<<endl;
    cout<<"Your lines are appended successfully!"<<endl;

    my_file.close();
    return 0;
}
