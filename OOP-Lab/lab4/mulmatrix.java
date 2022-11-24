import java.util.Scanner;

class mulmatrix {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter the dimensions of first matrix : ");
        int m = sc.nextInt(), n = sc.nextInt(), i, j, k;

        int arr[][] = new int[m][n];
        System.out.print("enter the dimensions of second matrix : ");
        int t = sc.nextInt(), l = sc.nextInt();
        if (t != n) {
            System.out.println(
                    "the amount of rows of first matrix should be equal to rows of second matrix, please try again...");
        } else {
            int arr2[][] = new int[n][l];
            System.out.println("enter elements of first matrix: ");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    arr[i][j] = sc.nextInt();
                }
            }
            System.out.println("enter elements of second matrix: ");
            for (i = 0; i < t; i++) {
                for (j = 0; j < l; j++) {
                    arr2[i][j] = sc.nextInt();
                }
            }
            int arr3[][] = new int[m][l];
            for (i = 0; i < m; i++) {
                for (j = 0; j < l; j++) {
                    arr3[i][j] = 0;
                    for (k = 0; k < t; k++) {
                        arr3[i][j] += arr[i][k] * arr2[k][j];
                    }
                }

            }
            System.out.println("New matrix after multiplying: ");
            for (i = 0; i < m; i++) {
                for (j = 0; j < l; j++) {
                    System.out.print(arr3[i][j] + " ");
                }
                System.out.print("\n");
            }

        }

    }

}
