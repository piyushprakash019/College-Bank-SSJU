#include <iostream>
using namespace std;
class stack{
    private:
    int top;
    int arr[5];
    public:
    stack(){
        top=-1;
        for(int i=0;i<5;i++){
            arr[i]=0;
        }
    }
    void push(int item){
        if(top==4){
            cout<<"stack overflow ";
        }
        else {
            top++;
            arr[top]=item;
            cout<<"element added ";
        }
    }
    int pop(){
        if(top==-1){
            cout<<"underflow ";
            return 0;
        }
        else{
            int popitem=arr[top];
            arr[top]=0;
            top--;
            return popitem;
        }
    }
    int count(){
        return (top+1);
    }
    void display(){
        cout<<"stack iteams "<<endl;
        for(int i=4;i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    stack s1;
    int opt,value;
    do{
        cout<<"enter your choice "<<endl;
        cout<<"enter 0 for exit"<<endl;
        cout<<"enter 1 for Push()"<<endl;
        cout<<"enter 2 for Pop()"<<endl;
        cout<<"enter 3 for count()"<<endl;
        cout<<"enter 4 for display()"<<endl;
        cin>>opt;
        switch(opt){
            case 1:
            cout<<"enter the value : ";
            cin>>value;
            s1.push(value);
            break;
            case 2:
            cout<<"deleted item is"<<s1.pop();
            break;
            case 3:
            cout<<"total element in stack is : "<<s1.count();
            case 4:
            s1.display();
            break;
            default :
                cout<<"wrong choice ";
                break;
        }
    }while(opt!=0);
}