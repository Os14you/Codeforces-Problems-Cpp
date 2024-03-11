#include <iostream>
using namespace std;
int main(){
    int testCases,size;
    std::string sub1 {"map"}, sub2 {"pie"};
    cin>>testCases;
    while(testCases--){
        std::string str;
        cin>>size>>str;
        int to_beauty {};
        if(size<3){
            cout<<to_beauty<<std::endl;
            continue;
        }
        for(int i=0;i<size-2;i++){
            if(str.substr(i,3) == sub1 || str.substr(i,3) == sub2)
                to_beauty++,i+=2;
        }
        cout<<to_beauty<<std::endl;
    }
}