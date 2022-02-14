#include <iostream>
using namespace std;

int fun(int x){
    int ans=1;
    int i=1;
    while(i<=x){
        ans*=i;
        i++;
    }
    return ans;
}
    int main(){
        int n,r;
        cin>>n>>r;

    int output=fun(n);
    int output2=fun(r);
    cout<<output<<endl<<output2;

    }
