import java.util.*;
public class MyClass {
    public static void main(String args[]) {
        int m=9;
        int[] array={1, 2, 3, 6, 9, 8, 7, 4, 5};
        System.out.println("Array :");
        for(int i=0; i<m; i++)  System.out.print(array[i]+" ");
            System.out.println();
    
       System.out.println("\nMatrix Created from Spiral Array :");
       int n=(int)Math.sqrt(m);
       int top=0,bottom=n-1;
       int left=0,right=n-1;
       int index=0;
       int [][] a=new int[n][n];
       
       while(true){
           for(int i=left;i<=right;i++) a[top][i]=array[index++];
           top++;
           if(top>bottom || left>right) break;
           
           for(int i=top;i<=bottom;i++) a[i][right]=array[index++];
           right--;
           if(top>bottom || left>right) break;
           
           for(int i=right;i>=left;i--)  a[bottom][i]=array[index++];
           bottom--;
           if(top>bottom || left>right) break;
           
           for(int i=bottom;i>=top;i--) a[i][left]=array[index++];
           left++;
            if(top>bottom || left>right) break;
       }
       
       for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) System.out.print(a[i][j]+" ");
            System.out.println();
        }
    }
}
