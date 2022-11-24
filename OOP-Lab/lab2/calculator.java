import java.util.Scanner;

class calculator {
    public static void main(String args[]) {
        char c;
        do {
            Scanner sc = new Scanner(System.in);
            float a, b;
            char op;
            System.out.println("enter the first integer: ");
            a = sc.nextInt();

            System.out.println("enter the second integer: ");
            b = sc.nextInt();

            System.out.println("enter the operator to use: \n+\n-\n*\n/");
            op = sc.next().charAt(0);

            switch (op) {
                case '+':
                    System.out.println("the result of: " + a + " + " + b + " = " + (a + b));
                    break;
                case '-':
                    System.out.println("the result of: " + a + " - " + b + " = " + (a - b));
                    break;
                case '*':
                    System.out.println("the result of: " + a + " * " + b + " = " + (a * b));
                    break;
                case '/':
                    System.out.println("the result of: " + a + " / " + b + " = " + (a / b));
                    break;
                default:
                    System.out.println("try again");

            }
            System.out.println("do you want to continue?: y or n ");
            c = sc.next().charAt(0);
        } while (c == 'y');
        System.out.println("ending program ... \n");
    }
}
