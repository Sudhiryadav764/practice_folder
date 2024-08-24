import java.util.Scanner;
public class Febonacci{
    
     public static void main(String[] args){
         int firstTerm = 0;
         int secondTerm = 1;
         System.out.print("Enter the Number :");
         Scanner sc = new Scanner(System.in);
         int n = sc.nextInt();

        for(int i=0;i<=n;i++){
            int nextTerm =  firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
            System.out.print(firstTerm+" ");
        }

    }
}