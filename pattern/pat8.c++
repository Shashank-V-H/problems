#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a;
	for(int i=n;i>0;i--){
		a=n-i;
		for(int k=1;k<=a;k++){
			cout<<" ";
		}
		for(int j=0;j<(2*i)-1;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

