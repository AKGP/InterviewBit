#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
using namespace std;
bool comp(int a, int b){
    int l1 = 0,l2 =0,t1 = a, t2 = b;
    while(t1){
        l1++;
        t1/=10;
    }
    while(t2){
        l2++;
        t2/=10;
    }
    int c1 = a+b*pow(10,l2);
    int c2 = b+a*pow(10,l2);
    cout<<c1<<" "<<c2;
    if(c1>c2){
        return 1;
    }
    return 0;
}
void sort(vector<int> &A){
    int n = A.size();
    for(int i =0;i<A.size();i++){
        for(int j =0;j<n-1;j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
  	for(int i =0;i<A.size();i++){
  			cout<<A[i]<<" ";
  	}
    
}
int main(){
	int n;
	cin>>n;
	vector<int> A(n);

	for(int i = 0;i<n;i++){
			cin>>A[i];
	}
	sort(A);
}