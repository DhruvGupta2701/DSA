#include<iostream>
using namespace std;
int main()
{
    const char * message{"Hello World!"};
    cout<<"Message : "<<message<<endl;//Hello World!
    //*message = "B";??compiler error
    cout<<"Message : "<<*message<<endl;//H
    //Allow user to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    cout<<"Message1 : " <<message1<<endl;//Bello World!
    return 0;
}
