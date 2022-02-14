#include <iostream>
using namespace std;

string update(char input[],char f,char r){
    int n=0;
    for (int i=0;input[i]!='\0';i++){
            if (input[i]==f){
                input[i]=r;
        }
    }
    return input;
}

int main(){
    char input[100];
    cin>>input;

    char f,r;
    cin>>f>>r;
    cout<<update(input,f,r);
}

