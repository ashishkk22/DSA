//height of the tree
//tc o(n)
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node * right;
	Node * left;
	Node(int d){
		data = d;
		left = right = NULL;
	}
};
Node * levelOrderBuild(){
	int d;
	cin >> d;
	Node * root = new Node(d);
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		Node * curr = q.front();
		q.pop();
		int c1, c2;
		cin >> c1 >> c2;
		if(c1!=-1){
			curr->left = new Node(c1);
			q.push(curr->left);
		}
		if(c2!=-1){
			curr->right = new Node(c2);
			q.push(curr->right);
		}
	}
	return root;
}
int height(Node * root){
	if(root == NULL){
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	return 1+max(h1,h2);
}
int main(){
		Node * root = levelOrderBuild();
		int ak = height(root);
		cout << ak << endl;
}
int height(Node * root){
	if(root == NULL){
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->height);
	return 1 + max(h1,h2);
}