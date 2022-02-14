#include <iostream>
using namespace std;
#include <cstring>

int main(){
    char input[100];
    cin>>input;

    char w;
    cin>>w;

        for (int i=0;input[i]!='\0';i++){
        if (input[i]==w){
            for (int j=i;input[j]!='\0';j++){
               input[j]=input[j+1];
            }
        i--;
        }
    }
    cout<<input;
}

