import java.util.*;
public class MyClass {
    public static void main(String args[]) {
        int n=3;
        int[][] a={ {1,2,3},
                    {4,5,6},
                    {7,8,9}
                  };
        System.out.println("Matrix :");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) System.out.print(a[i][j]+" ");
            System.out.println();
        }
    
       System.out.println("\nMatrix Spiral Order :");
       int top=0,bottom=n-1;
       int left=0,right=n-1;
       
       while(true){
           for(int i=left;i<=right;i++) System.out.print(a[top][i]+" ");
           top++;
           if(top>bottom || left>right) break;
           
           for(int i=top;i<=bottom;i++) System.out.print(a[i][right]+" ");
           right--;
           if(top>bottom || left>right) break;
           
           for(int i=right;i>=left;i--) System.out.print(a[bottom][i]+" ");
           bottom--;
           if(top>bottom || left>right) break;
           
           for(int i=bottom;i>=top;i--) System.out.print(a[i][left]+" ");
           left++;
            if(top>bottom || left>right) break;
       }
    }
}
