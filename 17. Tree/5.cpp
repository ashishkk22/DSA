//diameter of the tree
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node * left;
	Node * right;
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
    	int c1 , c2;
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
//Diameter
// Time complexity O(n^2)
int Diameter(Node * root){
	//base case
	if(root==NULL){
		return 0;
	}
	//rec case
	int D1 =  height(root->left) + height(root->right);
	int D2 = Diameter(root->left);
	int D3 = Diameter(root->right);
	return max(D1,max(D2,D3));
}
//Diameter optimized
class HDPair{
public:
	int height;
	int diameter;
};
HDPair optDiameter(Node * root){
	HDPair p;
	if(root == NULL){
		p.height = p.diameter = 0;
		return p;
	}
	//otherwise
	HDPair left = optDiameter(root->left);
	HDPair right = optDiameter(root->right);
	p.height = max(left.height , right.height)+1;
	int d1 = left.height + right.height	;
	int d2 = left.diameter;
	int d3 = right.diameter;
	p.diameter = max(d1 , max(d2,d3));
	return p;
}
int main(){
	Node * root = levelOrderBuild();
	int ak = height(root);
	cout << ak << endl;
	int ak2 = Diameter(root);
	cout << ak2 << endl;
	cout << "Opt diameter is " << optDiameter(root).diameter << endl;
}