#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>numbers={1,2,3,4,5};
  auto sum=[=](int total,int n){
    for(int i=0;i<n;i++){
      total=total+numbers[i];
    }
    return total;
  };
  cout<<"sum : "<<sum(0,5)<<endl;//o/p sum=15
  return 0;
}

