#include <iostream>
using namespace std;
#include <cstring>

int convert(char input[],int n,int p){
    if (n==0){
        return 0;
    }

    int number=convert(input,n-1,p*10);
    return (number+(input[n-1]-48)*p);
}

int main(){
    char input[50];
    cin>>input;

    int n=strlen(input);

    int p=1;
    cout<<convert(input,n,p);
}
