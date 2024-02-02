#include<iostream>
using namespace std;
int main(){
    char ch;
    long long int num1,num2;
    cin>>num1>>ch>>num2;
    if(ch=='+') cout<<num1+num2;
    else if (ch=='-') cout<<num1-num2;
    else if (ch=='*') cout<<num1*num2;
    else if (ch=='/') cout<<num1/num2;
    return 0;
}