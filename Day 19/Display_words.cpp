#include <bits/stdc++.h>
using namespace std;

int main()
{
    fstream file;
    string word, t, q, filename;


    filename = "example.txt";

    file.open(filename.c_str());

    while (file >> word)
    {
        if(isdigit( word[0] )){
            continue;
        }

        cout << word << endl;
    }

    return 0;
}
