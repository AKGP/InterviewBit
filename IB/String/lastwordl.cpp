#include <string>
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int fun(string A){

  int i = A.length()-1;
  int ans = 0;
  int flag = 1;
  if(int(A[i])==32){
    // cout<<"yes";
      while(i>=0&&int(A[i])==32){
           i--;
       }
   }
   cout<<A;
   while(i>=0&&int(A[i])!=32){
       i--;
    //   flag = 0;
       ans++;
   }
   return ans;
 }
 int main(){
  string s;
  getline(cin,s);
  // cout<<s;
  cout<<fun(s);
 }
