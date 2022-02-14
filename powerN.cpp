#include <iostream>
using namespace std;

int powerR(int x,int n){
    if (n==0){
        return 1;
    }
    int value=powerR(x,n-1);
    return x*value;

}

int main(){
    int x,n;
    cin>>x>>n;
    int output=powerR(x,n);
    cout<<output;
}
