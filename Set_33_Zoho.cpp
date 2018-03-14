

/*
Q:3 Delete Palindromes from sentence

#include <iostream>
#include<string.h>

using namespace std;
static int n=-1;
int check(string s,int index){
    int i;
    for( i=index+1;i<s.length(); i++){
        if(s[i]==' ' || i-1==s.length()){
            break;
        }
    }
    int last=i-1;n=i;
    while(index<last){
        if(s[index]!=s[last]){
            return 0;
        }
        index++;
        last--;
    }
    return 1;
}

int main() {
string s="hari pap speaks sd malayalam";
for(int i=0;i<s.length(); i++){
    if(i==0 || s[i-1]==' '){
        if(check(s,i)){
            i=n;
        } else cout<<s[i];
    } else cout<<s[i];
}
}
*/
