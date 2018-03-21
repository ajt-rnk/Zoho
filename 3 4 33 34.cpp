#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	a[0]=3;a[1]=4;
	int lastIndex=2;
	for(int i=0;lastIndex<n;i++){
	    a[lastIndex++]=(a[i]*10+3);
	    a[lastIndex++]=(a[i]*10+4);
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
