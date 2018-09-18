#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void bubblesort(int a[],int n)
{
    int flag=0;
    for(int k=1;k<n;k++)
    {
        for(int i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    swap(a[i],a[i+1]);
                    flag=1;
                }
            }
           if(flag==0)
                break;
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
    bubblesort(arr,6);
    print(arr,6);
    return 0;
}

