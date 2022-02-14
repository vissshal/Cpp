#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int input[100][100];
        int row,col;
        cin>>row>>col;
        int rowSum[100];
        int rowMax=INT_MIN;
        int rowNo=0;
        int colSum[100]={0};
        int colMax=INT_MIN;
        int colNo=0;
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                cin>>input[i][j];
                int current=input[i][j];
                colSum[j]+=current;
                rowSum[i]+=current;
            }
        }
        for (int i=0;i<row;i++){
            if(rowSum[i]>rowMax){
                rowMax=rowSum[i];
                rowNo=i;
            }
        }
        for (int i=0;i<col;i++){
            if(colSum[i]>colMax){
                colMax=colSum[i];
                colNo=i;
            }
        }
        if (colMax>rowMax){
            cout<<"column "<<colNo<<" "<<colMax<<endl;
        }
        else{
            cout<<"row "<<rowNo<<" "<<rowMax<<endl;
        }
        cout<<endl;
    }
}
