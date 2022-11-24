class bitwise {
    public static void main(String args[]) {
        int n;
        n = Integer.parseInt(args[0]);
        int a = n >> 1;
        int b = n << 1;

        System.out.println("n/2 bitwise is: " + a + "\nn*2 bitwise is: " + b);
    }
}
