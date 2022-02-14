#include <iostream>
using namespace std;

bool isPal(char input[]){
    int n=0;
    for (int i=0;input[i]!='\0';i++){
        n++;
    }
    int i=0;

    for (int j=n-1;j>=i;j--){

        if (input[i]!=input[j]){
           return false;
            break;
        }
        i++;

    }
    return true;
}
int main(){
    char input[100];
    cin>>input;

    int result=isPal(input);
    if (result){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}
