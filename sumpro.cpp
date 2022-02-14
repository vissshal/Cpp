#include <iostream>
using  namespace std;

int main(){
    int a;
    int b;
    cin>>a>>b;
    int sum=0;
    int product=1;
    if (b==1){
        for (int i=1;i<=a;i++){
            sum=sum+i;
        }
        cout<<sum;
    }
    else if(b==2){
        for (int i=1;i<=a;i++){
            product=product*i;
        }
        cout<<product;
    }
    else{
        cout<<-1;
    }
}
