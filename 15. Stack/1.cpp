//access element in the array is o(1)
//insert in the array is costly because we have to shift the array elment
//access element in the linked list is O(n) because we have itrate
//while in the linked list we dont have to shift the numbers

//stack  ---> abstract data type (there will be in specific order in which you can delete and insert the element)
//recursion uses the stack
//Stack follows LIFO (Last In First Out)
#include<bits/stdc++.h>
using namespace std;
class Stack{
	int *arr;
	int nextIndex;
	int capacity;
public:
	Stack(){
		capacity = 4;
		arr = new int[capacity];
		nextIndex = 0;
	}
	Stack(int cap){
		capacity = cap;	
		arr = new int[capacity];
		nextIndex = 0;
	}
	//return no of element in the stack
	int size(){
		return nextIndex;
	}
	//for isempty
	bool isEmpty(){
		/*if(nextIndex == 0){
			return true;
		}
		return false; */
		return nextIndex == 0;
	}
	void push(int ele){
		if(nextIndex == capacity){
			cout << "Stack is full" << endl;
			return;
		}
		arr[nextIndex] = ele;
		nextIndex++;
	}
	void pop(){
		if (isEmpty()){
			cout << "Stack isEmpty" << endl;
			return;
		}
		nextIndex--;
	}
	int top(){
		if (isEmpty()){
			cout << "Stack isEmpty" << endl;
			return -1;
		}
		return arr[nextIndex-1];
	}
};
int main(){
	Stack s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
}