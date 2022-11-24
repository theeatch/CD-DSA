import java.util.Scanner;
import java.lang.Math;

class armstrong {
    public static void main(String args[]) {
        int n, count = 0;
        System.out.println("enter the number of check: ");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int no = n, sum = 0, n1 = n;
        for (int i = 0; n > 0; i++) {
            count++;
            n /= 10;
        }
        for (int i = 0; no > 0; i++) {
            sum += Math.pow((no % 10), count);
            no /= 10;
        }
        if (sum == n1) {
            System.out.println("number is armstrong number");
        } else {
            System.out.println("number is not armstrong number");
        }

    }
}
