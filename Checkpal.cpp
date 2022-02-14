#include <iostream>
using namespace std;
#include <cstring>

bool palindrome(char a[],int s,int n){
    if (s>n){
        return true;
    }
    if (a[s]!=a[n]){
        return false;
    }
    bool check=palindrome(a,s+1,n-1);

    return check;
}

int main(){
    char a[30];
    cin>>a;
    int n=strlen(a);
    (palindrome(a,0,n-1)==1)?cout<<"true":cout<<"false";
}
