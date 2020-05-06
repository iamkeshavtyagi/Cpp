#include<iostream>
using namespace std;
int main() {
	int no;

	int min_fernehite=0;
	cin>>min_fernehite;

	int max_fernehite;
	cin>>max_fernehite;
	cin>>no;
	int c;
	int i=0;

	for(i=min_fernehite;i<=max_fernehite;i=i+no){
		c=(5*(i-32))/9;
		cout<<i<<"	"<<c;
		cout<<"\n";
	}

	return 0;
}
