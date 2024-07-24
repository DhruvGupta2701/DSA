#include<iostream>
#include<string>
int main()
{
    std::string str,substr,newstr;
    std::cout<<"Enter string : "<<std::endl;
    std::getline(std::cin,str);
    std::cout<<"Enter substring you want to remove : "<<std::endl;
    std::cin>>substr;
    std::cout<<"Enter substring you want to add : "<<std::endl;
    std::cin>>newstr;
    size_t start_pos = str.find(substr);
    if(start_pos != std::string::npos)
    {
        str.replace(start_pos, substr.length(), newstr);
    }
    std::cout<<"String after replacement : "<<str<<std::endl;
    return 0;
}
