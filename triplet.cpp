#include <iostream>
using namespace std;

int add(int input[],int length,int sum){
    int x=0;

    int cou=0;
    while(x<length){
        int j=0;
        while(j<length){
                int k=0;
                while(k<length){
                    if (input[x]+input[j]+input[k]==sum && x!=j && x!=k && j!=k){
                        cou++;
                    }
                    k++;
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
        cout<<c/6<<endl;
        // DIVIDE BY 6 ISLIYE KRENGE QKI EK TRIPLET KO AAPAS ME SAJANE K TOTAL 3!=6 WAYS HOTE H
    }

}

