#include <bits/stdc++.h>
using namespace std;
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
vector<int> a(0);
for(int i = 0; i<queries.size();i++){
    int count=0;
    for(int j = 0; j<strings.size(); j++){
        if(queries[i]==strings[j]){
            count++;
        }
    }
    a.push_back(count);
}
return a;
}
int main(){
    vector<string> strings;
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        string a;
        cin >> a;
        strings.push_back(a);
    }
    vector<string> queries;
    int d;
    cin >> d;
    for (int i = 0; i < d; ++i)
    {
        string a;
        cin >> a;
        queries.push_back(a);
    }
    vector<int> akk;
    akk = matchingStrings(strings,queries);
    for(int x : akk){
        cout <<x << endl;
    }
}