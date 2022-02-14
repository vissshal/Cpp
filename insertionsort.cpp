#include <iostream>
using namespace std;

void insertionsort(int input[],int length){
    for (int i=1;i<length;i++){
        int c=input[i];
        int j=i-1;
        for (j;j>=0;j--){
            if (c<input[j]){
                input[j+1]=input[j];
            }
            else{
                break;
            }
        }
        input[j+1]=c;
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

            insertionsort(input,length);

            for (int x=0;x<length;x++){
                cout<<input[x]<<" ";
            }
    cout<<endl;
    }

}
