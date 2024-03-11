#include <iostream>
using std::cin,std::cout;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int num1,num2,num3;
        cin>>num1>>num2>>num3;
        if(num1 == num2) cout<<num3<<"\n";
        else if(num2 == num3) cout<<num1<<"\n";
        else cout<<num2<<"\n";
    }
    return 0;
}