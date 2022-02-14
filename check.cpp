#include <iostream>
using namespace std;


bool found(int a[],int n,int f){
    if (n==0){
        return false;
    }
    if (a[0]==f){
        return true;
    }
    bool ffound=found(a+1,n-1,f);
    return ffound;
}

int main(){
    int n;
    cin>>n;

    int a[50];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int f;
    cin>>f;
    if(found(a,n,f)){
        cout<<"true";
    }
    else if(!found(a,n,f)){
        cout<<"false";
    }
}
