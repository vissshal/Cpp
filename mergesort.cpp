#include <iostream>
using namespace std;

void merge(int input[],int s,int mid,int e){
    int temp[e-s+1];

    int i=s;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=e){
      if (input[i]<=input[j]){
        temp[k]=input[i];
        i++;
        k++;
      }
      else{
        temp[k]=input[j];
        j++;
        k++;
      }
    }
    // Remaining elements ko  array me store krlo

    while (i<=mid){
      temp[k]=input[i];
      k++;
      i++;
    }

    while (j<=e){
      temp[k]=input[j];
      k++;
      j++;
    }
    // Array me saath me merge krke store v krlo jo ( s se lekar e tak ) elements ko divide kia h unko..

    for (int a=s;a<=e;a++){
        input[a]=temp[a-s];
    }
}


void mergesort(int input[],int s,int e){
    if (s<e){

        int mid=(s+e) / 2;

        mergesort(input,s,mid);
        mergesort(input,mid+1,e);
        merge(input,s,mid,e);
    }
}

int main(){
    int n;
    cin>>n;

    int input[50];
    for (int i=0;i<n;i++){
        cin>>input[i];
    }
    mergesort(input,0,n-1);

    for (int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }

}
