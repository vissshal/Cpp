#include <iostream>

using  namespace std;

int main(){
    char c;
    c=cin.get();
    int chr=0;
    int digits=0;
    int space=0;
    while (c!='$'){
        int d = c;
        if (d>47 && d<58){
            digits++;
        }
        else if(d<123 && d>96){
            chr++;
        }
        else if(d==9 || d==32 || d==10){
            space++;
        }

        c=cin.get();
    }
    cout<<chr<<' '<<digits<<' '<<space;
}
