#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
#include <stack>
using namespace std;
int findMax(int ar[], int n){
	stack <int> s;
	int top,max_area=-1,area = 0;
	// s.push(0);
	top = 0;
	int i;
	for(i =0;i<n;)
	{
		if(s.empty()||ar[s.top()]<=ar[i]){
			s.push(i++);
		}
		else{
			top = s.top();
			s.pop();
			if(s.empty()){
				area = ar[top]*i;
			}
			else{
				area = ar[top]*(i - s.top()-1);
			}
			max_area = max(area, max_area);
		}
		
	}
	while(!s.empty()){
		top = s.top();
		
		s.pop();
		if(s.empty()){
			area = ar[top]*i;
		}
		else{
			area = ar[top]*(i - s.top()-1);
		}
		max_area = max(area, max_area);
	}
	return max_area;
}
int main(){
	int A[3][3] = {{1,1,1},{0,1,1},{1,0,0}};
	int n = 3;
	int max_area = -1;
	int temp[n];
	memset(temp,0,sizeof(temp));
	for(int i =0;i<3;i++){
		for(int j = 0;j<3;j++){
			if(A[i][j]==0){
				temp[j] = 0;
			}
			else{
				temp[j]+=A[i][j];
			}
		}

		max_area = max(max_area,findMax(temp,3));
	}
	cout<<max_area;
	

	return 0;
}