import java.util.*;
class test
{
    void xyz(String s)
    {   
        s=s.replace('A','O');
        System.out.println("New String:"+s);
    }
    public static void main()
    {
        test obj=new test();
        obj.xyz("BATTLE");
    }
}