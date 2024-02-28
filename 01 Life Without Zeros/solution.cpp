#include <iostream>
using std::cout , std::cin;
int without_0(int num){
    int result=0;
    while(num>0){
        if(num%10!=0)
            result*=10,result+=(num%10);
        num/=10;
    }
    return result;
}
int main(){
    int num1,num2,sum_with_0=0;
    cin>>num1>>num2;
    sum_with_0=num1+num2;
    if((sum_with_0==num1+num2) && (without_0(num1)+without_0(num2)==without_0(sum_with_0)))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}