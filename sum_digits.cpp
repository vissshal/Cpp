#include <iostream>
using namespace std;

int sum(int x){
    if (x==0){
        return 0;
    }
    int count=sum(x/10);
    count+=x%10;

    return count;
}

int main(){
    int x;
    cin>>x;
    cout<<sum(x);
}
