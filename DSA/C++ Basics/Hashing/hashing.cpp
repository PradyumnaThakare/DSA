#include<bits/stdc++.h>
using namespace std;
// unordered_map is the best to use for hashing normal map has comparitivly large complexity

int main(){
   vector<int>arr;
    int n,j;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>j;
      arr.emplace_back(j);
    }
    
    // Mapp
    // Find the max element

  
    unordered_map<int,int>mpp;
 
    //Loading
    for(int i=0;i<n;i++){
      mpp[arr[i]]++;
    }
   
  for (auto x : mpp)
    cout << x.first << " " << 
            x.second << endl;
            
  cout<<mpp[10]<<endl;
  cout<<mpp[5]<<endl;
  
   //  map<char,int>mpp;  string str="pradayumna"  mpp[str[i]];
}