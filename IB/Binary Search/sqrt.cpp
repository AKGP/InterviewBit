#include <string>
#include <iostream>
#include <vector>
using namespace std;

int find(int l, int r,int n){
	long long m = (l+r)/2;
	if(m*m==n){
		return m; 
	}
	if(l>r){
		return r;
	}
	if(m*m>n){
		find(l,m-1,n);
	}
	else if(m*m<n){
		find(m+1,r,n);
	}
}

int main(){
	int A;
	cin>>A;
	cout<<find(0,A,A);
}