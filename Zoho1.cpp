/*
Given string WELCOMETOZOHOCORPORATION  storeit into 2d array with 5 columns
than Search a given string in 2d array 
Move may be Top to Bottom AND Left to Right
*/


#include <iostream>
#include<string.h>

using namespace std;
static int endi,endj;
int check(char s[5][6],int i,int j,int count,char *t){
    if(i>=5 || j>=5 || s[i][j]!=t[count]){
        return 0;
    }
    if(count==strlen(t)-1 ){
        endi=i;
        endj=j;
        return 1;
    }
    
    return (check(s,i+1,j,count+1,t) || check(s,i,j+1,count+1,t));
}

int main() {
	char s[5][6]={"WELCO","METOZ","OHOCO","RPORA","TION "};
	char t[]="too";
	for(int i=0;i<5;i++){
	    for(int j=0;j<5;j++){
	        if(s[i][j]==t[0]){
	            if(check(s,i,j,0,t)){
	                cout<<"Start : "<<i<<" "<<j<<endl;
	                cout<<"End : "<<endi<<" "<<endj<<endl;
	            }
	        }
	    }
	}
	
	return 0;
}
