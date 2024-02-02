#include<iostream>
using namespace std;
int main(){
    float num;
    cin>>num;
    float f = num - (int)num;
    if(!f) cout<<"int "<<(int)num;
    else cout<<"float "<<(int)num<<" "<<f;
    return 0;
}