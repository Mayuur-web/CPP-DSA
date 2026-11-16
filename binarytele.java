import java.util.*;
class binarytele
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        String name[]=new String[10];
        long mobno[]=new long[10];
        int i,f,m,l,found=0,post=0;
        long n;
        for (i=0;i<10;i++)
        {
            System.out.println("Enter the name:");
            name[i]=sc.next();
            System.out.println("Enter the Telephone number:");
            mobno[i]=sc.nextLong();
        }
        System.out.println("Enter the telephone no. to search:");
        n=sc.nextLong();
        
        f=0;
        l=10-1;
        
        while (f<=l)
        {
            m=(f+l)/2;
            if (n==mobno[m])
            {
                found=1;
                post=m;
                break;
            }
            else if (n<mobno[m])
            l=m-1;
            else if (n>mobno[m])
            f=m+1;
        }
        if (found==1)
        {
            System.out.println("Name of Persons:"+name[post]);
            System.out.println("Telephone Number:"+mobno[post]);
        }
        else
        System.out.println(n+" is not found in the array.");
    }
}