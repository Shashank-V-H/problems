#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char a;
	for(int i=n;i>0;i--){
		a='A';
		for(int j=i;j>0;j--){
			cout<<a;
			a+=1;	
		}
		cout<<endl;
	}
}