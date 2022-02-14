#include <iostream>
using namespace std;

void trim(char input[]){
    int n=0;
    for (int i=0;input[i]!='\0';i++){
        n++;
    }
    for (int i=0;i<n;i++){
        if (input[i]==' '){
            int j=i+1;
            while (input[j]==' '){
                j++;
            }
            input[i]=input[j];
            input[j]=' ';
            if (input[i]=='\0'){
                break;
            }
        }
    }
}

int main(){
    char input[100];
    cin.getline(input,100);

    trim(input);
    cout<<input;

}
