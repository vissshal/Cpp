#include <iostream>
using namespace std;
#include <string.h>

int key(int n,string *out,string keypad[10],int index){

    if (n<=1){
        return index+1;
    }
    int r=n%10;
    n=n/10;

    int k=(keypad[r]).length();
    if (k==0 && n>0){
        k++;
    }
    for (int j=0;j<k;j++){
        out[index]=keypad[r][j]+out[index];

        int x=n;
        int a=0,d=1;
        while(x>0){
            a=x%10;
            if (a>1){
                x=x/10;
                d=d*keypad[a].length();
            }
            else{
                x=x/10;
            }
        }
        if (d>1){
            for (int b=1;d>1;d--){
                out[index+b]=out[index];
                b++;
            }
        }

        index=key(n,out,keypad,index);


}

    return index;

}

int main(){

    int n;
    cin>>n;

    string keypad[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    string out[100]={};
    int s=key(n,out,keypad,0);

    for (int i=0;i<s;i++){
        cout<<out[i]<<endl;
    }

}
