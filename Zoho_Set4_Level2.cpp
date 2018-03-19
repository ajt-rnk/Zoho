/*
Q1: x x x
    x 0 x
    x x x
*/
/*
#include <iostream>
#define p 
using namespace std;

int main() {
    int n,m;
    cin>>m>>n;
    char s[n+1][m+1];
    int top=0,bottom=n-1;
    int left=0,right=m-1;
    while(true){
        char c;
        if(top%2==0) c='X';
        else c='O';
        
        for(int i=left;i<=right;i++) s[top][i]=c;
        top++;
        if(top>bottom || left>right) break;
        
        for(int i=top;i<=bottom;i++) s[i][right]=c;
        right--;
        if(top>bottom || left>right) break;
        
        for(int i=right;i>=left;i--) s[bottom][i]=c;
        bottom--;
        if(top>bottom || left>right) break;
        
        for(int i=bottom;i>=top;i--) s[i][left]=c;
        left++;
        if(top>bottom || left>right) break;
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
*/
