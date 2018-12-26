import java.util.*;
public class akee {
   public static void main (String [] args) {

      int a = 0;
      int b = 0;

      Scanner input = new Scanner(System.in);

         System.out.print("Enter a: ");
         a = input.nextInt();
         System.out.print("Enter b: ");
         b = input.nextInt();

         if ((a <= 1) || (b <= 1)) {
            System.out.println("Please enter numbers above 1");
            System.exit(1);
         }

         System.out.print(b + " multiples of " + a + " are: ");

   }
}
