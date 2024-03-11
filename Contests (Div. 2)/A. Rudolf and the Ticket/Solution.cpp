#include <iostream>
using std::cout,std::cin;
int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int rsize,lsize,k,ways {},right_coin;
        cin>>lsize>>rsize>>k;
        int lPacket[lsize];
        for(int i=0;i<lsize;i++) cin>>lPacket[i];
        for(int i=0;i<rsize;i++){
            cin>>right_coin;
            for(int j=0;j<lsize;j++){
                if(k>=lPacket[j]+right_coin)
                    ways++;
            }
        }
        cout<<ways<<std::endl;
    }
    return 0;
}