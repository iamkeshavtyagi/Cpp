/*Take 10 integer inputs from user and store them in an array.
 Again ask user to give a number.
  Now, tell user whether that number is present in array or not.*/


#include<iostream>
using namespace std;
int main(){
            int i;
            int arr[10];
            for( i=0;i<10;i++){
                cout<<"Enter the number\n";
                cin>>arr[i];
            }
            int n;
            cout<<"Enter a number again you want to search\n";
            cin>>n;
            int found=0;
            for(i=0;i<10;i++){
                if(arr[i]==n)
                {
                    found=1;
                    break;
                }
            }
            if(found)
                cout<<"number is found\n";
            else
                cout<<"Not found\n";
            return 0;
}


