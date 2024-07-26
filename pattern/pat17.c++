#include<iostream>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    a=n-2;
    char c;
    for(int i=n-1;i>0;i--){
        cout<<" ";
    }
    cout<<"A"<<endl;
    for(int i=1;i<n;i++){
        for(int k=a;k>0;k--){
            cout<<k;
        }
        a-=1;
        
        cout<<"A";
        c='B';
        for(int j=1;j<=(2*i)-1;j++){
            cout<<c;
            c+=1;
        }
        cout<<"A";
        cout<<endl;
    }
}