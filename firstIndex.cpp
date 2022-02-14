#include <iostream>
using namespace std;

int found(int a[],int n,int f){
    if (n==0){
        return -1;
    }
    if (a[0]==f){
        return 0;
    }
    int index=found(a+1,n-1,f);
    if (index==-1){
        return -1;
    }
    else{
        return index+1;
    }
}
int main(){
    int n;
    cin>>n;

    int a[50];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int f;
    cin>>f;
    cout<<found(a,n,f);

}
