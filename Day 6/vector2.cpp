#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //another way to create vector
    vector<int> v(5,1);
    //means size is 5 and default value is 1
    cout<<"print all elements"<<endl;
    for(int i:v){
          cout<<i<<" ";
    }

}
