 /*
 Check if isSudoku
 Only checked Row and Matrix
 Column is pending but working nice
 */
#include <iostream>
#include<string.h>

using namespace std;
 /* Better Approach 
  public static boolean check(int arr[][]) {
        int i, j;
        int count[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        int count1[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        boolean b = true;
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {

                if (count[arr[j][i]] > i) {
                    b = false;
                    return b;
                }
                if (count1[arr[i][j]] > i) {
                    b = false;
                    return b;
                }
                count1[arr[i][j]]++;
                count[arr[j][i]]++;
            }

        }
        return b;
    }
 */
 int checkMatrix(int a[9][9],int ki,int kj){
     int sum=0;
     for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
             sum+=a[i+ki][j+kj];
         }
     }
     return sum==45;
 }
int checkSudoku(int a[9][9]){
   for(int i=0;i<9;i++){
       int sum=0;
       for(int j=0;j<9;j++){
           sum+=a[i][j];
       }
       if(sum!=45){
           return 0;
       }
   }
   return 1;
}
int main() {
  int a[9][9]={{8,3,5,4,1,6,9,2,7},
               {2,9,6,8,5,7,4,3,1},
               {4,1,7,2,9,3,6,5,8},
               {5,6,9,1,3,4,7,8,2},
               {1,2,3,6,7,8,5,4,9},
               {7,4,8,5,2,9,1,6,3},
               {6,5,2,7,8,1,3,9,4},
               {9,8,1,3,4,5,2,7,6},
               {3,7,4,9,6,2,8,1,5}};
	 
	 if(!checkSudoku(a)){
	     cout<<"No\n";
	     return 0;
	 }
	 bool matrix=true;
	 for(int i=0; i<9 && matrix; i+=3){
	     for(int j=0;j<9;j+=3){
	         if(!checkMatrix(a,i,j)){
	             matrix=false;
	             break;
	         }
	     }
	     if(! matrix) break;
	 }
	 if(matrix){
	     cout<<"Yes\n";
	 } else {
	     cout<<"No\n";
	 }
	return 0;
}
