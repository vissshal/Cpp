#include <iostream>
using namespace std;

void bubblesort(int input[],int length){
    for (int i=length-1;i>0;i--){
        for (int j=1;j<length;j++){
            if(input[j-1]>input[j]){
                int temp=input[j-1];
                input[j-1]=input[j];
                input[j]=temp;
            }
        }
    }
}
int main(){
    int test;
    cin>>test;

    for (int i=0;i<test;i++){
        int length;
        cin>>length;
        int input[100];
            for (int x=0;x<length;x++){
                cin>>input[x];
            }

            bubblesort(input,length);

            for (int x=0;x<length;x++){
                cout<<input[x]<<" ";

            }
    }
    cout<<endl;
}
