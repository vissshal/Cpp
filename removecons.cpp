#include <iostream>
using namespace std;
#include <cstring>

int main(){
    char input[100];
    cin>>input;

    int n=strlen(input);
    for (int i=1;input[i]!='\0';i++){
        if (input[i]==input[i-1]){
            for (int j=i;input[j]!='\0';j++){
               input[j]=input[j+1];
            }
        i--;
        }
    }
    cout<<input;
}
