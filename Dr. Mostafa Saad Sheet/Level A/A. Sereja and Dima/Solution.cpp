#include <iostream>
using std::cin,std::cout;
void turn(int cards[],int &fsrt,int &fend,int &player){
    if(cards[fsrt]>=cards[fend])
        player+=cards[fsrt++];
    else
        player+=cards[fend--];
}
int main(){
    int cards_num,Sereja {},Dima {};
    cin>>cards_num;
    int cards[cards_num];
    for(int i=0;i<cards_num;++i)
        cin>>cards[i];
    if(cards_num==1)
        Sereja+=cards[0];
    for(int cnt=0,fsrt=0,fend=cards_num-1;cnt<cards_num/2;++cnt){
        turn(cards,fsrt,fend,Sereja);
        turn(cards,fsrt,fend,Dima);
        if(cards_num%2 && cnt+1==cards_num/2)
            turn(cards,fsrt,fend,Sereja);
    }
    cout<<Sereja<<" "<<Dima;
}