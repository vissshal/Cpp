#include <iostream>
using namespace std;
#include <cstring>

bool check(string s,int index,char c,bool out){

    if (s[0]=='a' && index==0){
        out=check(s,index+1,s[0],out);
        return out;
    }
    else if(s[0]!='a' && index==0){
        return false;
    }
    if (c=='a' && index!=0){
        if(s[index]=='\0'){
            return true;
        }
        else if (s.substr(index,2)=="bb" || s[index]=='a'){
            out=check(s,index+1,s[index],out);
            return out;
        }

        else{
            return false;
        }
    }
    else if(c=='b' && index>0 ){
        if (s[index]=='b'){
            out=check(s,index+1,s[index],out);
            return out;
        }
        else if(s[index]=='a' && s[index-1]=='b'){
            out=check(s,index+1,s[index],out);
            return out;
        }
        else if(s[index-1]=='b' && s[index]=='\0'){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

int main(){
    string s;
    cin>>s;
    s[s.length()]='\0';
    int index=0;
    char c=s[0];
    bool out=true;
    string result=(check(s,index,c,out)==1)?"true":"false";
    cout<<result;
}
