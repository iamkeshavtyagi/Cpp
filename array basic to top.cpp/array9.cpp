#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    {
    cin>>arr[i];
}
//int a[]={23,54,87,89,65,32,23,65,78,10};
int Largest=arr[0];
int Smallest=arr[0];
for(int i=0;i<=n;i++){
    if(arr[i]>Largest){
        Largest=arr[i];
    }
    if(arr[i]<Smallest){
        Smallest=arr[i];
    }
}
cout<<"Largest = "<<Largest<<"Smallest = "<<Smallest<<endl;
return 0;
}
