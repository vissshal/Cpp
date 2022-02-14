#include <iostream>
using namespace std;

void mergearray(int mrg[],int arr1[],int n1,int arr2[],int n2){
    int i=0;
    int j=0;
    for (int x=0;x<(n1+n2);x++){

        if (i<n1 && arr1[i]<=arr2[j] or j>=n2){
            mrg[x]=arr1[i];
            i++;
        }
        else if (j<n2 && arr1[i]>=arr2[j] or i>=n1){
            mrg[x]=arr2[j];
            j++;
        }
    }

}
int main(){
    int test;
    cin>>test;
    for (int i=0;i<test;i++){
        int n1;
        cin>>n1;
        int arr1[100];
            for (int x=0;x<n1;x++){
                cin>>arr1[x];
            }
        int n2;
        cin>>n2;
        int arr2[100];
            for (int x=0;x<n2;x++){
                cin>>arr2[x];
            }
        int mrg[100];
        mergearray(mrg,arr1,n1,arr2,n2);
                    for (int x=0;x<(n1+n2);x++){
                cout<<mrg[x]<<" ";
            }
    cout<<endl;
    }

}
