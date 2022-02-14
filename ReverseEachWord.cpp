#include <iostream>
using namespace std;
#include <cstring>

void reverseWord(char input[]){
    int n=strlen(input);

    // reversing the string completely

    int space=0;
    int index=0;
    for (index;index<n;index++){
        if (input[index]!=' ' && index!=n-1){
            space++;
        }

        else{
            if (index==n-1){
                index++;
                space++;
            }
            int b=index-space;
            int e=index-1;

            for (e;e>=b;e--){
                char temp2=input[b];
                input[b]=input[e];
                input[e]=temp2;
                b++;
            space=0;
            }

        }

    }
}


int main(){
    char input[100];
    cin.getline(input,100);

    reverseWord(input);
    cout<<input;

}
