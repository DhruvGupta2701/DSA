#include<iostream>
using namespace std;
int divisibleBy3(int arr[], int size)
{
    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i]<0)
        {
            cout<<"Invalid Input"<<endl;
        }
        else{
            if(arr[i]%3==0){
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int ans = divisibleBy3(arr,size);
    cout<<"There are "<<ans<<" elements that are multiples of 3."<<endl;
}
