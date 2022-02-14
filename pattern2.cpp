#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i;
        int k=2*i-1;
        while(j>0){
            cout<<" ";
            j=j-1;
        }
        while (k>0){
            cout<<"*";
            k=k-1;
        }
        i=i+1;
        cout<<endl;
    }

}
