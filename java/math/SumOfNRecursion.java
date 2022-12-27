package math;

public class SumOfNRecursion {
    public static int Sum(int n) {
        if(n == 0) return n;
        while(n>0)
            return n+Sum(n-1);
        return n;
    }

    public static void main(String a[]) {
        int n = 8;
        int sum = Sum(n);
        System.out.println(sum);
    }
}
