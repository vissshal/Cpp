#include <iostream>
using namespace std;

int found(int a[],int n,int f,int b[]){
    if (n==0){
        return 0;
    }
    int count=found(a,n-1,f,b);
    if (a[n-1]==f){
        b[count]=n-1;
        return ++count;
    }
    return count;
    // yahan count n-1 k lie storage ka kaam kar raha h
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

    int b[50];

    int l=found(a,n,f,b);
    for (int i=0;i<l;i++){
        cout<<b[i]<<" ";
    }
}
