import java.util.*;
public class MyClass {
    public static void main(String args[]) {
        int n=3,m=5;
        int[][] a={ {1,2,3,10,11},
                    {4,5,6,12,13},
                    {7,8,9,14,15}
                  };
        System.out.println("Matrix :");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) System.out.print(a[i][j]+" ");
            System.out.println();
        }
        
        System.out.println("\nMatrix Diagonal print :");
        
        for(int i=0;i<n;i++){
            int row=0;
            for(int j=i;j>=0;j--,row++) System.out.print(a[j][row]+" ");
            System.out.println();
        }
        for(int i=1;i<m;i++){
            int col=n-1;
            for(int j=i;j<m && col>=0;j++,col--) System.out.print(a[col][j]+" ");
            System.out.println();     
            }
    }
}
    
