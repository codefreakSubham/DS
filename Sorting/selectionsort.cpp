#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void selectionsort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int iMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[iMin])
                iMin=j;
        }
        swap(&a[i],&a[iMin]);
    }
}

void print(int a[],int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
}

int main()
{
    int arr[6]={45,23,7,56,3,21};
    selectionsort(arr,6);
    print(arr,6);
    return 0;
}
