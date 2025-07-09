#include <iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,5,34,56};
    int lr=0,up=4,f,mid,item;
    cout<<"enter searching item : ";
    cin>>item;
    for(int i=0;i<5;i++)
    {
        mid=(lr +up)/2;
        if (arr[mid]==item)
        {
            f=1;
        }
        if (arr[mid]>item)
        {
            up=mid-1;
        }else{
            lr=mid+1;
        }
    }
    if (f==1)
    {
        cout<<"item found ";
    }
    else {
        cout<<"not found";
    }
    return 0;
}