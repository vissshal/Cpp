#include <iostream>
using namespace std;

int divide(int input[],int s,int e){
    int count=0;
    for (int a=s+1;a<=e;a++){
        if (input[a]<=input[s]){
            count++;
        }
    }
    int p=(s+count);
    int temp=input[p];
    input[p]=input[s];
    input[s]=temp;

    int i=s;
    int j=e;
    while(i<p&& j>p){
        if (input[i]<=input[p]){
            i++;
        }
        else if(input[j]>input[p]){
            j--;
        }
        else{
            temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j--;
        }
    }
    return p;
}

void quicksort(int input[],int s,int e){
    if (s<e){
        int index=divide(input,s,e);
        quicksort(input,s,index-1);
        quicksort(input,index+1,e);
    }
}

int main(){
    int n;
    cin>>n;

    int input[50];
    for (int i=0;i<n;i++){
        cin>>input[i];
    }
    quicksort(input,0,n-1);

    for (int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }

}
