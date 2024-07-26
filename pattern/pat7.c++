#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*one possibility
int main(){
	int n;
	cin>>n;
	int a;
	a=n;
	for(int i=1;i<=n;i++){
		for(int k=a;k>0;k--){
			cout<<" ";
		}
		a=a-1;
		for(int j=1;j<=i;j++){
			cout<<"*";
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

//second attempt

int main(){
	int n,x;
	cin>>n;
	int a;
	a=n;
	for(int i=1;i<=n;i++){
		for(int k=a;k>0;k--){
			cout<<" ";
		}
		a=a-1;
		x=1;
		for(int j=1;j<=(i*i)+1;){
			cout<<"*";
			j=x*2+1;
			x++;
		}
		cout<<endl;
	}
	return 0;
}
*/
int main(){
	int n,x;
	cin>>n;
	int a;
	a=n;
	for(int i=1;i<=n;i++){
		for(int k=a-1;k>0;k--){
			cout<<" ";
		}
		a=a-1;
		x=1;
		for(int j=1;j<(2*i);j++){
			cout<<"*";
			x++;
		}
		cout<<endl;
	}
	return 0;
}
