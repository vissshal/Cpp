#include <iostream>
using namespace std;

int add(int input[],int length,int sum){
    int x=0;

    int cou=0;
    while(x<length){
        int j=0;

        while(j<length){

            if (input[x]+input[j]==sum && x!=j){
                cou++;
            }
            j++;

        }

        x++;
    }
    return cou;
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
        int sum;
        cin>>sum;
        int c=0;
        c=add(input,length,sum);
        cout<<c/2<<endl;
    }

}
