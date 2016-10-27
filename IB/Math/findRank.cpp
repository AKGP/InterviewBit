#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
using namespace std;
long long fact(int n){
    if(n==1||n==0){
        return 1;
    }
    return n*fact(n-1);
}
int findRightSmall(string S, int i){
	int res = 0;
	for(int j =i+1;j<S.length();j++){
		if(S[i]>S[j]){
			res++;
		}
	}
	return res;
}

int findRank(string S){
	int n = S.length();
	long long c, ans = 0;
	for(int i =0;i<n;i++){
		c = findRightSmall(S,i);
		ans+=c*fact(n-i-1);
	}
	return ans+1;
}

int main(){
	string s = "abc";
	cout<<findRank(s);
	return 0;
}