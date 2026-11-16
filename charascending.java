import java.util.*;
class charascending
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        char a[]={'D','R','A','M','B','S','T','G','z','a','m'};
        char temp;
        int i,j,l;
        l=a.length;
        
        for (i=0;i<l;i++)
        {
            System.out.print(a[i]+",");
        }
        
        System.out.println();
        for (i=0;i<l-1;i++)
        {
            for (j=0;j<(l-1)-i;j++)
            {
                if ( (int) a[j]>(int) a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        System.out.println("Highest ASCII value:"+a[l-1]);
        System.out.println("Lowest ASCII value:"+a[0]);
    }
}