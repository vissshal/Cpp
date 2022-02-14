#include <iostream>
using namespace std;

int staircase(int n,int *steps,int sum,int count){
    if (sum==n){
        return count+1;
    }
    for (int j=0;j<3;j++){
        if ((sum+steps[j])<=n){

            count=staircase(n,steps,sum+steps[j],count);
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int steps[3]={1,2,3};
    int sum=0;
    int count=0;
    int w=staircase(n,steps,sum,count);
    cout<<w;
}
