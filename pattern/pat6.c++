#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>0;i--){
		for(int j=i;j>0;j--){
			cout<<i-(j-1);
		}
		cout<<endl;
	}
}

