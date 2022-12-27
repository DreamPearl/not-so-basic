package math;

public class SumOfN {
    public static int Sum(int n) {
        int sum = 0;
        for(int i=1;i<=n;i++) {
            sum = sum+i;
        }
        return sum;
    }

    public static void main(String a[]) {
        int n = 8;
        int sum = Sum(n);
        System.out.println(sum);
    }
}
