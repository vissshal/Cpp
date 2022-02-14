#include <iostream>
using namespace std;

int main(){
    int input[100][100];
    int row,col;
    cin>>row>>col;
    int sum[100];
    int sumR[100];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin>>input[i][j];
            sum[j]+=input[i][j];
            sumR[i]+=input[i][j];
        }
    }
    for (int i=0;i<col;i++){
        cout<<sum[i]<<" ";
    }
    for (int i=0;i<row;i++){
        cout<<sumR[i]<<" ";
    }

}
