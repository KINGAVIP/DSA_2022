import java.util.*;
import java.lang.String;
public class Bank
{
    String name;
    String ad;
    int account,balance;
    Bank(String nd,String a,int ac,int bal)
    {
        name=nd;
        ad=a;
        account=ac;
        balance=bal;
    }
    int generator(int i)
    {
        return 1000+i+1;
    }
    void display()
    {
        System.out.println("Name :"+name);
        System.out.println("Address :"+ad);
        System.out.println("Account number :"+account);
        System.out.println("Balance :"+balance);
    }
    void addbal(int amt)
    {
        balance+=amt;
        display();
    }
    void withdraw(int amt)
    {
        balance-=amt;
        display();
    }
    void changeadd(String addres)
    {
        ad=addres;
        display();
    }

    public static void main(String []args)
    {
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of depositers");
        n=sc.nextInt();
        Bank ob[]=new Bank[n+1];
        for(int i=0;i<n;i++)
        {
            System.out.println("Enter name:");
            String name=sc.nextLine();
            System.out.println("Enter address:");
            String add=sc.nextLine();
            System.out.println("Enter account number:");
            int ac=sc.nextInt();
            System.out.println("Enter balance:");
            int bal=sc.nextInt();
            ob[i]=new Bank(name,add,ac,bal);
            ob[i].generator(i);
        }
        ob[0].display();
    }
}