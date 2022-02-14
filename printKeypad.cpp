#include <iostream>
using namespace std;


void key(int n,string output,string keypad[10]){

    if (n<=1){
        cout<<output<<endl;
        return ;
    }
    int r=n%10;
    n=n/10;

    int k=(keypad[r]).length();
    // since, for k==0 i.e. r=0/1, for loop cannot run.
    if (k==0 && n>0){
        k++;
    }

    for (int j=0;j<k;j++){
       // output[index]=keypad[r][j];

        key(n,keypad[r][j]+output,keypad);
    }
}

int main(){

    int n;
    cin>>n;
    /*
    int a=n,d=0;
    for (a;a>0;d++){
        a=a/10;
    }
    */
    string keypad[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

  //  char *out=new char[d];
    string output="";
    key(n,output,keypad);
}
