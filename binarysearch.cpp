#include <iostream>
using namespace std;

int Search(int input[],int length,int check){
    int start=0;
    int end=length-1;
    while(end>=start){
        int mid=(start+end)/2;

        if (check==input[mid]){
            return mid;
        }
        else if (check>input[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int length;
    cin>>length;
    int input[100];
        for (int x=0;x<length;x++){
            cin>>input[x];
    }
    int test;
    cin>>test;
    for (int i=0;i<test;i++){
            int check;
            cin>>check;
            cout<<Search(input,length,check)<<endl;
    }
}

