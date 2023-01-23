//example of java synchronized method  
class Table{  
    synchronized void printTable(int n){//synchronized method  
      for(int i=1;i<=100;i++){  
        System.out.println((2*i-n)*(2*i-n));  
        try{  
         Thread.sleep(400);  
        }catch(Exception e){System.out.println(e);}  
      }  
     
    }  
   }  
     
   class MyThread1 extends Thread{  
   Table t;  
   MyThread1(Table t){  
   this.t=t;  
   }  
   public void run(){  
   t.printTable(0);  
   }  
     
   }  
   class MyThread2 extends Thread{  
   Table t;  
   MyThread2(Table t){  
   this.t=t;  
   }  
   public void run(){  
   t.printTable(1);  
   }  
   }  
     
   public class random{  
   public static void main(String args[]){  
   Table obj = new Table();//only one object  
   MyThread1 t1=new MyThread1(obj);  
   MyThread2 t2=new MyThread2(obj);  
   t1.start();  
   t2.start();  
   }  
   }  