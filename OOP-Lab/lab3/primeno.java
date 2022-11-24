
import java.util.Scanner;

class primeno {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int m, n;
        System.out.println("\nEnter two numbers: ");
        int count = 0;
        n = sc.nextInt();
        m = sc.nextInt();

        for (int i = n; i <= m; i++) {
            count = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    count++;
                }
            }
            if (count == 2) {
                System.out.println("\nThe number " + i + " is prime");
            }
        }

        sc.close();
    }

}