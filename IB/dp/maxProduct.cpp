#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
using namespace std;
int maxProduct(vector<int> &A){
	int dp[A.size()];
    int m = A[0];
    int curr_max = A[0];
    int curr_min = A[0];
    int prev_max = A[0];
    int prev_min = A[0];
    int ans = A[0];
    for(int i =1;i<A.size();i++){
    	curr_max = max(prev_max*A[i],max(prev_min*A[i],A[i]));
    	curr_min = min(prev_min*A[i],min(A[i],prev_max*A[i]));
    	ans = max(ans,curr_max);
    	prev_max = curr_max;
    	prev_min = curr_min;
        
    }
    // for(int i =0;i<A.size();i++){
    // 	cout<<dp[i]<<" ";
    // }
    return ans;
}
int main(){

	int n;
	cin>>n;
	vector<int> A(n);
	for(int i =0;i<n;i++){
		cin>>A[i];
	}
	cout<<maxProduct(A);
	return 0;
}