import java.util.Scanner;
class rectangle {
    public static void main(String args[]){
        
        System.out.println("Enter the length and breadth of the rectangle:");
        Scanner sc=new Scanner(System.in);
        int length=sc.nextInt(), breadth=sc.nextInt();
        System.out.println("The area is: " + length*breadth + "\nAnd the circumference is: " + 2*(length+breadth) );
        sc.close();
    }
    
}
