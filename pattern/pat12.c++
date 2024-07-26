#include<iostream>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    a=(2*n)-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=a;k>0;k--){
            cout<<" ";
        }
        a-=2;
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}