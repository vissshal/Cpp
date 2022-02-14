#include <iostream>
using namespace std;

int main(){
    int i=0;
    while(i<5){
        if (i==2){
            i++;
            continue;
        }
        i++;
        cout<<i;
    }
}
