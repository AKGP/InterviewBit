#include <string>
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
bool isPal(string s1){
	// putchar();
	string s = "";
	for(int i =0;i<s1.length();i++){
		if((int(s1[i])>=97&&int(s1[i])<=122)||(int(s1[i])>=65&&int(s1[i])<=90)||(int(s1[i])>=48&&int(s1[i])<=57)){
	        	s+=s1[i];
	    }
	}
	// cout<<s;
	// cout<<s<<endl;
	 for(int i =0;i<s.length();i++){
		if(tolower(s[i])!=tolower(s[s.length()-i-1])){
			// cout<<s[i];
			return 0;
		}
	}

	return 1;
}
		// cout<<s[i];
int main (){
	string s;
	getline(cin,s);
	cout<<isPal(s);
	// cout<<int('9');
	return 0;
}