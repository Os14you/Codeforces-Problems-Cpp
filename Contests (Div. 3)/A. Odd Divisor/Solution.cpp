#include <iostream>
using std::cin,std::cout;
int main(){
    int tests;
    cin>>tests;
    while(tests--){
        long long num;
        cin>>num;
        while(!(num%2)) num/=2;
        std::string res = num>1 ? "YES" : "NO";
        cout<<res<<"\n";
    }
    return 0;
}