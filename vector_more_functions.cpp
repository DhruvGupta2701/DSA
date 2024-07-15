//vector is dynamic
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(10);
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(12);
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.push_back(14); //when we add element vector capacity will double i.e 4
    cout<<"Capacity = "<<v.capacity()<<endl;
    cout<<"Size = "<<v.size()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop = "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

    cout<<"Before clear size = "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size = "<<v.size()<<endl;

    //another way to create vector
    //vector<int> ve(5,1);
    //means size is 5 and default value is 1
    //cout<<"print all elements"<<endl;
    /*for(int i:v){
          cout<<i<<" ";
    }
    */


}
