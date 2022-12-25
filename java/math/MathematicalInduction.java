package math;

public class MathematicalInduction {
    public static int calculateEquation(int m, int n) {
        if(m == 0) return 0;
        if(n == 0) return 0;
        return (m+n-1+calculateEquation(m-1, n-1));
    }

    public static void main(String a[]) {
        int m = 6, n = 5;
        int result = calculateEquation(m,n);
        System.out.println(result);
    }
}
