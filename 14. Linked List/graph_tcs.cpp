#include<bits/stdc++.h>
using namespace std;
class Graph{
	list<int> *l;
public:
	Graph(int v){
		V = v;
		l = new list<int>[V];
	}
	void addEdge(int i, int j, bool undir = true){
		l[i].push_back(j);
		if(undir){
			l[j].push_back(i);
		}
	}
};
int main(){
	Graph g(6);
	
}