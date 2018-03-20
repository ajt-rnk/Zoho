

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
/*
Q : is Rectangle if it is find sum of nelemnts in rectangle

import java.io.*;
import java.util.*;
public class MyClass {
    static int m,n,sum;
    public static boolean isRectangle(int x1,int y1,int x2,int y2,int matrix[][]){
      if(x1==x2 || (y1==0 && y2==m-1)){
          for(int i=x1;i<=x2;i++){
              for(int j=y1;j<=y2;j++){
                  sum+=matrix[i][j];
              }
          }
      return true;
      }
      return false;
    }
    public static void main(String args[]) throws Exception{
       Scanner sc=new Scanner(System.in);
       n=sc.nextInt();
       m=sc.nextInt();
       sum=0;
       int[][] matrix={{1, 2, 3, 4, 6}, {5, 3, 8, 1, 2},
                       {4, 6, 7, 5, 5}, {2, 4, 8, 9, 4}};
       if(isRectangle(2,0,3,4,matrix)) System.out.println(sum);
       /*for(int i=0;i<n;i++){
           for(int j=0;j<m;j++) System.out.print(matrix[i][j]+" ");
           System.out.println();
       }*/
    }
}
*/
