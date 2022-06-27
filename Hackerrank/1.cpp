#include<iostream>
#include<vector> // for vector
#include<algorithm> // for copy() and assign()
#include<iterator>
//left rotate by d
using namespace std;
vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> ak;
    ak = arr;
    int k = d%arr.size();
    cout << k << endl;
    int sizeArr = arr.size();

    for (int i = 0; i < sizeArr; i++)
    {
        if(k>=sizeArr){
            k = k%sizeArr;
            cout << k << endl;
        }
        arr[i] = ak[k];
        k++;
    }
    return arr;
}
int main(){
    vector<int> arr;
    for (int i = 1; i < 6; ++i)
    {
        arr.push_back(i);
    }
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i];
    }
    cout << endl;
    int d;
    cin >> d;
    vector<int> akkk;
    akkk = rotateLeft(d,arr);
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << akkk[i];
    }
}