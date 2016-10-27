#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>  
#include <set>
#include <cstdlib>
#include <string>
using namespace std;
int findUnique(int A[][2],int n,int m){
    int dp[n][m];
    if(A[0][0]==1){
        dp[0][0] = 0;
    }
    else{
        dp[0][0] = 1;
    }
    
    for(int i =1;i<m;i++){
        if(A[0][i-1]==1){
            dp[0][i] = 0;
        }
        else if(dp[0][i-1]==0){
            dp[0][i] = 0;
        }
        else if(A[0][i-1]==0){
            dp[0][i] =1;
        }
    }
    for(int i =1;i<n;i++){
        if(A[i-1][0]==1){
            dp[i-1][0] = 0;
        }
        else if(dp[i-1][0]==0){
            dp[i-1][0] = 0;
        }
          else if(A[i-1][0]==0){
            dp[i-1][0] =1;
        }
    }
    for(int i =1;i<n;i++){
        for(int j = 1;j<m;j++){
            if(A[i][j]==1){
                dp[i][j] = 0;
            }
            else{
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
           // cout<<dp[i][j]<<" ";
        }
        //cout<<endl;
    }
     for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
         }

    // return dp[n-1][m-1];
}
int main(){
    int A[1][2] = {{1,0}};
    // cout<<
    // cout<<
    findUnique(A,1,2);
    return 0;
}