import java.util.*;
class trial
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        int i,j;
        int x=1;
        for (i=1;i<=5;i++)
        {
            for (j=1;j<=i;j++)
            {
                System.out.print(x+" ");
                x++;
            }
            System.out.println();
        }
    }
}