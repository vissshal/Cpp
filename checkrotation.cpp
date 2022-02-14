#include <iostream>
using namespace std;

void check(int arr[],int n){
    int i=1;
    while (arr[i]>arr[i-1] && i<n){
        i++;
    }
    if (i>=n){
        cout<<0;
    }
    else{
        cout<<i;
    }
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
