class fact {/* Write a Java programs to print factorial of a given no. */
    public static void main(String args[]) {
        int n, i;
        int fact = 1;
        n = Integer.parseInt(args[0]);
        for (i = n; i > 0; i--) {
            fact = fact * i;
        }
        System.out.println("the factorial of the number: " + n + " is: " + fact);
    }

}
