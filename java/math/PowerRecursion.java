package math;

public class PowerRecursion {
    public static int printPower(int a, int b, int p) {
        if(b>0) {
            return printPower(a, b-1, p*a);
        }
        return p;
    }

    public static void main(String s[]) {
        int a = 4, b = 2, product = 1;
        int power = printPower(a,b,product);
        System.out.println(power);
    }
}
