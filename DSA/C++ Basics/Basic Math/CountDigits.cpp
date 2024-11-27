#include<bits/stdc++.h>
using namespace std;
 void countDigits2(int n){
  int cnt=(int)log10(n)+1  ;
  cout<<cnt;
}

 void countDigits(int n){
   int cnt=0;
  while(n>0){
    n=n/10;
    cnt++;
  }
  cout<<cnt;
  
}

int main(){
    int n;
    cin>>n;
    countDigits(n);
}
//TC : O (log10(N))