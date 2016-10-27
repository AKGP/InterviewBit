#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
using namespace std;

float median(int ar[], int n){
	if(n%2==0){
		return float(ar[n/2]+ar[(n/2)-1])/float(2);
	}
	else{
		return ar[n/2];
	}
}

float findMedianSortedArrays(int A[], int l1, int r1, int B[],int l2, int r2){
	if(n==1&&m==1){
		return (A[0]+B[0])/2;
	}
	if(n==2&&m==2){
		
	}
	float m1 = median(A,r1+1);
	float m2 = median(B,r2+1);

	return m1;
}

int main(){
	int n1,n2;
	cin>>n1>>n2;
	int a1[n1],a2[n2];
	for(int i = 0;i<n1;i++ ){
		cin>>a1[i];
	}
	for(int i = 0;i<n2;i++ ){
		cin>>a2[i];
	}
		
	cout<<findMedianSortedArrays(a1,0,n1-1,a2,0,n2-1);
	return 0;
}