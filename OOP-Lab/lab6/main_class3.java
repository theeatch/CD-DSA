

class Bank {
    int interest = 0;

    int getRateOfInterest() {
        return interest;
    }
}

class SBI extends Bank {
    SBI() {
        interest = 8;
    }

    int getRateOfInterest() {
        return interest;
    }
}

class ICICI extends Bank {
    ICICI() {
        interest = 7;
    }

    int getRateOfInterest() {
        return interest;
    }
}

class AXIS extends Bank {
    AXIS() {
        interest = 9;
    }

    int getRateOfInterest() {
        return interest;
    }
}

public class main_class3 {
    public static void main(String args[]) {
        Bank b = new Bank();
        SBI s = new SBI();
        ICICI i = new ICICI();
        AXIS a = new AXIS();
        System.out.println("For initial bank: ");
        System.out.println(b.getRateOfInterest());
        b = s;
        System.out.println("Interest rate in SBI bank is: ");
        System.out.println(b.getRateOfInterest());
        b = a;
        System.out.println("Interest rate in Axis bank is: ");
        System.out.println(b.getRateOfInterest());
        b = i;
        System.out.println("Interest rate in ICICI bank is: ");
        System.out.println(b.getRateOfInterest());
    }
}
