#include <bits/stdc++.h>
using namespace std;
//inserting o(log(n))
//badhu j map ma sorted to hoy j pan aeni sathe unique key aave aa ma aetle fari thi tene ne na na khis sako
//fari the key sathe navi value nakho to aeni value update thay 
int main(){
	map<int,string> a;
	m[1]="ashish";
	m.insert({3,"ak"});
	map<int,string>::interator it;
	/*
	for(it=m.begin();it!=m.end();it++){
		cout <<(*it).first << " " <<(*it).second << endl;
		//ane aa map ma je key print thay ae key na sorted order ma print thay
	}
	*/
	aa upar ni jagya ae
	cout << m.size() << endl;
	m["abcd"] ="abcd" //jo aavu hoy to s.size() * log(n) lage kem ke string ne compare no pan time add thay
	//1 value fetch ma o(logn) --> to n size kadhava mate o(nlogn)
	//aetle value nakhva ni pan o(nlogn) ane fetch ke print mate pan same
	for(auto &pr : m){//ahiya & karyu jo na kariae to dar vakhte map ni copy create thay
			cout <<pr.first << " " <<pr.second << endl;
	}
	auto it = m.find(7); //ahi jo 7 key na male to end fetch kare
	if(it==m.end()){
		cout << "NO value";
		//ahiya nno value return thase
	}else{
		cout << (*it).first << (*it).second << endl;
	}
	m.erase(3); //to aa 3 valu hatavi dese
	m.erase(it); // to ahiya je iterator point thase hase tene erase kari dese
	//pan jo aaapde ahiya iterator ma hoy nai tevo j point karyo hoy to segmentation fault aavse
	if(it!=m.end()){
		m.erase(it); // aavu lakhiae to segmentaiton fault nai aave
		m.clear(); //badhu j clear kari nakhe
	}
}