import java.util.Scanner;


public class Febonachi{
  
    public static void main(String args[]){
        int num1=0,num2=1,num3;
        
        Scanner Sc = new Scanner(System.in);
     System.out.print ("Enter the number of your choice :");
        int a = Sc.nextInt();
        
        for(int i=2;i<=a;i++){
            num3=num1+num2;
            System.out.print("\t"+num3);
            num1=num2;
            num2=num3;

        }



    }
}