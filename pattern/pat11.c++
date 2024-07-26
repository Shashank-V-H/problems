#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a;
	for(int i=1;i<=n;i++){
		a=n;
		for(int j=1;j<=i;j++){
			if((i%2)==0){
				cout<<(j+1)%2;
			}
			else{
				cout<<(i*j)%2;
			}
		}
		cout<<endl;
	}
}

