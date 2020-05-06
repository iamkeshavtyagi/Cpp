#include<iostream>
using namespace std;
int main(){
          int n,key;
          cin>>n;

          int a[1000];

          for(int i=0;i<n;i++){
            cin>>a[i];
          }
    //Algorithm to find the largest and smallest number

    int largest=INT_MIN;
    int smallest=INT_MAX;

    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest = a[i];
        }
        if(a[i]<smallest){
            smallest = a[i];
        }
    }
    cout<<"Largest "<<largest<<endl;
    cout<<"Smallest "<<smallest<<endl;
    }
