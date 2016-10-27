#include <cmath>
#include <algorithm>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void reverseWords(string &A) {
   istringstream iss(A);
   vector<string> v;
   do
    {
        string sub;
        iss >> sub;
        // std::cout << "Substring: " << sub << std::endl;
        v.push_back(sub);
    } while (iss);
    // cout<<v.size();
    reverse(v.begin(),v.end());
    for(int i =1;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(int argc, char const *argv[])
{
    string S =  "abc def ghi";
    reverseWords(S);
    return 0;
}