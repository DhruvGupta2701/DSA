#include<iostream>
using namespace std;
class Example
{
mutable int value;
public:
    Example(int val):value(val){}
    void modify() const{value++;cout<<value;}
};
int main()
{
    Example* obj = new Example(10);
    obj->modify();
    delete obj;
    return 0;
}
