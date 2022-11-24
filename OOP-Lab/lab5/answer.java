
import java.util.Scanner;

class Box {
    double height;
    double width;
    double depth;

    void read(double x, double y, double z) {
        height = x;
        width = y;
        depth = z;
    }

    double find() {
        return height * width * depth;
    }

}

class answer {
    public static void main(String args[]) {
        System.out.print("enter the height, width and depth of a box: ");
        int x, y, z;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();
        Box box1 = new Box();
        box1.read(x, y, z);
        double vol = box1.find();
        System.out.println("the volume of the box is: " + vol);
        sc.close();
    }
}
