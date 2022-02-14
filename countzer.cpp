#include <iostream>
using namespace std;

int zero(int x){
    if (x==0){
        return 0;
    }
    int count=zero(x/10);
    (x%10==0) ? count++:count;
    return count;
}

int main(){
    int x;
    cin>>x;
    cout<<zero(x);
}
