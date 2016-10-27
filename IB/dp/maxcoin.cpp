#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
using namespace std;
typedef struct pair
{
	int first,second;
}Pair;
int findMax(int A[], int n){
	Pair dp[n][n];
	for(int i =0;i<n;i++){
		dp[i][i].first = A[i];
		dp[i][i].second = 0;
	}

	int l = 1;
	for(int i=0;i<n;i++){
		l++;
		for(int j =0;j<n-l+1;j++){
			dp[i][j] = max()
		}
	}

}
int main(){
	int A[] = {3,9,1,2};
	int n = sizeof(A)/sizeof(A[0]);
	int ans = findMax(A,n);

	return 0;
}