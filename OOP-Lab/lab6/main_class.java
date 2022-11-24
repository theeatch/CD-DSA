import java.util.Scanner;

class Account {
    static int count;
    Scanner sc = new Scanner(System.in);
    String name;
    int number;
    String type;
    double balance;

    Account() {
        System.out.print("Enter the name of the customer: ");
        name = sc.nextLine();
        System.out.print("The account number alloted is ");
        number = computeAccount();
        System.out.println(this.number);
        count++;
    }

    int computeAccount() {
        this.number = 500;
        this.number = this.number+(int)(this.name.charAt(0));
        return number;
    }

    void deposit(int value) {
        balance += value;
        System.out.println(value + " Deposited");
    }

    void withdraw(int value) {
        if (balance < value) {
            System.out.println("Insufficient Funds!");
            return;
        }
        balance -= value;
    }

    void display() {
        System.out.println("The balance in your account is: " + balance);
    }

};

class Savings extends Account {
    Savings() {
        super();
        System.out.println("The account type selected is Savings");
        this.type = "Savings";
        System.out.print("Enter the amount to deposit: ");
        deposit(sc.nextInt());
        Interest();
    }

    void Interest() {
        balance += (0.06 * balance);
    }
};

class Current extends Account {
    Current() {
        super();
        System.out.println("The account type selected is Current. MAB is Rs.10000");
        this.type = "Current";
        System.out.print("Enter the amount to deposit: ");
        deposit(sc.nextInt());
        Service();
    }

    void Service() {
        if (this.balance < 10000) {
            balance *= 0.9;
        }
    }
};

public class main_class {
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);

        Savings s1 = new Savings();
        System.out.print("how much do you want to withdraw from savings acount: ");
        int value = sc.nextInt();
        s1.withdraw(value);
        s1.Interest();
        s1.display();

        Current c1 = new Current();
        System.out.print("how much do you want to withdraw from current account: ");
        int value2 = sc.nextInt();
        c1.withdraw(value2);
        c1.Service();
        c1.display();
    }
}