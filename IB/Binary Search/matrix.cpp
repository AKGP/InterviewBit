#include <cmath>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
using namespace std;



int searchMatrix(vector<vector<int> > &A, int B){
		int i = 0,j = A[0].size()-1;
		while(i<A.size()&&j>=0){
			if(A[i][j]==B){
				return 1;
			}
			if(B<A[i][j]){
					j--;
			}
			else{
				i++;
			}
		}
		return 0;
}
int main(){
	vector < vector<int> > M;
	int m,n;
	cin>>n>>m;
	for(int i =0;i<n;i++){
		vector <int> row;
		for(int j = 0;j<m;j++){
			int x ;
			cin>>x;
			row.push_back(x);
		}
		M.push_back(row);
	}
	// cout<<M.size();
	int b;
	cin>>b;
	cout<<searchMatrix(M,b);
	return 0;
}