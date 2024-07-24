#include<iostream>
using namespace std;
class person{
    char name[20];
    int id;
    public:
        void getDetails()
        {
            cout<<"Detail is as follows"<<endl;
        }
};
int main()
{
    person p1;
    p1.getDetails();
}
