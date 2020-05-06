#include<iostream>
using namespace std;
int main(){
            int arr1[10],arr2[10];
            for(int i=0;i<10;i++)
            {
                cin>>arr1[i];
                cout<<"\n";
            }
          int j=0;
          for(int i=9;i>=0;i--)
          {
              arr2[j]=arr1[i];
              j++;
          }
          for(int j=0;j<10;j++)
          {
              cout<<arr2[j];
              cout<<"\n";
          }
          return 0;
}

/*#include<iostream>
using namespace std;

int main()
{
    int i;
    int arr[10], arr2[10];
    for( i=0;i<10;i++)
    {
        cout << "Enter a number\n";
        cin >> arr[i];
    }
    int j=0;
    for( i=9;i>=0;i--)
    {
        arr2[j]=arr[i];
        j++;

        }
    for( j=0;j<10;j++)
    {
        cout<<arr2[j]<<"\n";

    }
    return 0;
}

*/


