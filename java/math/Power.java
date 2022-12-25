package math;

public class Power {
    public static int printPower(int a, int b) {
        int product = 1;
        for(int i = 0;i<b;i++)
            product = product*a;
        return product;
    }

    public static void main(String s[]) {
        int a = 4, b = 2;
        int product = printPower(a,b);
        System.out.println(product);
    }
}
