#include <iostream>
using namespace std;

bool unique(int input[],int length,int x){
        int j=0;
        while(j<length){
            if (input[x]==input[j] and x!=j){
                return false;
            }
            j++;
        }
    return true;
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
            for (int x=0;x<length;x++){
                int c=unique(input,length,x);
                if (c==1){
                    cout<<input[x]<<endl;
                    break;

                }
            }
    }
}
