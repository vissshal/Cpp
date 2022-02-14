#include <iostream>
using namespace std;

int main(){
    char a;
    cin>>a;
    int aa=a;
    cout<<"value of aa is "<<aa<<endl<<"Value of a is "<<a<<endl;
    if (aa >= 65 && aa<=90){
        cout<<1;
    }else if (aa >= 97 && aa<=122){
        cout<<0;
    }else{
        cout<<-1;
    }

}
