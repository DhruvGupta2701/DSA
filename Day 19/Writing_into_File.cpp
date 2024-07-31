#include<bits/stdc++.h>
using namespace std;
int main()
{
    //open a text file for reading
    ofstream my_file("example.txt");
    //check the file for errors
    if(!my_file)
    {
        cout<<"Error: Unable to open the file."<<endl;
        return 1;
    }
    //write multiple lines to the file.
    my_file<<"Luffy 19"<<endl;
    my_file<<"Zoro 21"<<endl;
    my_file<<"Sanji 21"<<endl;
    cout<<"Your lines are inserted successfully!"<<endl;
    my_file.close();
    return 0;
}

