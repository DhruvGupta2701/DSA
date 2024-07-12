#include<iostream>
#include<string>
int main()
{
    std::string str,substr;
    std::cout<<"Enter string : "<<std::endl;
    std::getline(std::cin,str);
    std::cout<<"Enter substring : "<<std::endl;
    std::cin>>substr;

    size_t found = str.find(substr);
    if(found!=std::string::npos)
    {
        std::cout<<"Substring found at index : "<<found<<std::endl;
    }else{
        std::cout<<"Substring not found : "<<std::endl;
    }
    return 0;
}
