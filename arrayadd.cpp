#include <iostream>
using namespace std;

void add_Arr(int added[],int arr1[],int n1,int arr2[],int n2,int index){
    int c=0;
    int i=n1-1;
    int j=n2-1;

        while (index>0){
            int a=arr1[i];
            int b=arr2[j];
            if (i<0){
                a=0;
            }
            else if(j<0){
                b=0;
            }

            int v=a+b+c;
            int r=v%10;
            added[index]=r;
            c=v/10;
            i--;
            j--;
            index--;
        }
        if (index==0){
            added[index]=c;
            index--;
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
        int added[100];
        int index=0;
        if (n1>=n2){
            index=n1;
            add_Arr(added,arr1,n1,arr2,n2,index);
        }
        else{
            index=n2;
            add_Arr(added,arr1,n1,arr2,n2,index);
        }
        for (int x=0;x<=index;x++){
            cout<<added[x]<<" ";
            }
    cout<<endl;
    }

}
