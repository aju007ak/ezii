public class Aki {

    public static void main(String[] args) {

        int i = 0, num = 34;

        while(num != 0)
        {
            // num = num/10
            num /= 10;
            ++i;
        }

        System.out.println("Number of digits: " + i);
    }
}
