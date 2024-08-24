import java.lang.*;

class TestNum {
    int a;
    int b;

    void getNum(int x,int y){
       int a=x;
       int b=y;
    }

    int addNum(){

        int z;
        z=a+b;
        return(z);
    }

    void dispNum(){

        System.out.println("\na = "+a+"\tb ="+b);
    }

}
class ClassObj{

    public static void main(String args[]){

        TestNum   obj;
        obj = new TestNum ();
        obj.getNum(5,10);
        obj.dispNum();
        obj.addNum();
        

    }
}
