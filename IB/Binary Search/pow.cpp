#include <string>
#include <iostream>
#include <vector>
using namespace std;
int pow(int x, int n, int d) {
	if(n==0){
		return 1%d;
	}
	
	
	long long i;
	if(n%2==0){
		i =  (pow(x,n/2,d)*pow(x,n/2,d))%d;
		// i = i%d;
	}
	else{
		i = (x*pow(x,n/2,d)*pow(x,n/2,d))%d;
		// i = i%d;
	}
	// cout<<i<<endl;
	if(i<0){
		return d+i%d;
	}
	return i%d;

}

int main(){
	cout<<pow(71045970,41535484,64735492);
}
//20805472