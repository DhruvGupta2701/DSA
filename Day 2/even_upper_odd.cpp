#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0){
        cout<<++n<<endl;
    }else{
        cout<<"Please enter even number."<<endl;
    }
}
