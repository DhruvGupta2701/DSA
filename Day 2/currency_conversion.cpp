#include<iostream>
using namespace std;
void r_to_p(float rupees)
{
    float pound = 0.0094;
    int conversion_rupees_to_pound = rupees * pound;
    cout<<"Rupees in pound : "<<conversion_rupees_to_pound<<endl;
}
void r_to_dollar(float rupees)
{
    float dollar = 0.012;
    float convert_to_dollar = rupees*dollar;
    cout<<"Rupees in Dollar : "<<convert_to_dollar<<endl;
}
void r_to_yuan(float rupees)
{
    float yuan = 0.087;
    float convert_to_yuan = rupees*yuan;
    cout<<"Rupees in yuan : "<<convert_to_yuan<<endl;
}
void p_to_r()
{
    float pound1;
    cout<<"Enter amount in pound : "<<endl;
    cin>>pound1;
    float rupees1 = 106.90;
    double conversion_pound_to_rupees = pound1 * rupees1;
    cout<<"Pound in rupees : "<<conversion_pound_to_rupees<<endl;
}
void dollar_to_r()
{
    float dollar;
    cout<<"Enter amount in dollar : "<<endl;
    cin>>dollar;
    float rupees1 = 83.5;
    double conversion_dollar_to_rupees = dollar * rupees1;
    cout<<"Dollar in rupees : "<<conversion_dollar_to_rupees<<endl;
}
void yuan_to_r()
{
    float yuan;
    cout<<"Enter amount in yuan : "<<endl;
    cin>>yuan;
    float rupees1 = 11.48;
    double conversion_yuan_to_rupees = yuan * rupees1;
    cout<<"Yuan in rupees : "<<conversion_yuan_to_rupees<<endl;
}
int main()

{
    float rupees;
    cout<<"Enter amount in rupees : "<<endl;
    cin>>rupees;
    r_to_p(rupees);
    r_to_dollar(rupees);
    r_to_yuan(rupees);
    p_to_r();
    dollar_to_r();
    yuan_to_r();
}
//https://restcountries.com/v3.1/all

