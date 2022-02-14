#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i=2;i<=n;i++ ){
        int d=2;
        bool divided=false;
        for (int j=2;j<=n/2;j++){
            if (i>j && i%j==0){
                divided = true;
                break;
                // break hote hi wo 2nd wale for loop ko run hi nhi hone deGa
            }
            d++;
        }
        if (!divided){
            cout<<i<<endl;
        }
    }
}
