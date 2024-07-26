#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char a;
	for(int i=1;i<=n;i++){
		a='A';
		for(int j=1;j<=i;j++){
			cout<<a;
			a+=1;	
		}
		cout<<endl;
	}
}

