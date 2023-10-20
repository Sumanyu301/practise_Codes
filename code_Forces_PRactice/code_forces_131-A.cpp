#include<bits/stdc++.h>
using namespace std;

string s;
int x ;

int main(){
	
	cin >> s;
	int kq = true;
	x = int(s[0]);
	
	if (x >= 65 && x <= 90){
		for (int i = 1; i < s.size() ; i++)
			if (int(s[i] >= 97 && int(s[i]) <= 122))
				kq = false;
		if (kq == true){
			for (int i = 0; i < s.size() ; i++)
				s[i] = char(int(s[i]) + 32);
		}
	}
	
	if (x >= 97 && x <= 122){
		for (int i = 1; i < s.size() ; i++)
			if (int(s[i] >= 97 && int(s[i]) <= 122))
				kq = false;
		if (kq == true){
			s[0] = char(int(s[0])-32);
			for (int i = 1; i < s.size() ; i++)
				s[i] = char(int(s[i]) + 32);
		}
	}
	
	cout << s;
	
	return 0;
}
