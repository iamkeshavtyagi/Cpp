#include<stdio.h>
void insertion_sort(int arr[],int n);
int main(){
    int arr[10000],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);

void insertion_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];
            j--;
            display(arr,n);
        }
        arr[j+1]=temp;
        display(arr,n);
    }
    return 0;
}

    void display(int arr[],int n){
        int i=0;
             for(i=0;i<n;i++)
    printf("%d ",arr[i]);

}
}
