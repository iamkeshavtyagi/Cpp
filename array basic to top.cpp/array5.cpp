#include<iostream>
using namespace std;
int main(){
            int n,sum=0,pos=1;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                    cin>>arr[i];
            }
            cout<<"Enter the option you want:\n";
            for(int i=0;i<n;i++)
            {

                sum+=arr[i];
                pos*=arr[i];
            }
            cout<<sum<<endl;
            cout<<pos<<endl;
            return 0;
}
