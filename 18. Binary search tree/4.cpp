//Root to leaf path
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int key;
	Node * left;
	Node * right;
	Node(int data){
		key = data;
		left = right = NULL;
	}
};
Node * insert(Node * root , int x){
	if(root == NULL){
		return new Node(x);
	}
	if(x < root->key){
		root->left = insert(root->left , x);
	}else{
		root->right = insert(root->right , x);
	}
	return root;
}
void printInorder(Node * root){
	if(root == NULL){
		return;
	}
	printInorder(root->left);
	cout << root->key << " ";
	printInorder(root->right);
}
void printRoot2LeafPaths(Node * root , vector<int>& path){
	if(root == NULL){
		return;
	}
	if(root->left == NULL and root->right==NULL){
		//print the vector
		for(int node : path){
			cout << node << "->";
		}
		cout << root->key<< " ";
		cout << endl;
		return;
	}
	//rec case
	path.push_back(root->key);
	printRoot2LeafPaths(root->left,path);
	printRoot2LeafPaths(root->right,path);
	//backtracking
	path.pop_back();
	return;
}
int main(){
	Node * root = NULL;
	int arr[] = {5,7,4,2,8,6,9,55};
	for(int x : arr){
		root = insert(root,x);
	}
	printInorder(root);
	vector<int> path;
	printRoot2LeafPaths(root,path);
}
