#include <iostream>
using namespace std;

void removeX(char a[]){
    if (a[0]=='\0'){
        return ;
    }
    if (a[0]!='x'){
        removeX(a+1);
    }
    else{
        for (int i=0;a[i]!='\0';i++){
            a[i]=a[i+1];
        }
        removeX(a);
    }

}

int main(){
    char a[50];
    cin>>a;

    removeX(a);
    cout<<a;
}
