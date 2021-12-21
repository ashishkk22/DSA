//pointers
/* 
all are valid
you can put space anyware
int * x;
int* x;
int * x'
*/
#include <iostream>
using namespace std;
int main(){
	int x= 5;
	cout << &x <<endl;
	
	//demo pointer
	int *xptr = &x;
	cout << xptr <<endl;
	//dereference pointer
	cout << *xptr << endl;
	//addresss of the pointer variable
	cout << &xptr <<endl;
	//Pointer to Pointer
	int ** xxptr = &xptr;
	cout << xxptr <<endl;

}
