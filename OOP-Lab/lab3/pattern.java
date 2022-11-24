import java.util.Scanner;

class pattern {
        public static void main(String args[]){
            int n;
            System.out.println("enter the number of rows: ");
            Scanner sc = new Scanner(System.in);
            n=sc.nextInt();
            for(int i=1;i<=n;i++){
                for(int j=0;j<i;j++){
                    System.out.println(i);
                }
                System.out.println("\n");
            }    
        }
}
