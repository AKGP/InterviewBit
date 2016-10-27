#include <string>
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
void printArray(int ar[], int n){
	for(int i =0;i<n;i++){
		cout<<ar[i]<<" ";
	}
}
int partition(int ar[], int l, int r){
	int pivot = r;
	int i = l-1, j;
	for(j=l;j<r;j++){
		if(ar[pivot]>=ar[j]){
			i++;
			swap(&ar[i], &ar[j]);
		}
	}
	swap(&ar[i+1],&ar[pivot]);
	return i+1;
}

int findPos(int ar[], int k, int l, int r){
	if(k>0&&k<=r){
		int p = partition(ar,l,r);
		if(p==k){
			return k;
		}
		if(p>k){
			return findPos(ar,k,l,p-1);
		}
		else{
			return findPos(ar,k,p+1,r);
		}
	}
	
}


int main(){
	int ar[] = {1};
	// cout<<ar[0];
	int n = sizeof(ar)/sizeof(ar[0]);
	// int p = partition(ar,0,n-1);
	int k = findPos(ar,1,0,n-1);
	cout<<ar[k];
	// printArray(ar,n);
	// cout<<p;
}