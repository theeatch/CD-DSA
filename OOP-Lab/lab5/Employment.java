import java.util.Scanner;

class Employee {
    String emp_name, city;
    double BS;
    double DA, HRA;
    double total;

    void getdata() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of employee, city, Basic Salary, DA and HRA: ");
        emp_name = sc.nextLine();
        city = sc.nextLine();
        BS = sc.nextDouble();
        DA = sc.nextDouble();
        HRA = sc.nextDouble();
        total = 0;
    }

    double calculate() {
        total = BS + ((BS * DA) / 100) + ((BS * HRA) / 100);
        return total;
    }

    void display() {
        System.out.println("Employee: " + emp_name + "\nCity: " + city + "\nTotal Salary: " + total);
    }
}

class Employment {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        Employee E1 = new Employee();
        E1.getdata();
        E1.calculate();
        E1.display();
        sc.close();
    }
}