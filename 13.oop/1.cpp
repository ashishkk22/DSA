#include <bits/stdc++.h>
using namespace std;
//product shoping website
class Product{
private:
	int id;
	char name[100];
	int mrp;
	int selling_price;
public:
	//constructor
	Product(){
		cout << "Inside constructor " << endl;
	}
	//here we accept any parameter in the constructor 
	//and that is the parameterised constructor
	//setters
	void setMrp(int price){
			mrp = price;
	}
	void setSellingPrice(int price){
			selling_price = price; 
	}
	// getters
	int getMrp(){
		return mrp;
	}
	int getSellingPrice(){
		return selling_price;
	}
	
};
int main(){
	Product camera;
	//camera.mrp = 100;
	//camera.selling_price = 120;
	camera.setMrp(100);
	camera.setSellingPrice(200);
	cout << sizeof(camera) << endl;
	cout << "MRP " << camera.getMrp() << endl;
	cout << "selling_price " << camera.getSellingPrice() << endl;
}