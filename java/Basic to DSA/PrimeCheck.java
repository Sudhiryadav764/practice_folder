
import java.util.Scanner;

public class PrimeCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        for(int i=1;i<=n;i++){

            if(i%i==0){
                System.out.println("Not Prime :"+i);
            }
        }

        
        
    }
}
