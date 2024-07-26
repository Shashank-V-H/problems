#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char c,a;
	c='E';
	a=c;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<a;
			a+=1;
		}
		a=c-(i+1);
		cout<<endl;
	}
}
