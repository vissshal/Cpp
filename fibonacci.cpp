#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=1;
    // t1 for first term
    int b=1;
    // tn for 2nd term
    int ti;
    // ti for current term
    for (int i=3;i<=n;i++){

        ti=a+b;
        // ti = sum of last 2 term
        a=b;
        // after that i-2 term = i-1 term
        b=ti;
        // and last term i.e i-1 term = i term
    }
    cout<<ti;
}
