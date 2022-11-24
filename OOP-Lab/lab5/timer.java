import java.util.Scanner;

class time {
    int hours, minutes, seconds;

    time() {
        hours = minutes = seconds = 0;
    }

    time(int a, int b, int c) {
        hours = a;
        minutes = b;
        seconds = c;
    }

    void display() {
        System.out.println("Time is: " + hours + " : " + minutes + " : " + seconds);
    }

    time addd(time t1, time t2) {
        time temp = new time();
        temp.seconds = (t1.seconds + t2.seconds) % 60;
        temp.minutes = (t1.seconds + t2.seconds) / 60 + (t1.minutes + t2.minutes) % 60;
        temp.hours = (t1.minutes + t2.minutes) / 60 + (t1.hours + t2.hours) % 24;
        return temp;
    }
}

class timer {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the first time as hh:mm:ss :- ");
        int h = sc.nextInt();
        int m = sc.nextInt();
        int s = sc.nextInt();
        time t1 = new time(h, m, s);
        t1.display();
        System.out.println("enter the second time as hh:mm:ss :- ");
        int h2 = sc.nextInt();
        int m2 = sc.nextInt();
        int s2 = sc.nextInt();
        time t2 = new time(h2, m2, s2);
        t2.display();
        time t3 = new time();
        t3 = t3.addd(t1, t2);
        System.out.println("Both the time added is:- ");
        t3.display();
    }
}
