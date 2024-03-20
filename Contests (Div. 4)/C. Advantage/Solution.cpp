#include <iostream>
#include <set>
using std::cin,std::cout;
int main(){
    int tests;
    cin>>tests;
    while(tests--){
        int players,max{},max2{};
        cin>>players;
        int player[players];
        std::multiset<int> setPlayers;
        for(int i=0;i<players;++i){
            cin>>player[i];
            setPlayers.emplace(player[i]);
        }
        auto it = setPlayers.rbegin();
        max = *it;
        ++it;
        max2 = *it; 
        for(int i=0;i<players;++i){
            if(player[i]-max == 0)
                cout<<player[i]-max2<<" ";
            else
                cout<<player[i]-max<<" ";
        }
        cout<<std::endl;
    }
    return 0;
}