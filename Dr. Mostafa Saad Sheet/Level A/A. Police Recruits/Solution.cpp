#include <iostream>
using std::cout,std::cin;
int main(){
    int events,cur_event,police {},untreated {};
    cin>>events;
    while(events--){
        cin>>cur_event;
        if(cur_event<0 && police)
            --police; 
        else if(cur_event>0)
            police+=cur_event;
        else if(cur_event<0 && !police)
            untreated++;
    }
    cout<<untreated;
}