#include <cmath>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
string largestNumber(const vector<int> &A) {
  vector<int> v1;
     for(int i =0;i<A.size();i++){
        v1.push_back(A[i]);
    }
     sort(v1.begin(),v1.end());
     vector<string> a;
     int mx = -1;
    for(int i =0;i<v1.size();i++){
        mx = max(v1[i],mx);
        a.push_back(to_string(v1[i]));
    }
    string ans = "";
    string temp = to_string(mx);
    int l  =temp.length();
    int j = 1;
    while(j<=l){
        vector<string> s;
        for(int i =0;i<a.size();i++){
            if(a[i].length()==j){
                s.push_back(a[i]);
            }
            else{
                break;
            }
        }
        for(int i =s.size()-1;i>=0;i--){
              ans+=s[i];
        }
        j++;
    }
     return ans;
}
int main(){
int n;
cin>>n;
const vector<int> A(n);
for(int i =0;i<n;i++){
  cin>>A[i];
}
cout<<largestNumber(A);
}