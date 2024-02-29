#include <iostream>
using std::cin,std::cout;
int main(){
    int n,h,width=0;
    cin>>n>>h;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        int width_th = (a<=h) ? 1 : 2 ;
        width+=width_th;  
    }
    cout<<width;
    return 0;
}