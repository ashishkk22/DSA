#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
    {
        int start = 0;
        int end = n-1;
        for(int i = 0; i<n; i++){
            if(arr[i]==1){
                continue;
            }
            if(arr[i]==0){
                swap(arr[i],arr[start]);
                // cout << arr[i] << " " << arr[start] << endl;
                start++;
            }
            if(arr[i]==2){
                swap(arr[i],arr[end]);
                // cout << arr[i] << " " << arr[end] << endl;
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
