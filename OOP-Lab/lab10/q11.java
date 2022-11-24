import java.util.Scanner;
class q11{
    public static void main(String args[]){
        try{
            int m=Integer.parseInt(args[0]);
            int n=Integer.parseInt(args[1]);
            if(m!=n){
                throw new Exception();
            }
            int a[][]=new int[m][n];
            Scanner sc= new Scanner(System.in);
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    a[i][j]= sc.nextInt();
                }
            }
            System.out.println("Got the square matrix");
            
        }
        catch(Exception e){
            System.out.println("Not a square matrix");
            return;
        }
    }
}