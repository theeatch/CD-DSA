import java.util.Scanner;
class diagsum {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.print("enter the dimensions of matrix: ");
        int m=sc.nextInt(),sum=0,i,j;
        int arr[][]= new int[m][m];
        System.out.println("enter elements of the matrix: ");
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        sc.close();
        System.out.println("the diagnol elements of matrix are: ");
        for(i=0;i<m;i++){
            System.out.println(arr[i][i]+" ");
            sum+=arr[i][i];
        }
        System.out.print("sum of the diagnol elements is: "+sum);
    }
    
}