
import java.util.Scanner;

class Student {
    Scanner sc = new Scanner(System.in);
    int regno, age;
    String name;

    Student() {
        System.out.println("Enter the name of the student:");
        this.name = sc.nextLine();
        System.out.println("Enter the registration number of the student:");
        this.regno = sc.nextInt();
        System.out.println("Enter the age of the student:");
        this.age = sc.nextInt();
    }

    void disp() {
        System.out.println(this.name + " - " + this.regno + " - " + this.age
                + "\nThe semester and fees are:- ");
    }
}

class UG extends Student {
    int semester;
    double fees;

    UG() {
        super();
        System.out.println("Enter the semester:");
        this.semester = sc.nextInt();
        System.out.println("Enter the fees:");
        this.fees = sc.nextDouble();
    }

    void display() {
        disp();
        System.out.println(semester);
        System.out.println(fees);
    }
}

class PG extends Student {
    int semester;
    double fees;

    PG() {
        super();
        System.out.println("Enter the semester:");
        this.semester = sc.nextInt();
        System.out.println("Enter the fees:");
        this.fees = sc.nextDouble();
    }

    void display() {
        disp();
        System.out.println(semester);
        System.out.println(fees);
    }
}

class main_class2 {
    public static void main(String args[]) {
        System.out.println("For the UG student");
        
        UG ug = new UG();
        System.out.println("\nFor the PG student");
        PG pg = new PG();
        System.out.println("\nDetails for UG student are: ");
        ug.display();
        System.out.println("\nDetails for PG student are: ");
        pg.display();
    }
}