// CODE 1ST
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
*/

//CODE 2ND
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }

}
*/

//CODE 3RD
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
*/
//CODE 4TH
/*
#include <iostream>
using namespace std;
int main(){
    int n,i=2;
    float sum=1;
    cout<<"enter :";
    cin>>n;
    while(i<=n){
        if(i%2==0){
            sum=sum+1/float(i);
        }
        else{
            sum=sum-1/float(i);
        }
        i++;
    }
    cout<<sum;
    
}
*/
//CODE 5TH
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
*/

// CODE 6TH
/*

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter :";
    cin>>n;
    for(int i=5;i>0;i--){
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
            for(int k=1;k<=i;k++){
                cout<<"*";
            
        }
        cout<<endl;
    }
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    int n,c=1;
    cout<<"enter :";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<c;
        }
        c+=1;
        cout<<endl;
    }
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<i;
        }
        cout<<endl;
    }
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<i;
        }
        cout<<endl;
    }

}
*/
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    char c='a';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c;
        }
        c++;
        cout<<endl;
    }
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    char c='a';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c;
            c++;
        }
        c='a';
        cout<<endl;
    }
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    int n,c=1;
    cout<<"enter : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}*/
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<i;
        }
        cout<<endl;
    }
}*/
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=n-i;j>=0;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}*/