#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		int length;
		cin>>length;
		cin>>s1;
		cin>>s2;
		int n=0;
		for (int i = 0; i < length; ++i)
		{
		    if (s1[i]=='?')
		    {
		    	s1[i]='j';
		    }
		    if (s2[i]=='?')
		    {
		    	s2[i]='j';
		    }
		    if(s1[i]!=s2[i]){
		    	s2[i]=s1[i];
		    	n++;
		    }
		}
		cout <<n <<endl;
	}
}