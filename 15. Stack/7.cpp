//stock span problem
#include <bits/stdc++.h>
using namespace std;
void stockSpan(int prices[] , int n , int span[]){
	stack<int> s; //indices of the day
	s.push(0);
	span[0] = 1;

	//loop for rest of the days
	for(int i = 1; i<n;i++){
		int currentPrice = prices[i];
		//top most element that is higher then current prices
		
	}

}
int main(){
	int prices[] = {100,80,60,70,60,75,85};
	int n = sizeof(prices)/sizeof(int);
	int span[100000] = {0};	
}