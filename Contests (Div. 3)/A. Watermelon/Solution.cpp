#include <iostream>
using std::cin,std::cout;
int main(){
    int wight;
    cin>>wight;
    if(wight==2){
        cout<<"NO";
        return 0;
    }
    wight%=2;
    cout<<(wight == 1? "No" : "Yes");
    return 0;
}