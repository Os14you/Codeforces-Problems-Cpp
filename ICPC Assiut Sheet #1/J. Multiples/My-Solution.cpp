#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int num1,num2;
    cin>>num1>>num2;
    if(!(num1%num2) || !(num2%num1))
        cout<<"Multiples";
    else
        cout<<"No Multiples";
    return 0;
}