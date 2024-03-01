#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int tries,size;
    cin>>tries;
    cout.setf(ios::fixed, ios::floatfield);
    while(tries--){
        cin>>size;
        for(int i=0;i<32;i++){
            if(pow(2,i)>size){
                cout<<(int)pow(2,i-1)<<endl;
                break;
            }
        }
    }
    return 0;
}