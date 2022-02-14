#include <iostream>
using namespace std;

void turn(int arr[],int n,int r){
    int index=-50;
    for (int x=0;x<n;x++){
        if (arr[x]==r){
            index=x;
            break;
        }
    }
        for (int i=index;i>=0;i--){
            int j=i+1;
            int jump=n-1-index;
            while (jump>0){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j++;
                jump--;
            }

        }
    }



int main(){
    int t;
    cin>>t;

    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[20];
            for (int x=0;x<n;x++){
                cin>>arr[x];
            }
            int r;
            cin>>r;

            turn(arr,n,r);

            for (int x=0;x<n;x++){
                cout<<arr[x]<<" ";
            }
    cout<<endl;
    }

}
