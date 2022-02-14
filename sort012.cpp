#include <iostream>
using namespace std;

void sorting(int input[],int n){
    int n0=0;
    int n1=0;
    int n2=0;
    for (int i=0;i<n;i++){
        if (input[i]==0){
            n0++;
        }
        else if(input[i]==1){
            n1++;
        }
        else{
            n2++;
        }
    }
        for (int i=0;i<n0;i++){
            cout<<0<<" ";
        }
        for (int j=0;j<n1;j++){
            cout<<1<<" ";
        }
        for (int k=0;k<n2;k++){
            cout<<2<<" ";
        }

}

int main(){
    int t;
    cin>>t;

    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        int input[100];
        for (int x=0;x<n;x++){
            cin>>input[x];
        }
        sorting(input,n);

    cout<<endl;
    }

}

