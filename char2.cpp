
#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int r=1;
    while(r<=n){
        int j=1;
        while(j<=r){
            char c = 'A'+n-r-1;
            char d=c+j;
            cout<<d;
            j++;
        }
        cout<<endl;
        r++;
    }
}
