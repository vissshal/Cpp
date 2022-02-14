#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int r=0;
    while(r<n){
        char a='A';
        int j=0;
        while(j<=r){
            char c=a+r;
            cout<<c;
        // direct 'A' + j krenge to integer print hoga since sum is always int/float
            j++;
        }
        cout<<endl;
        r++;
    }
}
