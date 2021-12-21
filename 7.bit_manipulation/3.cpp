//get the position of the bit from the number
#include <bits/stdc++.h>
using namespace std;
int getIthBit(int n, int i){
	int mask = (1<<i);
	return (n & mask) > 0 ?1 :0;
}
//set the ith bit { ==> set bits are those which are one}
void setIthBit(int &n , int i ){
	int mask = (1<<i);
	n = (n|mask);
}
//clear th ith bit
void clearIthBit(int n, int i){
	int mask = ~(1<<i);
	n = n & mask;
}
//update the ith bit
void updateIthBit(int &n, int i, int v){
	clearIthBit(n,i);
	int mask = (v<<i);
	n = n|mask;  //sets the right value
}
//clear give the bits from the last
void clearLastBits(int &n , int i){
	int mask = (-1<<i);
	n = n & mask;
}
//clear bit in ranges given
void clearBitsInRange(int &n , int i,int j){
	int a = (~0)<<(j+1);
	int b = (1<<i) - 1;
	int mask = a|b;
	n = n & mask ;
}
int main(){
	int n = 5;
	int i;
	cin >> i;
	// cout << getIthBit(n,i) <<endl;
	 setIthBit(n,i);
	cout << n << endl;
	int a=15;
	int j=2;
	clearLastBits(a,j);
	cout << a << endl;

}