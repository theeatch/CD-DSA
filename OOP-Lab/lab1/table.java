class table {/* Write a Java program to print table of number entered by user */
    public static void main(String args[]) {
        int n;
        n = Integer.parseInt(args[0]);
        System.out.println("the table of: " + n);
        for (int i = 0; i <= 10; i++) {
            System.out.println(n + " X " + i + " = " + (n * i));
        }
    }
}
