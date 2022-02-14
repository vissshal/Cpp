#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int input[100][100];
        int row,col;
        cin>>row>>col;
// TAKING INPUT FROM THE USER
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                cin>>input[i][j];
            }
        }
// PRINTING OUTPUT
        for (int j=0;j<col;j++){
// I is for keeping a record on total number of rows printed till now
            if (j%2==0){
                int c=0;
                for (int i=0;i<row;i++){
                    cout<<input[c][j]<<" ";
                    c++;
                }
            }
            else{
                int c=row-1;
                for (int i=0;i<row;i++){
                    cout<<input[c][j]<<" ";
                    c--;
                }
            }
        }
    cout<<endl;
    }

}
