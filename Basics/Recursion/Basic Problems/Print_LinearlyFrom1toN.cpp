#include<iostream>
using namespace std;
void print1toN2(int n){
    if(n<=0){
        return ;
    }
    print1toN2(n-1);
    cout<<n<<" ";

}
void print1toN(int n,int i){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    print1toN(n,i+1);
    }

int main(){
    int n;
    cin>>n;
    print1toN(n,1);
    return 0;
}