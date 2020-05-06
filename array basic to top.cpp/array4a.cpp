#include<iostream>
using namespace std;

int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cout << "Enter a number\n";
        cin >> a[i];
    }

    for(int i=9;i>=0;i--)
    {
    cout<<a[i]<<"\n";
    }
    return 0;
}
