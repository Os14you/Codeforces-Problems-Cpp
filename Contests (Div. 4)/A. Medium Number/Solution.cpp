#include <iostream>
using std::cin,std::cout;
void swap_(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}
int medium(int &num1, int &num2, int &num3){
    if(num2 > num1) swap_(num1, num2);
    if(num3 > num2) swap_(num2, num3);
    if(num2 > num1) swap_(num1, num2);
    return num2;
}
int main(){
    int num1,num2,num3,testes;
    cin>>testes;
    while(testes--){
        cin>>num1>>num2>>num3;
        cout<<medium(num1,num2,num3)<<std::endl;
    }
    return 0;
}