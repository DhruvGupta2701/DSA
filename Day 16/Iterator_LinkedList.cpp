#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> numbers = {1,2,3,4,5};
    //create an iterator to point to the first element of the list
    list<int>::iterator itr = numbers.begin();
    //2nd element
    ++itr;
    cout<<"Second element : "<<*itr<<endl;
    //4th element
    ++itr;
    ++itr;
    cout<<"Fourth element : "<<*itr<<endl;

    list<int>:: iterator it = numbers.begin();
    cout<<"Enter element index to display: "<<endl;
    int index;
    cin>>index;
    for(int i=0; i<index; i++)
    {
        it++;
    }
    cout<<*it<<endl;
    return 0;
}
