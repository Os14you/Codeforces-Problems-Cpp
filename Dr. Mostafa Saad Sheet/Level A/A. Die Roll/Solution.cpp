#include <iostream>
#include <cmath>
using std::cin,std::cout;
int main(){
    double Yakko,Wakko;
    cin>>Yakko>>Wakko;
    Yakko = Yakko > Wakko ? Yakko : Wakko;
    double probability {(6.0-Yakko+1)/6.0};
    int p = std::round(probability*10);
    if(!p) cout<<"0/1";
    else if(p<3) cout<<"1/6";
    else if(p==3) cout<<"1/3";
    else if(p==5) cout<<"1/2";
    else if(p<8) cout<<"2/3";
    else if(p==8) cout<<"5/6";
    else cout<<"1/1";
    return 0;
}