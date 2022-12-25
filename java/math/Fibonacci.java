package math;

public class Fibonacci {
    public static int fib(int n) {
        if(n == 0) return n;
        if(n == 1) return n;
        return fib(n-1) + fib(n-2);
    }

    public static void main(String a[]) {
        int n = 8, fib_sum;
        fib_sum = fib(n);
        System.out.println(fib_sum);
    }
}
