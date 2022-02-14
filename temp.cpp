#include <iostream>
using namespace std;

int celsius(int lower,int higher, int gap){
    for (int i=lower;i<=higher;i=i+gap){
        cout<<i<<"\t"<<(5*(i-32)/9)<<endl;
    }
}
int main(){
    int lower,higher,gap;
    cin>>lower>>higher>>gap;
    celsius(lower,higher,gap);

}
