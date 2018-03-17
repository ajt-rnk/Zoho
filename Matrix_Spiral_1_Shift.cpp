#include <iostream>
using namespace std;

int main() {
int n=3;
        int a[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}
                    };
    cout<<"Matrix :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
   
    int top=0,bottom=n-1;
    int left=0,right=n-1;
    int iLast,jLast,got=0;
    int t;
    while(1){
        for(int i=left;i<=right;i++){
            //cout<<a[top][i]<<" ";
            if(!got){
                t=a[top][i];
                iLast=top;
                jLast=i;
                got=1;
            } else {
                a[iLast][jLast]=a[top][i];
                iLast=top;
                jLast=i;
            }
        }
        top++;
        if(top>bottom || left>right) break;
        
        for(int i=top;i<=bottom;i++){
            //cout<<a[i][right]<<" ";
            a[iLast][jLast]=a[i][right];
            iLast=i;
            jLast=right;
        }
        right--;
        if(top>bottom || left>right) break;
        
        for(int i=right;i>=left;i--){
            //cout<<a[bottom][i]<<" ";
            a[iLast][jLast]=a[bottom][i];
            iLast=bottom;
            jLast=i;
        }
        bottom--;
        if(top>bottom || left>right) break;
        
        for(int i=bottom;i>=top;i--){
            //cout<<a[i][left]<<" ";
            a[iLast][jLast]=a[i][left];
            iLast=i;
            jLast=left;
        }
        left++;
        if(top>bottom || left>right) break;
    }
    a[iLast][jLast]=t;
     cout<<"\nMatrix after one rotation in Spiral :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}
