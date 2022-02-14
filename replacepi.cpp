#include <iostream>
using namespace std;
#include <cstring>

int star(char input[],int n,char output[]){
    if (n==0){
        output[0]=input[0];
        return 1;
    }
    int index=star(input,n-1,output);
    if (input[n-1]=='p' && input[n]=='i'){
        output[--index]='3';
        output[++index]='.';
        output[++index]='1';
        output[++index]='4';
        return index+1;
    }
    output[index]=input[n];
    return index+1;
}

int main(){
    char input[50];
    cin>>input;

    char output[50];
    int n=strlen(input);

    star(input,n,output);

    cout<<output;
}
