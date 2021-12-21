//all the subset of the string
//will get 2^n
#include <bits/stdc++.h>
using namespace std;
int substring(string a,string output[]){
	if (a.length()==0)
	{
		output[0] = "";
		return 1;
	}
	int smallerOutputSize=substring(a.substr(1),output);
	for (int i = 0; i < smallerOutputSize; ++i)
	{
		output[i+smallerOutputSize] = a[0]+output[i];
	}
	return 2*smallerOutputSize;
	

}
int main(){
	string output[1000];
	string a;
	cin >>a;
	//int n = a.length();
	//cout <<a << " " <<n;
	int smallerOutputSize = substring(a,output);
	for (int i = 0; i < smallerOutputSize; ++i)
	{
		cout << output[i] << endl;
	}
}