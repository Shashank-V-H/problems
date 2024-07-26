#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=n;
	int b=n;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=a-1;k++){
			cout<<" ";
		}
		a-=1;
		for(int j=1;j<=(2*i)-1;j++){
			cout<<"*";
		}
		cout<<endl;
		
		
	}
	for(int i=n;i>0;i--){
		for(int k=b;k<n;k++){
			cout<<" ";
		}
		b-=1;
		for(int j=0;j<(2*i)-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
}
