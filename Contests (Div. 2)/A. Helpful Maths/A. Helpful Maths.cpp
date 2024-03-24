#include <iostream> // link : https://codeforces.com/problemset/problem/339/A
using std::cin,std::cout;
int main(){
    std::string sum;
    cin>>sum;
    int arr[3] {0};
    for(int i=0;i<sum.size();i++){
        if(sum[i]=='1') arr[0]++;
        else if(sum[i]=='2') arr[1]++;
        else if(sum[i]=='3') arr[2]++;
    }
    int cnt {arr[0]+arr[1]+arr[2]};
    while(arr[0]--) cout<<(cnt==1 ? "1" : "1+"),cnt--;
    while(arr[1]--) cout<<(cnt==1 ? "2" : "2+"),cnt--;
    while(arr[2]--) cout<<(cnt==1 ? "3" : "3+"),cnt--;
    return 0;
}