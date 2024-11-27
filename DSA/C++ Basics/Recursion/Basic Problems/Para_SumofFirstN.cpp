#include<bits/stdc++.h>
using namespace std;
void sumOfn(int n,int sum){
  if(n<1){
    cout<<sum;
    return ;
  }
   sumOfn(n-1,sum+n);
}
int main(){
  int n=0;
  cin>>n;
  int sum=0;
 sumOfn(n,sum);
  return 0;
}