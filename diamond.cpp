
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    // row no.
    int j=n/2;
    // no. of spaces on 1st Line
    while(i<=((n+1)/2)){
        int jj=j+1-i;
        // jj = no. of spaces on each line
        int k=2*i-1;
        // k= no. of * on that row
        while (jj>0){
            cout<<" ";
            jj--;
        }
        while(k>0){
            cout<<"*";
            k--;
        }
        cout<<endl;
        i++;

    }
    int y=i-2;
    int z=1;
        while(y>0){
            int k=2*y-1;
            int zz=z;
            while (zz>0){
                cout<<" ";
                zz--;
            }
            z++;
            while(k>0){
                cout<<"*";
                k--;
            }
            cout<<endl;
            y--;
        }

}
