#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
using namespace std;


int chordCnt(int A,long long cat[]){
	cat[0] = 1;
	int mod = 1000000007;
	for(int i =1;i<=A;i++){
		// cout<<i<<" Here:";
		for(int j = 0;j<=i-1;j++){
			cat[i] = cat[i]%mod;
			cat[j] = cat[j]%mod;
			cat[i-1-j] = cat[i-1-j]%mod;
			long long  k = cat[j]*cat[i-1-j];
			k = k%mod;
			cat[i]= cat[i]+k;
			cat[i] = cat[i]%mod;
			// cout<<cat[i]<<" ";
		}
		// cout<<endl;
	}
	
	return cat[A];
}

int main(){
	int n ;
	cin>>n;
	long long cat[n+1];
	memset(cat,0,sizeof(cat));
	cout<<chordCnt(n,cat);
}