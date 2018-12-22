public class Pk {

    public static void main(String[] args) {

        int a= 3, b= 4;

        long result = 1;

        while (b!= 0)
        {
            result *= a;
            --b;
        }

        System.out.println("Answer = " + result);
    }
}
