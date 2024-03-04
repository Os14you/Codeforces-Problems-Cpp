#include <iostream>
using std::cin,std::cout;

int main(){
    int num_of_games,Anton=0,Danik=0;
    std::string games;
    cin>>num_of_games;
    cin>>games;
    for(int i=0;i<games.size();i++){
        if(games[i]=='D')
            Danik++;
        else
            Anton++;
        if(Anton>games.size()/2 || Danik>games.size()/2)
            break;
    }
    if(Anton > Danik)
        cout<<"Anton";
    else if(Anton < Danik)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}