
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int l=0;
        int j=n-i;
        int m=i;
        while(j>0){
            cout<<" ";
            j--;
            l++;

        }
        while (l<n){

            cout<<m ;
            m++;
            l++;

        }
        while(m-1>i){
            cout<<m-2;
            m--;
        }

        cout<<endl;
        i++;
    }
}
