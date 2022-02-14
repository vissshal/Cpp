#include <iostream>
using namespace std;

int main(){
    int x=10;
    int y=20;
    if (++y>20 && x++>10){
// ++y ka mtlb ye run hote hi y=21 ho gye ...but x++ ka mtlb for this line the value of x is still 10 only but after this line it changes to 11
// && me agar 1st condition hi false ho jaye to next condition run v nhi hoTa h... ( as happened in below example where a is still 20
        cout<<"if"<<endl;
    }
    else{
        cout<<"else"<<endl;
    }
    cout<<x<<endl<<y<<endl;
    int z=10;
    int a=20;
    if ( z++>10 && ++a>20 ){
        cout<<"if"<<endl;
    }
    else{
        cout<<"else"<<endl;
    }
    cout<<z<<endl<<a;
}
