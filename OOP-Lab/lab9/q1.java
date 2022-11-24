import java.util.*;
class q1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string");
        String str = sc.nextLine();
        int count = 0;
        for(int i=0;i<str.length();i++) {
            if(str.charAt(i) == ' ') {
                count++;
            }
        }
        System.out.println("Number of words: "+(count+1));
        System.out.println("Number of characters: "+str.length());
        System.out.println("Number of lines: "+(count+1));
        int count1 = 0;
        for(int i=0;i<str.length();i++) {
            if(str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u') {
                count1++;
            }
        }
        System.out.println("Number of vowels: "+count1);
    }
}