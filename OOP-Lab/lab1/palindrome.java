class palindrome { /* Write a program to check whether a number is palindrome or not */
    public static void main(String args[]) {
        int no, rev = 0;
        no = Integer.parseInt(args[0]);
        int n = no;
        for (int i =0; no > 0; no /= 10) {
            rev = rev * 10 + no % 10;
            i++;
        }
        if (rev == n) {
            System.out.println("number is palindrome.");
        } else {
            System.out.println("number is not  palindrome");
        }

    }
}