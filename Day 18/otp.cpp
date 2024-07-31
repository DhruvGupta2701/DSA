#include<bits/stdc++.h>
using namespace std;
string generateOTP(int len)
{
    string str = "abcdefghijklmnopABCDEFGHIJKLMNOP1234567890";
    string otp;
    int n = str.size();
    for(int i=0;i<len;i++){
        otp.push_back(str[rand()%n]);
    }
    return otp;
}

int main()
{
    srand(time(NULL));
    int len =6;
    cout<<"My OTP is: "<<generateOTP(len).c_str();
	return 0;
}
