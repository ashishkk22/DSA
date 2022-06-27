//inorder traversel of the binary search trree is
// always sorted
//all the nodes that are left from the root is smaller than the root
//and all the nodes that are right from the root is greater than the root
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int key;
	Node * right;
	Node * left;
	Node(int key){
		this->key = key;
		left = right = NULL;
	}
};
Node * insert(Node * root ,int key){
	if(root==NULL){
		return new Node(key);
	}
	//rec case
	if(key < root->key){
		root->left = insert(root->left , key);
	}else{
		root->right = insert(root->right , key);
	}
	return root;
}
void printInorder(Node * root){
	if(root == NULL){
		return;
	}
	//left root right
	printInorder(root->left);
	cout << root->key << " ";
	printInorder(root->right);
}
//best case o(logn)
//worst case o(H) -> h is the hight badha node right hoy tevi tree ni height n thay 
bool search(Node * root , int ak){
	if(root == NULL){
		return false;
	}
	if(root->key == ak){
		return true;
	}
	if(root->key >ak){
		return	search(root->left , ak);
	}
	return search(root->right , ak);
}
int main(){
	Node * root = NULL;
	int arr[] = {8,3,10,1,6,14,4,7,13};
	for(int x: arr){
		root = insert(root,x);
	}
	printInorder(root);
	cout << endl;
	bool ak = search(root,6);
	cout << ak << endl;
	return 0;
}