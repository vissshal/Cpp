#include <iostream>
#include<math.h>
using  namespace std;

int main(){
    int n;
    cin>>n;
    int digits=1;
    int rev=0;
    int number=n;
    int rem;
    /*
    if (n%10==0 && n%100!=0){
        rev++;
    }
    */
// comment wale code se CODEBLOCKS pe sahi result aa rha but baki jagah galat aur jo av actual code h usse except codeblocks everywhere sahi output aa rha h
    while (n/10!=0){
        n/=10;
        digits++;
    }

    while (digits>=0){
        rem=number%10;
        number/=10;
        rev+=rem*pow(10,digits-1);
        digits--;
    }
    cout<<rev;
}
