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
    
        List< ArrayList<Integer> > list=new ArrayList< ArrayList<Integer> >();
        int listCount=0;
        for(int i=0;i<n;i++){
            list.add(new ArrayList<Integer>());
            int row=0;
            for(int j=i;j>=0;j--,row++){
                //System.out.print(a[j][row]+" ");
                list.get(listCount).add(a[j][row]);
            }
            listCount++;
            //System.out.println();
        }
        for(int i=1;i<m;i++){
            list.add(new ArrayList<Integer>());
            int col=n-1;
            for(int j=i;j<m && col>=0;j++,col--){
                 //System.out.print(a[col][j]+" ");
                 list.get(listCount).add(a[col][j]);
            }
            listCount++;
            //System.out.println();
        }
        System.out.println("\nMatrix Zig-Zag Order :");
        boolean isReverse=false;
        for(int i=list.size()-1;i>=0;i--){
            //System.out.println(list.get(i));
            List<Integer> l=list.get(i);
            if(isReverse){
                for(int j=l.size()-1;j>=0;j--) System.out.print(l.get(j)+" ");
                isReverse=false;
            } else {
                for(int j=0;j<l.size();j++) System.out.print(l.get(j)+" ");
                isReverse=true;
            }
        }
        
    }
}
