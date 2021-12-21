//Replace bits in N by M
/*
you are given two 32-bit numbers, N and M  and two bit positions i and j
write a mothod to set all bits between i and j in N equal to M.
M (becomes a substring of N locationed at and starting at j)

Example:
N = 10000000000;
M = 10101;
i = 2 and j = 6;
Output : 1001010100
*/
#include <bits/stdc++.h>
using namespace std;
//clear bits by ranges given
void clearBitsInRange(int &n , int i,int j){
	int a = (~0)<<(j+1);
	int b = (1<<i) - 1;
	int mask = a|b;
	n = n & mask ;
}
void replaceBits(int &n , int i , int j , int m){
	clearBitsInRange(n,i,j);
	int mask = (m<<i);
	n = n|mask;
}
int main(){
	int n = 15;
	int i = 1;
	int j = 3;
	int m = 2;
	replaceBits(n,i,j,m);
	cout << n;
	return 0;
}
