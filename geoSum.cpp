#include <iostream>
using namespace std;

float Gsum(int n,float p){
    if (n==0){
        return 1;
    }
    // p ki value n k lie 1 hogi aur baki k lie 1/2 se divide hoti jayegi
    float sum=Gsum(n-1,p*0.5);
    return sum+p*0.5;

}

int main(){
    int n;
    cin>>n;
    cout<<Gsum(n,1);

}

