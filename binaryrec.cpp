#include <iostream>
using namespace std;

int binary(int n,int *array,int f,int s,int e){
    if (s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if (f==array[mid]){
        return mid;
    }
    else if (f>array[mid]){
        int index=binary(n,array,f,mid+1,e);
    }
    else {
        int index=binary(n,array,f,s,mid);
    }
}

int main(){
    int n;
    cin>>n;
    int array[50];

    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    int f;
    cin>>f;

    int index=binary(n,array,f,0,n-1);
    cout<<index;
}
