class leap {
    public static void main(String args[]){
        int year;
        year=Integer.parseInt(args[0]);
        if(year%4!=0){
            System.out.println(year+" year is a common year");
        }
        else if(year%10!=0){
            System.out.println(year+" year is a leap year");
        }
        else if(year%400!=0){
            System.out.println(year+" year is a common year");
        }
        else {
            System.out.println(year+" year is a leap year");
        }
    }   
}
