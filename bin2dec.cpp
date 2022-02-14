#include <iostream>
#include<math.h>
using  namespace std;

int main(){
    int n;
    cin>>n;
    int dec=0;
    int a=1;
    if (n%10!=0){
        dec++;
    }
    n/=10;
    while(n!=0){
        int rem=n%10;
        dec+=rem*pow(2,a);
        n/=10;
        a++;
    }
    cout<<dec;
}



