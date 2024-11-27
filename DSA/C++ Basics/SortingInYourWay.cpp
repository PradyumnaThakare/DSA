#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
  if(p1.second<p2.second) return true;
  if(p1.second>p2.second)return false;
  // they are same
  if(p1.first>p2.first)return true;
  return false;
}
int main(){
   pair<int,int> a[]={{1,2},{2,1},{4,1}};
   // sort it according to second element
   // if second element is same then sort 
   // i according to first element but in descending 
   // Output {{2,1},{4,1},{1,2}}
   sort(a,a+3,comp);
   for(auto it : a){
     cout<<it.first<<" "<<it.second <<endl;
   }
}