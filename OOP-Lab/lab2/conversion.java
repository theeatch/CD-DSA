import java.util.Scanner;

class conversion {
    public static void main(String args[]){
        int i1;
        double d1;
        char c1;

        Scanner sc=new Scanner(System.in);
        System.out.println("Enter an int");
        i1=sc.nextInt();
        System.out.println("Enter a double");
        d1=sc.nextDouble();
        System.out.println("Enter a char");
        c1=sc.next().charAt(0);

        byte b1=(byte)i1;

        int c2=c1;

        byte b2=(byte)d1;

        int i2=(int)d1;
        System.out.println("int to byte: "+b1+"\nchar to int: "+c2+"\ndouble to byte: "+b2+ "\ndouble to int: "+i2);
    }
}
