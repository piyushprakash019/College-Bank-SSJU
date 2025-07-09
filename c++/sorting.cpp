/*#include <iostream>
using namespace std;
int main()
{
    int n,m,l,t;
    cout<<"enter the length : ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"enter the number ";
        cin>>arr[i];
    }
    cout<<"sorting ";
    //SELECTION SORT 
    for(int j=0;j<n-1;j++)
    {
        m=arr[j];
        for(int k=j+1;k<n;k++)
        {
            if(m>arr[k])
            {
                m=arr[k];
                l=k;
            }
        }
        if(arr[j]>arr[l])
        {
            t=arr[j];
            arr[j]=arr[l];
            arr[l]=t;
        }
    }
    for (int s=0;s<n;s++)
    {
        cout<<arr[s]<<" ";
    }
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"length : ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cout<<"enter no : ";
        cin>>arr[i];
    }
    cout<<"sorting st ";
    //BUBLE SORTING 
    for(int i=n;i>0;i--)
    {
        for (int j=0;j<i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                m=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=m;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/
#include <iostream>
using namespace std;
int main()
{
    int a[5]={12,4,56,3,78};
    int temp;
    for (int i=1;i<5;i++)
    {
        for (int j=i;j>=1;j--)
        {
            if (a[j-1]>a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int k=0;k<5;k++)
    {
        cout<<a[k]<<" ";
    }
}