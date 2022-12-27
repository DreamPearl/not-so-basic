package math;

public class SumOfSeries {
    public static int Sum(int[] s) {
        int sum = 0;
        for(int i=0;i<s.length;i++) {
            sum = sum+s[i];
        }
        return sum;
    }

    public static void main(String a[]) {
        int[] series = {3, 5, 8, 9, 12, 15};
        int sum = Sum(series);
        System.out.println(sum);
    }
}
