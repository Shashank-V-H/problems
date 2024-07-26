#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>0;i--){
		for(int j=i;j>0;j--){
			cout<<"*";
		}
		cout<<endl;
	}
}

/* -----*Alternate Answer*-----
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a;
	a=n/2;
	n=a;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
*/
