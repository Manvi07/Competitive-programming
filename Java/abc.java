import java.util.Scanner;
public class abc{
     public static void main(String []args){
         Scanner in = new Scanner(System.in);
        System.out.println("ENTER THE NUMBER");
        int x = in.nextInt();
        if (x<0)
        {
            System.out.println("enter again");
            x = in.nextInt();
        }
        int min = 9;
            while (x!=0)
            {
                int r = x%10;
                if(min>r)
                {
                    min=r;
                }
                x=x/10;
            }
            System.out.println("smallest number=" + min);
        }
     }
