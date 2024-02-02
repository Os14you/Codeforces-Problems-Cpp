#include<iostream>
using namespace std;
int main(){
    long long int num1,num2,num3,num_1,num_2,num_3,tmp;
    cin>>num1>>num2>>num3;
    num_1=num1,num_2=num2,num_3=num3;
    if (num2 < num1) {tmp = num1; num1 = num2; num2 = tmp;}
	if (num3 < num2) {tmp = num2; num2 = num3; num3 = tmp;		if (num2 < num1) {tmp = num1; num1 = num2; num2 = tmp;}}
    cout<<num1<<"\n"<<num2<<"\n"<<num3<<"\n\n"<<num_1<<"\n"<<num_2<<"\n"<<num_3;
    return 0;
}