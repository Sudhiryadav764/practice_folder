import java.util.Scanner;


public class Cbse_Marksheet {

    public static void main(String args[]){
        double sum1;
        double percentage;
    
System.out.println("Calculate Percentage of a given student in CBSE board Exam.for 5 subject.taken input from user.  ");


    System.out.println("\nEnter Marks of five subject :");


    Scanner Sc = new Scanner(System.in);
    
    System.out.print(" Comp :");
    double com = Sc.nextDouble();
    System.out.print(" Math :");
    double mathe = Sc.nextDouble();
    System.out.print(" Phy :");
    double phy = Sc.nextDouble();
    System.out.print(" Che :");
    double che = Sc.nextDouble();
    System.out.print(" Eng :");
    double eng = Sc.nextDouble();

   sum1 = com+mathe+phy+che+eng;

   percentage = (sum1)/500*100;
        System.out.println("Total marks of all subject :"+sum1);
   System.out.println("Student marks percentage is :"+percentage);

    }
}
