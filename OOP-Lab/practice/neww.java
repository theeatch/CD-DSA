import java.util.*;

class susException extends Exception {
    susException(){
        System.out.println("wrong string type");
    }
}

class Thread1 extends Thread{
    
    String names[]=new String[5];
    Thread1(String s[]){this.names=s;}
    public void run(){
        for(int i=0;i<4;i++){
            for(int j=i+1;j<5;j++){
                if(names[i].compareTo(names[j])>0){
                    String temp = names[i];
                    names[i]=names[j];
                    names[j]=temp;
                }
            }
        }
        System.out.println("-------------");
        for(int i=0;i<5;i++){
            System.out.println(names[i]);
        }
    }
}
class Thread2 extends Thread{
    
    String names[]=new String[5];
    Thread2(String s[]){this.names=s;}
    public void run(){
        for(int i=0;i<5;i++){
            {
                names[i]=names[i].replaceAll("hello","hi");
            }
        }
        System.out.println("-------------");
        for(int i=0;i<5;i++){
            System.out.println(names[i]);
        }
    }
}

public class neww {
    public static void main(String[] args) throws susException{
        Scanner sc = new Scanner(System.in);
        String S1[]=new String[5];
        System.out.println("enter the five strings: ");
        for(int i=0;i<5;i++){
            S1[i]=sc.nextLine();
            if(S1[i].equalsIgnoreCase("error")){
                throw new susException();
            }
            
        }

        Thread1 nam=new Thread1(S1);
        nam.setPriority(7);
        
        Thread2 namee=new Thread2(S1);
        namee.setPriority(2);
        // nam.start();
        namee.start();
    }
}
