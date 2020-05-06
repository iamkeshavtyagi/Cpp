//you can also take input of user choice
//Take 10 integer inputs from user and store them in an array and print them on screen.
#include<iostream>
using namespace std;

int main(){
int a[10];
for(int i=0;i<10;i++){
    cout<<"Enter a number\n";
    cin>>a[i];
}
cout<<"Numbers are:\n";
for(int i=0;i<10;i++){
    cout<<a[i]<<"\n";
    }
return 0;
}
