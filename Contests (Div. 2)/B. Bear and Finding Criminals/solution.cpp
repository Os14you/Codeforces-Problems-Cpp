#include <iostream>
using std::cin, std::cout;
int main(){
    int cities,police,counter=0;
    cin>>cities>>police;
    int is_criminal[cities];
    police--;
    for(int i=0;i<cities;i++){
        cin>>is_criminal[i];
    }
    if(is_criminal[police])
        counter++;
    int i=1;
    while(police-i>=0 && police+i<=cities-1){
        if(is_criminal[police-i] && is_criminal[police+i]){
            counter+=2;
        }
        i++;
    }
    while(police-i>=0){
        if(is_criminal[police-i])
            counter++;
        i++;
    }
    while(police+i<=cities-1){
        if(is_criminal[police+i])
            counter++;
        i++;
    }
    cout<<counter;
    return 0;
}
