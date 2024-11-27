#include<bits/stdc++.h>
using namespace std;
int sumOfn(int n){
  if(n<1){
    return 0;
  }
  return n+sumOfn(n-1) ;
}
int main(){
  int n=0;
  cin>>n;
cout<< sumOfn(n);
  return 0;
}