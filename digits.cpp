#include <iostream>
using namespace std;

int digits(int n){
    if (n<10){
        return 1;
    }
    int count=digits(n/10);
    return count+1;
}

int main(){
    int n;
    cin>>n;
    cout<<digits(n);
}
