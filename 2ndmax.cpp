#include <iostream>
using namespace std;

void check(int arr[],int n){
    int secondary=INT_MIN;
    int primary=INT_MIN;
    for (int i=0;i<n;i++){
        if (arr[i]>primary){
            primary=arr[i];
        }
    }
    int j=0;
    while (j<n){
        if (arr[j]!=primary && arr[j]>secondary){
            secondary=arr[j];
        }
        j++;
    }
    cout<<secondary;

}

int main(){
    int t;
    cin>>t;

    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[100];
            for (int x=0;x<n;x++){
                cin>>arr[x];
            }

            check(arr,n);
    cout<<endl;
    }

}
