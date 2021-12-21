//given a route containing N S E W directions find the sortest path to reach the location
#include <iostream>
using namespace std;
int main(){
	char route[1000];
	cin.getline(route,1000);
	int x = 0;
	int y = 0;
	for (int i = 0; route[i] != '\0'; i++)
	{
		switch(route[i]){
			case 'N' :y++;
					  break;
			case 'S' :y--;
					  break;
			case 'E' :x++;
					  break;
			case 'w' :x--;
					  break;
		}
	}
	cout << "final X :" <<x <<" and y :" <<y <<endl;
	//other case
	if(x>=0 and y>=0){
		while(y--){
			cout<<"N";
		}
		while(x--){
			cout<<"E";
		}
	cout<<"  NEW CONDITION"<<endl;
	}
	if(x<0 and y>0){
		while(y--){
			cout<<"N";
		}
		while(x++){
			cout<<"W";
		}
		cout<<"    NEW CONDITION"<<endl;
	}
	if (x<0 and y<0)
	{
		while(y++){
			cout<<"S";
		}
		while(x++){
			cout<<"W";
		}
		cout<<"    NEW CONDITION"<<endl;
	}
	if(x>0 and y<0){
		while(y++){
			cout<<"S";
		}
		while(x--){
			cout<<"E";
		}
		cout<<"   NEW CONDITION"<<endl;
	}
}