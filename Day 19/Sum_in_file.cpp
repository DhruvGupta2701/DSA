#include<bits/stdc++.h>
using namespace std;
int main()
{
    //open a text file for reading
    ifstream my_file("example.txt");
    //check the file for errors
    if(!my_file)
    {
        cout<<"Error: Unable to open the file for appending."<<endl;
        return 1;
    }

    //sum and average
    string line;
    int sum = 0;

    while (getline(my_file, line)) {
        istringstream iss(line);
        string token;

        while (iss >> token) {
            try {
                int number = stoi(token); // Convert token to integer
                sum += number; // Add to sum
            } catch (const invalid_argument& ia) {
                // Token is not a valid integer, ignore or handle differently if needed
            }
        }
    }
    cout<<"Sum is: "<<sum;
    return 0;
}
