/*#include <iostream>
using namespace std;
class queue
{
private:
    int front, rear;
    int arr[5];

public:
    queue()
    {
        front = 0, rear = 0;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    void enqueue(int item)
    {
        if (rear == 4)
        {
            cout << "overflow and exit ";
        }
        else
        {
            arr[rear] = item;
            rear++;
        }
    }
    void dequeue()
    {
        if (front == -1)
        {
            cout << "underflow and exit ";
        }
        else
        {
            int del_item = arr[front];
            front++;
            cout << "item deleted :" << del_item << endl;
        }
    }
    void display()
    {
        for (int s = front; s < 5; s++)
        {
            cout << arr[s] << endl;
        }
    }
};
int main()
{
    queue q1;
    int item, choice;
    do
    {
        cout << "enter your choice " << endl;
        cout << "enter 0 for exit" << endl;
        cout << "enter 1 for adding item " << endl;
        cout << "enter 2 for deletion" << endl;
        cout << "enter 3 for display()" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the item : ";
            cin >> item;
            q1.enqueue(item);
            break;
        case 2:
            q1.dequeue();
            break;
        case 3:
            cout << "item in the queue arr : ";
            q1.display();
            break;
        default:
        {
            cout << "wrong choice try again";
        }
        }
    } while (choice != 0);

    return 0;
}
*/
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