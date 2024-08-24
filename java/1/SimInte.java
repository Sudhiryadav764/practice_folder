
import java.util.Scanner;


public class SimInte{

    /**
     * @param args
     */
    public static void main(String args[]){

    float r,t;
   double si,p;
    Scanner num = new Scanner (System.in);
    System.out.print("Enter the value of Principal :");
    p = num.nextDouble();
    System.out.print("Enter the value of Rate :");
    r = num.nextFloat();
    System.out.print("Enter the value of Time :");
    t = num.nextFloat();
        si = (p*r*t)/100;

        System.out.println("Simple intrest :"+si);

    }

}