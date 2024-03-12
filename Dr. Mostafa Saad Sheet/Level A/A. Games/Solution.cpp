#include <iostream>
using std::cin,std::cout;
int main(){
    int teams,result {};
    cin>>teams;
    int home[teams],away[teams];
    for(int i=0;i<teams;++i)
        cin>>home[i]>>away[i];
    for(int i=0;i<teams;++i){
        for(int j=0;j<teams;j++){
            if(home[i]==away[j])
                result++;
        }
    }
    cout<<result;
}