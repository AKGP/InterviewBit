#include <string>
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int getLength(int m){
     int l = 0;
     while(m){
       m/=10;
       l++;
   }
   return l;
}

int getI(int a, int l){
    while(l!=1){
        a/=10;
        l--;
    }
    a%=10;
    return a;
}

void largestNumber(const vector<int> &A) {
   int m = INT_MAX;
   vector<vector<int> > v(10);
   for(int i =0;i<A.size();i++){
       m = max(A[i], m);
   }
   int l =getLength(m);
   for(int k =1;k<=l;k++){
       for(int i =0;i<v.size();i++){
           for(int j =0;j<v[i].size();j++){
               if(k<=getLength(v[i][j])){
                   v[getI(v[i][j],k)].push_back(v[i][j]);
               }
           }
       }
   }
   
   for(int i =v.size()-1;i>=0;i--){
           for(int j =0;j<v[i].size();j++){
               cout<<v[i][j];
           }
       }
  
   
   
}

int main(){
	int n;
	cin>>n;
	const vector<int> A(n);
	for(int i =0;i<n;i++){
		scanf("%d",&A[i]);
	}
	largestNumber(A);
	return 0;
}