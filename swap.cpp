#include <iostream>
using namespace std;

void rev(int actual[]){
    int i=0;
    int j=0;
    while(i<(5/2)){
        j=actual[i];
        actual[i]=actual[4-i];
        actual[4-i]=j;
        i++;
    }
}
int main(){

    int actual[5];
    for (int i=0;i<5;i++){
        cin>>actual[i];
    }
    rev(actual);
    for (int i=0;i<5;i++){
        cout<<actual[i]<<" ";
    }
}
