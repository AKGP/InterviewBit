#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<vector<int> > v;
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		vector<int> temp(n);
		for(int j =0;j<n;j++){
			cin>>temp[j];
		}
		v.push_back(temp);
	}

	for(int i =0;i<n;i++){
		for(int j =0;j<n;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}

}