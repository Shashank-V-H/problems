#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=n;
	int b=n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n;i>0;i--){
		for(int j=i;j>0;j--){
			cout<<"*";
		}
		cout<<endl;
	}
}

