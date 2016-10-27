#include <cmath>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
void LCP(string A[], int n){
	int min_l = INT_MAX;
	for(int i =0;i<n;i++){
		// cout<<A[i].length()<<" ";
		min_l = min(min_l,int(A[i].length()));
	}
	int flag = 0;
	string ans = "";
	for(int i =0;i<min_l;i++){
		char ch = A[0][i];
		int j =0;
		while(j<n&&A[j][i]==ch){
			  j++;
		}
		if(j==n){
			ans+=ch;
		}
		else{
			break;
		}
	}
	cout<<ans<<" ";
}
int main(){
	string A[] = {"abcd", "abde", "abcf"};
	int n = sizeof(A)/sizeof(A[0]);
	LCP(A,n);
}