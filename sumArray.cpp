#include <iostream>
using namespace std;

int sum(int a[],int n){
    if (n==1){
        return a[0];
    }
    int smallerSum=sum(a+1,n-1);
    return smallerSum+a[0];
}

int main(){
    int n;
    cin>>n;

    int arr[50];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sum(arr,n);
}
