#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int s,int e){
     int temp=arr[s];
     arr[s]=arr[e];
     arr[e]=temp;
}
void arrRev(int arr[],int s,int e){
     if(s>=e){
       return;
     }
     // base  cal 
     swap(arr,s,e);
     //recusion
     arrRev(arr,s+1,e-1);
     
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  arrRev(arr,0,n-1);
  
 for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
 }
  
  return 0;
}