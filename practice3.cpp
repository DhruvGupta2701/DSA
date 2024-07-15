#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array<int,5> a= {3,4,7,2,7};
    int size = end(a)-begin(a);
    cout<<"Size : "<<size<<endl;
    cout<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }


    int front = a.front();
    cout<<"First element : "<<front<<endl;


    int back = a.back();
    cout<<"Last element : "<<back<<endl;
    cout<<"Element at index 3 : "<<a.at(3)<<endl;

    array<int,5> visited;
    for(int i=0;i<size; i++)
    {
       if(visited[a[i]]!=1)
       {
           int counts=1;
           visited[a[i]]=1;
           for(int j=i+1; j<size; j++)
           {
               if(a[j]==a[i])
               {
                   counts++;
               }
           }
           cout<<a[i]<<" : "<<counts<<endl;
       }
    }

    bool truefalse = a.empty();
    cout<<"True or False : "<<truefalse<<endl;


    int empty = a.empty();
    cout<<"Is array empty or not : "<<empty<<endl;


}
