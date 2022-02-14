#include <iostream>
using namespace std;

void removeD(char a[]){
    if (a[0]=='\0'){
        return ;
    }
    if (a[0]==a[1]){
        for (int i=1;a[i]!='\0';i++){
            a[i]=a[i+1];
        }
        removeD(a);
    }
    else{
        removeD(a+1);
    }
}

int main(){
    char input[50];
    cin>>input;

    removeD(input);
    cout<<input;
}
