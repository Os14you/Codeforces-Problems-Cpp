#include<iostream>
using namespace std;
int main() 
{
	long long int s1, e1, s2, e2;
	cin >> s1 >> e1 >> s2 >> e2;
	if(e1 < s2 || e2 < s1)
		cout<<-1;	
	else
	{
		if(s1 < s2)	s1 = s2;	
		if(e1 > e2) e1 = e2;	
		cout<<s1<<" "<<e1;
	}
	return 0;
}