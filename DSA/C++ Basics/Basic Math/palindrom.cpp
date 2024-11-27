#include<bits/stdc++.h>
using namespace std;

 int rev(int n){
  int num=0;
  while(n>0){
    num=num*10+(n%10);
    n=n/10;
  }
  return num;
}
void checkPalindrom(int n){
  if(n==rev(n)){
    cout<<"Yes";
  }else{
    cout<<"No";
  }
}

int main(){
    int n;
    cin>>n;
    checkPalindrom(n);
}
