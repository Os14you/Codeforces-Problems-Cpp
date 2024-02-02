#include<iostream>
using namespace std;
int main() 
{
	double a,b;
    cin>>a>>b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<(int)(a/b)<<"\n";
    cout<<"ceil "<<a<<" / "<<b<<" = ";
    if(a/b-(int)(a/b)==0) cout<<(int)(a/b)<<"\n";
    else cout<<(int)(a/b)+1<<"\n";
    cout<<"round "<<a<<" / "<<b<<" = ";
    if(a/b-(int)(a/b)<0.5)  cout<<(int)(a/b)<<"\n";
    else cout<<(int)(a/b)+1<<"\n";
	return 0;
}