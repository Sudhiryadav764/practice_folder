class One extends Thread {
    public void run() {
        for (int i = 1; i <= 10; i++) {
            System.out.println("Thread1 = " + i);
        }
    }
}

class Two extends Thread {
    public void run()
    {
        try
        {
            Two.sleep(100);
            for(int i=11; i<=20; i++)
            {
                System.out.println("Thread2 = "+i);
            }
        }
        catch(Exception e){}
    }
}
class Three extends Thread {
    public void run()
    {
        try
        {
            Three.sleep(200);
            for(int i=21; i<=30; i++)
            {
                System.out.println("Thread3 = "+i);
            }
        }
        catch(Exception e){}
    }
}
class Four extends Thread {
    public void run()
    {
        try
        {
            Two.sleep(300);
            for(int i=31; i<=40; i++)
            {
                System.out.println("Thread4 = "+i);
            }
        }
        catch(Exception e){}
    }
}
class Five extends Thread {
    public void run()
    {
        try
        {
            Two.sleep(400);
            for(int i=41; i<=50; i++)
            {
                System.out.println("Thread5 = "+i);
            }
        }
        catch(Exception e){}
    }
}

class HundredThread
{
    public static void main(String[] args) {
        One t1 = new One();
        Two t2 = new Two();
        Three t3 = new Three();
        Four t4 = new Four();
        Five t5 = new Five();
        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();
    }
}
