//doubly  ---> main advantage is that we can move in forward as well in the backward direction
//disadvantage is that it uses the more memory
//in the simple node ---> 4(int) + pointer (8bit) ==> total 12 bit
//doubly node ---> 4(int) + pointer (8bit) + pointer(8bit) ==>20bit
//circular singly linked list is like last null is not there instead of that it will head to head
//in the circular linked list we dont have to maintain head pointer 
//inserting is costly as compared to the linked list
//O(1) for linked list
//O(n) for circular linked list
//
#include <bits/stdc++.h>
using namespace std;
class Node{
	int data;
	Node * next;
	Node * previous;
};
int main(){
  
}