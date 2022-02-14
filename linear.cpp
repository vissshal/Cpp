#include <iostream>
using namespace std;

bool testIndex(int input[],int length,int check){
    int i=0;
    while(i<length){
        if (input[i]==check){
            cout<<i;
            return true;
        }
        i++;
    }
    return false;
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
            int check;
            cin>>check;
            int c=testIndex(input,length,check);
            if (c==0){
                    cout<<-1;

            }
    }
}
