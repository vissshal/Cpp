#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i=1;
    int j=1;
    int o=1;
    while (i<=n){
        j=i;
        o=1;
        while (o<=i){
            cout<<j;
            o=o+1;

        }
        cout<<endl;
        i=i+1;

    }

// METHOD 2

    int m;
    cin>>m;
    int p=1;
    while (p<=m){
        int k=p;
        int q=1;
        while(q<=p){
            cout<<k;
            k=k+1;
            q=q+1;
        }
        cout<<endl;
        p=p+1;
    }
}
