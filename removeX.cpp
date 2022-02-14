#include <iostream>
using namespace std;
#include <cstring>

int removeX(char input[],int n,char output[]){
    if (n==0){
        return 0;
    }
    int index=removeX(input,n-1,output);
    if (input[n-1]!='x'){
        output[index]=input[n-1];
        return ++index;
    }
    return index;
}
int main(){
    char input[50];
    cin>>input;
    char output[50]={};
    int n=strlen(input);
    removeX(input,n,output);
    cout<<output;
}
