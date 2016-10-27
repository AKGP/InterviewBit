#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int f(int A, int B){
	 int t = max(A,B);
     int u = min(A,B);
     int x = gcd(t,u);
     // cout<<x<<endl;
     int ans;
     if(A%x!=0){
     	ans = A/x;
     }
     else{
     	ans = 1;
     }
     
     return ans;
}

int main(){
	int A, B;
	cin>>A>>B;
	cout<<f(A,B);
	return 0;
}