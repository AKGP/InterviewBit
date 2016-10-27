#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
#include <cstdlib>
#include <string>
using namespace std;
int find(string A,int n){
	int cnt[n+1];
	if(n==1&&A=="0"||A[0]=='0'){
		return 0;
	}
	cnt[0] = 1;
	cnt[1] = 1;
	for(int i =2;i<=n;i++){
		cnt[i] = 0;

		if(A[i-1]>'0'){
			cnt[i] = cnt[i-1];
		}
	
		if(A[i-2] != '0'&&A[i-2]<'2'||(A[i-2]=='2'&&A[i-1]<'7')){
			cnt[i]+=cnt[i-2];
		}

	}
	// for(int i =0;i<n;i++){
	// 	cout<<cnt[i]<<" ";
	// }
	return cnt[n];
	
}

int numDecodings(string A) {
  int n = A.length();
  return find(A,n);  
}

// 0799733
// 2611055971756562
int main(){
string s = "0799733";
cout<<numDecodings(s);
}