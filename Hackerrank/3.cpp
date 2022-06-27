#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
int max(vector<int> A,int start,int end){
    int max = 0;
    for (int i = start; i <end; ++i)
    {
        if(A[i]>max){
            max = A[i];
        }
    }
    return max;
}
int sum(vector<int>b,int ak ,int ak2 ){
    int sum = 0;
    for(int i = ak;i<ak2;i++){
        sum = sum + b[i];
    }
    return sum;
}
int solve(vector<int> A) {
    vector<int> b;
    int size_ = A.size();
    for(int k = 0;k<size_;k++){
        for (int i = 0; i <size_-k-1; ++i){
           int j = i + k;
            int ak = sum(A,i,j);
            b.push_back(ak);
        }
    }
    for (int i = 0; i < b.size(); ++i)
    {
        cout << b[i] << " ";
    }
    int tt= b.size();
    int max_sum = sum(b,0,tt);
    return max_sum(solve(solve(A)));
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string A_temp_temp;
    getline(cin, A_temp_temp);

    vector<string> A_temp = split(rtrim(A_temp_temp));

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        int A_item = stoi(A_temp[i]);

        A[i] = A_item;
    }

    int result = solve(A);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
