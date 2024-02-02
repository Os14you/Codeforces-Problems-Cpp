#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int num,max=-100000000000,min=10000000000000;
    int cnt=0;
    while(cnt<3){cnt++; cin>>num; if(num>max) max=num; if(num<min) min=num;}
    cout<<min<<" "<<max;
    return 0;
}