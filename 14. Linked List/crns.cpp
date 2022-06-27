#include <bits/stdc++.h>
using namespace std;
string encryption(string s,int key,int length){
	string temp;
	for (int i = 0; i < length; i++)
	{ 	
		if(s[i]==' '){
			temp +='^';
			continue;
		}
		if(isupper(s[i])){
            temp += char(int(s[i]+key-65)%26 +65);
		}
		else
         temp += char(int(s[i]+key-97)%26 +97);
    }
		
	cout << temp << endl;
	return temp;
}
void decryption(string s,int key,int length){
	string temp;
	key = key -26;
	if(key < 0){
	    key -= 2*key;	
	}
	for (int i = 0; i < length; i++)
	{ 	
		if(s[i]=='^'){
			temp += " ";
			continue;
		}
		if(isupper(s[i])){
            temp += char(int(s[i]+key-65)%26 +65);
		}
		else
         temp += char(int(s[i]+key-97)%26 +97);
    }
		
	cout << temp << endl;
}
int main(){
	string s;
	getline(cin, s);
	int length = s.length();
	int key;
	cin >> key;
	cout << "Id No : 19DCS046" <<endl;
	string encry = encryption(s,key,length);
	int enc = encry.length();
	string d;
	cin >> d;
	int k;
	cin >> k;
	int l = d.length();
	decryption(d,k,l);
	cout << "-----------------" << endl;
	cout << " Brute force " << endl;
	cout << "-----------------" << endl;
	for (int i = 0; i < 26; ++i)
	{
		decryption(encry,i,enc);
	}
}