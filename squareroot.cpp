#include <iostream>
using  namespace std;

int main(){
    int n;
    cin>>n;
    int b;
    int i=1;
    for (i;i<=n;i++){
        b=i*i;
        if (b==n){
            cout<<i;
            break;
        }
        else if (b>n){
            cout<<(i-1);
            break;
        }

    }
}
