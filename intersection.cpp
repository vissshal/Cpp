#include <iostream>
using namespace std;

bool common(int input1[],int input2[],int length2,int x){
        int j=0;
        while(j<length2){
            if (input1[x]==input2[j]){
                input2[j]=INT_MIN;
                return true;
            }
            j++;
        }
    return false;
}

int main(){
    int test;
    cin>>test;

    for (int i=0;i<test;i++){
        int length1;
        cin>>length1;
        int input1[100];
            for (int x=0;x<length1;x++){
                cin>>input1[x];
            }
        int length2;
        cin>>length2;
        int input2[100];
            for (int x=0;x<length2;x++){
                cin>>input2[x];
            }


            for (int x=0;x<length1;x++){
                int c=common(input1,input2,length2,x);
                if (c==1){
                    cout<<input1[x]<<" ";
                }
            }
            cout<<endl;
    }

}
