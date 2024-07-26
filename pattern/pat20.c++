#include<iostream>
using namespace std;
int main(){
	int n,x,a;
	cin>>n;
	x=(n*2)-2;
	a=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<'*';
		}
		for(int k=x;k>0;k--){
			cout<<'#';
		}
		x-=2;
		for(int j=0;j<=i;j++){
			cout<<'*';
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		for(int j=a;j>0;j--){
			cout<<"*";
		}
		a-=1;
		cout<<endl;
			
	}
}
