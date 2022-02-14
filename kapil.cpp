#include <iostream>
using  namespace std;

int main(){
    int n;
    cin>>n;
    int k=n;

    if (k==n){
        int z=0;
        while(z<k){
            char x = 'a'+z;
            cout<<x;
            z++;
        }
        if (z==k){
            z--;
            while (z>0){
                char x = 'a'+z-1;
                cout<<x;
                z--;
            }
        }


    }
    cout<<endl;
    int j=2;
    int i=n-1;
    while(i>0){
        int z=0;
        int spaces=2*(j-1)-1;
        while(z<i){
            char x = 'a'+z;
            cout<<x;
            z++;

        }
        if (i!=n){
            while (spaces>0){
                cout<<" ";
                spaces--;
            }

        }
        if (z==i){
            while (z>0){
                char x = 'a'+z-1;
                cout<<x;
                z--;
            }
        }
        cout<<endl;
        j++;
        i--;
    }

}
