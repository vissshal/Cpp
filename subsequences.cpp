#include <iostream>
using namespace std;

int subsequence(string a,string *out){
    if (a.empty()){
        out[0]="";
        return 1;
    }
    string b=a.substr(1);
    int length=subsequence(b,out);

    for (int i=0;i<length;i++){
        out[i+length]=a[0]+out[i];
    }
    return 2*length;
}

int main(){
    string a;
    cin>>a;

    string out[50];

    int count=subsequence(a,out);
    for (int i=0;i<count;i++){
        cout<<out[i]<<endl;
    }
}
