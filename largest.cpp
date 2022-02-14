#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int b[100];
    for (int i=0;i<n;i++){
        cin>>b[i];
    }
    int highest=INT_MIN;
    // INT_MIN = -2^31 is the smallest integral value possible in cpp
    for (int i=1;i<n;i++){
        if (b[i]>highest){
            highest=b[i];
        }
    }
    cout<<"Maximum value is "<<highest;
}
