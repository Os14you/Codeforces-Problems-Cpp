#include <iostream>
using std::cin,std::cout;
int main(){
    bool one;
    int row {},column {};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>one;
            if(one) column=j,row=i;
        }
    }
    cout<<abs(row-2)+abs(column-2);
    return 0;
}