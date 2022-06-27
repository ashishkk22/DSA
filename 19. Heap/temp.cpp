#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
    {
        int start = 0;
        int end = n-1;
        for(int i = 0; i<n; i++){
                if(arr[i]==0){
                cout << arr[i] << " " << arr[start] << endl;
                swap(arr[i],arr[start]);
                start++;
            }
            else if(arr[i]==2){
                cout << arr[i] << " " << arr[end] << endl;
                swap(arr[i],arr[end]);
                end--;
            }
        }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n ;i++){
        int j;
        cin >> j;
        arr[i] =j;
    }
    sort012(arr,n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] <<"--";
    }
}
