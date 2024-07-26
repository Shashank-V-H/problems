#include<iostream>
using namespace std;
int main(){
   int n,a=1;
   cin>>n;
   for(int i=2;i<=n+1;i++){
    for(int j=1;j<i;j++){
        cout<<a<<" ";
        a+=1;
    }
    cout<<endl;
   }
}