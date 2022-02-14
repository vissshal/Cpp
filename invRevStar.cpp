#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i;
        int k=n+1-i;
        while(j>=0){
            cout<<k;
            j--;
        }
        cout<<endl;
        i++;

    }
}
