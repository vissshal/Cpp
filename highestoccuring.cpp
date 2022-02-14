#include <iostream>
using namespace std;
#include <cstring>

int main(){
    char input[100];
    cin>>input;
    int n=strlen(input);
    int ftable[256]={0};

    for (int i=0;i<n;i++){
        int c=input[i];
        ftable[c]++;
    }

    char highest=input[0];
    int ASCII=highest;
    int f=ftable[ASCII];

    for (int i=1;i<n;i++){
        int c=input[i];
        if (ftable[c]>f){
            highest=input[i];
            f=ftable[c];
        }
    }
    cout<<highest;

}
