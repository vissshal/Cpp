#include <iostream>
using  namespace std;

int main(){
    int n;
    cin>>n;
    int a=5;
    int d=3;
    int t=0;
    int term=n;
    for (int i=1;term>0;i++){
        t=a+(i-1)*d;
        if (t%4!=0){
            cout<<t<<' ';
            term--;
        }
    }
}
