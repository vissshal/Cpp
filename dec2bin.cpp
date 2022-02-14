#include <iostream>
#include<math.h>
using  namespace std;

int main(){
    int n;
    cin>>n;
    int bin=0;
    int rem;
    int a=0;
    while(n!=0){
        rem=n%2;
        bin=bin+rem*(pow(10,a));
        a++;
        n=n/2;
    }
    cout<<(bin);
}

// ye code dusre jagah sahi output de raha h
