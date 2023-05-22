import java.util.*;
class jk{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int Interior = sc.nextInt();
        int Exterior = sc.nextInt();
       
        if(Interior<=0 | Exterior<=0)
        {
            System.out.println("Don’t  want to paint that wall");
        }else
        {
       
        double arr[]=new double[Interior];
        double Isum=0;
        for(int i=0;i<Interior;i++)
        {
            double k=sc.nextDouble();
            Isum+=k;
        }
       
        double Esum=0;
    for(int i=0;i<Exterior;i++)
        {
            double s=sc.nextDouble();
            Esum+=s;
        }
       
        double total = (Isum*18+Esum*12);
        System.out.printf("Total estimated Cost: %.1f INR",total);
        }
       
    }
}
