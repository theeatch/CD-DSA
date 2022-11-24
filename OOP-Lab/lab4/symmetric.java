import java.util.Scanner;

class symmetric {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter the dimensions of matrix: ");
        int m = sc.nextInt(), sum = 0, i, j;
        int arr[][] = new int[m][m];
        int arr2[][] = new int[m][m];
        System.out.println("enter elements of the matrix: ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                int x = sc.nextInt();
                arr[i][j] = x;
                arr2[j][i] = x;
            }
        }
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                if (arr[i][j] != arr[j][i]) {
                    sum = -1;
                }
            }
        }
        if (sum != -1) {
            System.out.println("The matrix is symmetric ");
        } else {
            System.out.println("The matrix is not symmetric ");
        }
    }

}
