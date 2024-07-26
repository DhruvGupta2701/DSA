#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> numbers = {1,2,3};
    cout<<"Initial list: "<<endl;
    for(int i:numbers)
    {
        cout<<i<<", ";
    }cout<<endl;
    //creating iterator pointing the first position
    list<int>:: iterator it = numbers.begin();
    //incrementing iterator to 3rd position
    ++it;
    ++it;
    //inserting 0 at 3rd position of the list
    numbers.insert(it,0);
    //modified list
    cout<<"Final list: "<<endl;
    for(int i:numbers)
    {
        cout<<i<<", ";
    }
    return 0;
}
