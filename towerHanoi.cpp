#include <iostream>
using namespace std;
void hanoi(int disks,char s,char d,char a){

    if (disks==1){
        cout<<s<<" "<<d<<endl;
        return ;
    }

    hanoi(disks-1,s,a,d);

    cout<<s<<" "<<d<<endl;
    hanoi(disks-1,a,d,s);

// 2 discs ke lie code likh ke dekho .. uske bd automatically aa jayega
// Actually first recursion call krte time har baar a and d ki value interchange ho rahi h..
// so better hoga agar 2 disks k lie code likh le..aur frr adjust krne ki try kre !!
}

int main(){
    int disks;
    cin>>disks;
    char s='a';
    char a='b';
    char d='c';
    hanoi(disks,s,d,a);
}
