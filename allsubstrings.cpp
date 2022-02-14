#include <iostream>
using namespace std;
#include <cstring>

void substrings(char input[]){
    int n=strlen(input);


    for (int j=1;j<=n;j++){
        for (int k=1;k<=n;k++){
            char output[100]="a";
            strncpy(output,input,k);
            cout<<output<<endl;
        }
        for (int i=0;i<n;i++){
            char temp=input[i];
            input[i]=input[i+1];
            input[i+1]=temp;
        }
        n=strlen(input);
        j--;
        // j-- isliye else jaise hi n ki value kam hote jayegi for loop run nhi krega
    }
}

int main(){
    char input[100];
    cin>>input;;


    substrings(input);
}
