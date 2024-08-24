
class Thread1 extends Thread{
public void run(){
    for(int i=1;i<=10;i++){
        System.out.println("Number is"+" "+i);

    }
}
}
   

class Thread2 extends Thread {
    public void run(){
        try
        {
            Thread2.sleep(10);
                for(int i = 11;i<=20;i++){

                    System.out.println("Number is"+" "+i);
                }

            }
            catch (Exception e){}
        }
    
    }
  
public class ThreadTest {

    public static void main(String[] args){
        Thread1 obj1 = new Thread1();
        Thread2 obj2 = new Thread2();
        obj1.start();
        obj2.start();
    }

   
    
}