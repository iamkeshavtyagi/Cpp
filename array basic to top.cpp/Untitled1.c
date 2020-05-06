#include<iostream>
#include<math.h>
using namespace std;
int main() {
		int no;
		int N;
		cin>>N;
		cin>>no;
	while(N>0){
		cin>>no;
		int p=0;
		int ans=0;
		while(no>0){
			int r=no%10;
			ans=ans+r*pow(2,p);
			p=p+1;
			no=no/10;
		}
		cout<<ans<<endl;
		N=N-1;
	}

	return 0;
}
