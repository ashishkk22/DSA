//vector data structure
#include <bits/stdc++.h>
#include "vector.h"
using namespace std;

/*
class Vector{
	//data members
	int *arr;
	int cs; //currently we have only 5 element
	int ms;  //maximum size

	//Methods, constructor , destructor

public:
	Vector(int max_size = 1){
		cs = 0;
		ms = max_size;
		arr = new int[ms];
	}
	void push_back(int d){
		//Two cases
		if(cs==ms){
			//create a new array and delete the old one,double the capacity 
			int *oldArr = arr;
			ms = ms*2;
			arr = new int[ms];
			//copy the elements
			for (int i = 0; i < cs ; ++i)
			{
				arr[i] =oldArr[i];
			}
			//delete the old array
			delete [] oldArr;
		}
		arr[cs] = d;
		cs++;
	}

	void pop_back(){
		if(cs >= 0){
			cs--;
		}
	}

	//Front , Back ,At(i) ,[]
	int front(){
		return arr[0];
	}

	int back(){
		return arr[cs-1];
	}

	int at(int i){
		return arr[i];
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}

	int operator[](int i){  //operator overloading 
		return arr[i];
	}
	

};  */

int main(){
	Vector<char> vc;
	vc.push_back('a');
	vc.push_back('b');
	for (int i = 0; i < vc.size(); ++i)
	{
		cout << vc[i] << endl;
	}

	Vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(33);
	v.push_back(44);
	v.push_back(55);
	v.pop_back();

	cout << v.front() << endl;
	cout << v.back() << endl;

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	for (int i = 0; i < v.size() ; ++i)
	{
		cout << v.at(i) << " ";
		cout << v[i] << " ";
	}
}