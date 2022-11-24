import java.util.Scanner;

class patterneach {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int[] arr = {1,2,3,4,5};
        
        for (int s : arr) {
            for (int j = 1; j <= s; j++) {
                System.out.print(s + "  ");
            }
            System.out.println("\n");
        }
    }
}
