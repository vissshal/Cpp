#include <iostream>
using namespace std;

void output(int arr[],int n){
    int i=1;
    int k=0;
    int j=n-1;
    while(i<=n){
        arr[k]=i;
        i++;
        k++;
        if(i<=n){
           arr[j]=i;
            j--;
            i++;
        }
    }
}
int main(){
    int test;
    cin>>test;

    for (int i=0;i<test;i++){
        int length;
        cin>>length;
        int arr[100];
        output(arr,length);
        for (int x=0;x<length;x++){
                cout<<arr[x]<<" ";
        }
        cout<<endl;
    }
}
