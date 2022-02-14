#include <iostream>
using namespace std;
#include <cstring>

int main(){
    char input[100];
    cin>>input;
    int n=strlen(input);
    int c=1;
    int i=1;
    for (i;input[i]!='\0';i++){

        if (input[i]==input[i-1]){
            c++;
            if (c>2){
                for (int j=i;input[j]!='\0';j++){
                    input[j]=input[j+1];
                }
                i--;
            }
        }
        else if(c>1 && input[i]!=input[i-1]){
            char a;
            a=48+c;
            input[i-1]=a;
            c=1;
        }
    }
    if (c>1 && input[i]=='\0'){
            char a;
            a=48+c;
            input[i-1]=a;
            c=1;
        }
    cout<<input;
}
