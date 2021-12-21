//sorting a complex vector
#include <bits/stdc++.h>
using namespace std;
int calTotalMarks(vector<int> marks){
	return marks[0] +marks[2] + marks[2];
}
bool compare(pair<string,vector<int>> s1, pair<string,vector<int>> s2){
	vector<int> m1 = s1.second;
	vector<int> m2 = s2.second;
	return calTotalMarks(m1) > calTotalMarks(m2);
}
int main(){
	vector<pair<string,vector<int>>> student_marks = {
		{"ashish",{90,80,85}},
		{"mayank",{88,99,77}},
		{"dip",{97,87,86}}
	};

	sort(student_marks.begin(),student_marks.end(),compare); //by default it is going to take first para as sort

	for(auto s: student_marks){
		cout << s.first << " " << calTotalMarks(s.second) << endl;
	}
}