#include <string>
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
unsigned int reverse(unsigned int n){
	int ans = 0;
	while(n){
		ans = ans|(n&1);
		n = n>>1;
		ans<<1;

	}
	return ans;
}
int main(){
	unsigned int n;
	cin>>n;
	cout<<reverse(n);
}