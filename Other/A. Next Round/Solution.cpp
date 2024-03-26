#include <iostream> 
using std::cin,std::cout;
int main(){
    int players,kth,counter {};
    cin>>players>>kth;
    int player[players] = {0};
    for(int i=0;i<players;i++){
        cin>>player[i];
        if(i+1<=kth && player[i]>0)
            counter++;
        else if(player[i]==player[kth-1] && player[i]>0)
            counter++;
    }
    cout<<counter;
    return 0;
}