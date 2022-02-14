#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=n-1;
    int m=1;

    while(i>=0){
        int j=1;
        int o=0;
        while (i>=j){
            cout<<" ";
            j=j+1;
            o=o+1;
        }
        while (o<n){
        cout<<m;
        m=m+1;
        o=o+1;
        }
        cout<<endl;
        i=i-1;

    }
    /*
    int i=2;
    int sum=0;
    while(i<=n){
        if (i%2==0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<sum;
    */
}
