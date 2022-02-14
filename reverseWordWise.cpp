#include <iostream>
using namespace std;

void reverseWord(char input[]){
    // counting length of string
    int n=0;
    for (int i=0;input[i]!='\0';i++){
        n++;
    }
    // reversing the string completely
    int i=0;
    for (int j=n-1;j>=i;j--){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
    }
    // reversing Word Wise
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
