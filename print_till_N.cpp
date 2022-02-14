#include <iostream>
using namespace std;

int print(int n){
    if (n==1){
        return 1;
    }
    int current=print(n-1);
    cout<<current<<" ";
    return current+1;
}
int main(){
    int n;
    cin>>n;
    int output=print(n);
    cout<<output;
}
