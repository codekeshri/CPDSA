#include <iostream>
#include <vector>
using namespace std;

vector<string>str;

void backtrack(int idx, int size, vector<int>freq, string temp){
	if(idx == size){
		str.push_back(temp); 
		return;
	}

	for(int i=0; i<26; i++){
		if(freq[i]>0){
			temp.push_back(i+'a');
			freq[i]--;
			backtrack(idx+1, size, freq, temp);
			temp.pop_back();
			freq[i]++;
		}
	}
}

int main() {
//cout<<"Enter string"<<endl;
string s; cin>>s;
vector<int> freq(26);
for(auto &i: s)freq[i-'a']++;
backtrack(0, s.size(),freq,"");
cout << str.size() << "\n";
for(auto &i : str) cout << i << "\n";
}
