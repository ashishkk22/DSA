//run length encoding for string ompression
//if compressed string is bigger than orignal return original string
#include <iostream>
using namespace std;
string compressString(string str){
	int n = str.length();
	string output;
	for (int i = 0; i < n; ++i)
	{
		int count = 1;
		while(i <n-1 and str[i+1] == str[i]){
			count++;
			i++;
		}
		output += str[i];
		output += to_string(count);
		//complexity is linear because we incrementing the i in while loop also
	}
	if(output.length() > n){
		return str;
	}
	return output;
}
int main(){
	string s1 = "aaabbccddee";
	cout << compressString(s1) <<endl;
	string s2 = "abcdefg";
	cout << compressString(s2) << endl;
	return 0;
}