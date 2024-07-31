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
    cout << "Enter text to write to file (type 'exit' to finish):\n";
    string userInput;
    while (true) {
        getline(cin, userInput);

        if (userInput == "exit") {
            break;
        }

        my_file << userInput << std::endl;
    }

    my_file.close();
    return 0;
}
