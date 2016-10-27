#include <string>
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
bool isMul(int n){
	if(n%3==0){
		return true; 
	}
	return false;
}
void find(int ar[],int n){
	// int n = sizeof(ar)/sizeof(ar[0]);
	// int ar[A.size()+1];
    // for(int i =0;i<A.size();i++){
    //     ar[i] = A[i];
    // }
    unsigned int ans = 0;
    int k = 0;
    for(int i =0;i<32;i++){
        int c = 0;
       for(int j =0;j<n;j++){
           if(ar[j]&1){
           	   // cout<<ar[j]<<" ";
               c++;
           }
           ar[j] = ar[j] >> 1;
       		// cout<<ar[j]<<" ";
       		// cout<<(ar[j]&1)<<" ";
       }
       if(isMul(c-1)){
           ans = ans|(1<<k);
       }
      	// cout<<c<<endl;
       k++;
    }
    cout<<ans;
}


int main(){
	int ar[] = {1, 2, 10, 3, 3, 2, 2, 3, 1, 1};
	int n = sizeof(ar)/sizeof(ar[0]);
	find(ar,n);
	return 0;
}