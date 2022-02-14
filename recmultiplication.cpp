#include <iostream>
using namespace std;

int multiple(int a,int b){
    if (b<=0){
        return 0;
    }

    int add=multiple(a,b-1);
    return add+a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<multiple(a,b);
}
