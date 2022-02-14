#include <iostream>
using namespace std;

void replaceF(char a[],char f,char r){
    if (a[0]=='\0'){
        return ;
    }
    if (a[0]==f){
        a[0]=r;
    }
    replaceF(a+1,f,r);

}

int main(){
    char a[50];
    cin>>a;

    char f,r;
    cin>>f>>r;

    replaceF(a,f,r);
    cout<<a;
}
