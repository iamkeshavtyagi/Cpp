#include<iostream>
using namespace std;
int binary_search(int a[],int n){
int s=0;
int e=n-1;
while(s<=e){
        int mid=(s+e)/2;
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]>key){
            e=mid-1;
    }
    else {
        s=mid+1;
    }
    return -1;
}

int main(){

            int n,key,i;
            cin>>n;

            int a[1000];

            for( i=0;i<n;i++){
                cin>>a[i];
            }

cout<<"Enter the elements you want to search :";
cin>>key;
}
