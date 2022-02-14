#include <iostream>
using namespace std;

void push(int arr[],int n){
    int i=0;
    for (i;i<n;i++){
        if (arr[i]!=0 && i!=0){

            int j=i-1;
            while (arr[j]==0){

                arr[j]=arr[j+1];
                arr[j+1]=0;
                j--;

            }


        }
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

            push(arr,n);

            for (int x=0;x<n;x++){
                cout<<arr[x]<<" ";
            }
    cout<<endl;
    }

}
