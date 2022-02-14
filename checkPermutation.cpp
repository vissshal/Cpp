#include <iostream>
using namespace std;
#include <cstring>

bool Permut(char arr1[],char arr2[],int n1,int n2,int i){
    for (int j=0;j<n2;j++){
        if (arr1[i]==arr2[j]){
            arr2[j]=16;
            return true;
        }
    }
    return false;
}

int main(){
    char arr1[100];
    char arr2[100];

    cin>>arr1>>arr2;
    int n1=strlen(arr1);
    int n2=strlen(arr2);
    bool result;

    if (n1==n2){
            // For loop ke karan ek ek element k corresponding 'result' me store hota jaa rha...
            // Jaise hi koi false hoga.. wahi ruk jayega..break ki wajah se
            // Agar true hi raha to for loop k end hote hi TRUE print ho jayegii
        for (int i=0;i<n1;i++){
            result=Permut(arr1,arr2,n1,n2,i);
            if (!result){
                cout<<"false";
                break;
            }

        }
        if (result){
                cout<<"true";
        }
    }
    else{
        cout<<"false";
    }
}
