//deleting the node
//3 case 
/*
1 with zero node
2 with 1 node
3 with 2 node
for 1 node delete it an assign null to it 
for 2 delete node and return the address of the child
for 3 delete it and replace it with the inorder succesor
	so that tree ramains in the balance
*/
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
Node * findMin(Node * root){
	while(root->left != NULL){
		root = root->left;
	}
	return root;
}
// BST deletion
Node * remove(Node * root , int key){
	if(root==NULL){
		return NULL;
	}
	else if(key < root->key){
		root->left = remove(root->left , key);
	}
	else if(key > root->key){
		root->right = remove(root->right , key);
	}
	else{
		//when the current node matches with the key
		//1 - No children
		if(root->left == NULL and root->right == NULL){
			delete root;
			root == NULL;
		}
		//2 - single child
		else if(root->left == NULL){
			Node * temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL){
			Node * temp = root;
			root = root->left;
			delete temp;
		}
		//3 - two child
		else{
			Node * temp = findMin(root->right);
			root->key = temp->key;
			root->right = remove(root->right , temp->key);
		}
	}
return root;
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
	int dd;
	cin >> dd;
	root = remove(root,dd);
	printInorder(root);
	return 0;
}