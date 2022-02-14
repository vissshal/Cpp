#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int x=0;x<t;x++){
        int input[100][100];
        int row,col;
        cin>>row>>col;

        for (int y=0;y<row;y++){
            for (int z=0;z<col;z++){
                cin>>input[y][z];
            }
        }

        int rs=0;
        int re=row-1;
        int cs=0;
        int ce=col-1;
        int N=1;
        int i=cs;
        for (i;N<=(row*col);rs++){
                int j;
            // First ROW
            for (j=cs;j<=ce  && N<=(row*col);j++){
                cout<<input[i][j]<<" ";
                N++;
            }
            i++;
            j--;
            // Last column
            for (i;i<=re && N<=(row*col);i++){
                cout<<input[i][j]<<" ";
                N++;
            }
            i--;
            j--;
            // Last Row
            for (j;j>=cs && N<=(row*col);j--){
                cout<<input[i][j]<<" ";
                N++;
            }
            j++;
            i--;
            // First Column
            for (i;i>rs && N<=(row*col);i--){
                cout<<input[i][j]<<" ";
                N++;
            }
            i++;
            cs++;
            ce--;
            re--;

        }
    cout<<endl;
    }

}
