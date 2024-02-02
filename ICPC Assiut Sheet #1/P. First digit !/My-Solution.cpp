#include<iostream>
using namespace std;
int main(){
    int num,digit;
    cin>>num;
    digit=num/1000;
    if(digit%2) cout<<"ODD";
    else cout<<"EVEN";
    return 0;
}