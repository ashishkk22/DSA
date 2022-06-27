//challenge : print all elements of BST which lie in the range k1 and k2
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node * left;
	Node * right;
	Node(int d){
		data = d;
		right = left = NULL;
	}
};
Node * insert(Node * root , int x){
	if(root == NULL){
		return new Node(x);
	}
	//rec case
	if(x < root->data){
		root->left = insert(root->left,x);
	}else{
		root->right = insert(root->right,x);
	}
	return root;
}
void printInorder(Node * root){
	if(root == NULL){
		return;
	}
	printInorder(root->left);
	cout << root->data << " , ";
	printInorder(root->right);
}
void printRange(Node * root , int k1 , int k2){
	if(root == NULL){
		return;
	}
	if(root->data >= k1 and root->data <= k2){
		printRange(root->left , k1, k2);
		cout << root->data << " ";
		printRange(root->right , k1 ,k2);
	} 
	else if(root->key > k2){
		printRange(root->left,k1,k2);
	}
	else{
		printRange(root->right,k1,k2);
	}
	
}
int main(){
	Node * root = NULL;
	int ak[] = {8,3,10,1,6,14,4,7,13};
	for(int x : ak){
		root = insert(root,x);
	}
	printInorder(root);
	cout << endl;
	printRange(root,5,12);
 }