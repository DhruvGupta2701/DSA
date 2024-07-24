#include<iostream>
using namespace std;
int main()
{
    int elephant_count;//garbage value
    int lion_count{}; //initializes to zero
    int dog_count{10};//initializes to 10
    int cat_count{15};//initializes to 15

    int domesticated_animals {dog_count + cat_count};

    //int narrowing_conversion {2.9};  //compile time error
    cout<<"Elephant count : "<<elephant_count<<endl;
    cout<<"Lion count : "<<lion_count<<endl;
    cout<<"Dog count : "<<dog_count<<endl;
    cout<<"Cat count : "<<cat_count<<endl;
    cout<<"Domesticated animals count : "<<domesticated_animals<<endl;
    return 0;

}
