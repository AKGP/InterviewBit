#include <string>
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int main(){
	string s = "bcbcbbbacbbaccaabbabbbbcbbaaaaabccbbbacabbccbaaabbbaccaccacaacccbbccbcaccc";
	int l = s.length();
	bool dp[l+1][l+1];
	string pal = "";
	int maxLength = 0, start = 1;
	//length 1
	for(int i =0;i<=l;i++){
		for(int j =0;j<=l;j++){
			dp[i][j] = 0;
		}
	}
	for(int i =1;i<=l;i++){
		dp[i][i] = 1;
		maxLength = 1;
	}
	// length 2
	for(int i =1;i<=l;i++){
		if(s[i]==s[i-1]){
			dp[i][i+1] = 1;
			maxLength = 2;
			start = i;
		}
		else{
			dp[i][i+1] = 0;
		}
		
	}
	//length >=3

	for(int k =3;k<=l;k++){
		for(int i =0;i<=l-k+1;i++){
			int j = i+k-1;
			if(s[i-1]==s[j-1]&&dp[i+1][j-1]==1){
				dp[i][j] = 1;
				if (k > maxLength)
                {
                    start = i;
                    maxLength = k;
                }
			}
			else{
				dp[i][j] = 0;
			}
		}
	}
	cout<<start<<" "<<maxLength;
	cout<<s.substr(start-1,maxLength);

}