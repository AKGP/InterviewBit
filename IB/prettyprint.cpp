#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
using namespace std;

void fun(int A){
	vector<vector<int> > v;
	vector<vector<int> > ::iterator it;
	int mat[2*A-1][2*A-1];
    int l = 2*A-1;
    int r = A-1,c = A-1;
    int k = 0;
    for(int i = r;i>=0;i--){
        for(int j =c;j>=0;j--){
            mat[i][j] = A-j;
            mat[j][i] = mat[i][j];
        }
        r--;
        c--;
    }
   
    for(int i = 0;i<A;i++){
        for(int j =A+1;j<2*A-1;j++){
        	   mat[i][j] = mat[i][2*A-j-1];
        	   mat[i][j-1] = mat[i][2*A-j-1];
       }
    }
    for(int i = 0;i<A-1;i++){
    	 vector<int> row;
        for(int j =0;j<2*A-1;j++){
           row.push_back(mat[i][j]);
        }
        v.push_back(row);
    }
    for(int i =A-1;i>=0;i--){
    	 vector<int> r;
        for(int j =0;j<2*A-1;j++){
           r.push_back(mat[i][j]);
          
        }
    v.push_back(r);
        
    }
   
    
//  cout<<"Size"<<v.size();   
// for(int i = 0;i<v.size();i++){
//         for(int j =0;j<v.size();j++){
//         	cout<<v[i][j];
//         }
//       cout<<endl;
//     }

    return v;
}

int main(){
	int A;
	cin>>A;
	fun(A);
}
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444