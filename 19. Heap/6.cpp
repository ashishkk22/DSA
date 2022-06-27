/*
Given N cartesian point in the 2d plane each represents the location of the cab. you are standing at origin . you want to know the names of the nearest cars
sample input
N = 5 K = 3
c1 1 1 
c2 2 1 
c3 3 2
c4 0 1 
c5 2 3 

output 
c4 
c1 
c2

for the distance to the 0,0 d = underroot(x^2 + y^2)
*/
//aa bakiche
/*#include<bits/stdc++.h>
using namespace std;
class Car{
public:
	string id;
	int x,y;
	Car(string id, int x,int y){
		this->id = id;
		this->x = x;
		this->y = y;
	}
};
void printNearestCars(vector<Car> cars , int k){
	//create a max heap of size K
	priority_queue<Car , vector<Car>, Car<>>
}
int main(){
	int N,K;
	cin >> N >> K;
	string id;
	int x,y;
	vector<Car> cars;
	for (int i = 0; i < N; ++i)
	{
		cin >> id >> x >> y;
		Car car(id,x,y);
		cars.push_back(car);
	}
	printNearestCars(cars,k);
	return 0;
}
*/