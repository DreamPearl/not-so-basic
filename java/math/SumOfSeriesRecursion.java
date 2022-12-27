package math;

public class SumOfSeriesRecursion {
    public static int Sum(int[] s,int high) {
        if(high>0)
            return s[high] +Sum(s, high-1);
        return s[high];
    }

    public static void main(String a[]) {
        int[] series = {3, 5, 8, 9, 12, 15, -2};
        int sum = Sum(series, series.length-1);
        System.out.println(sum);
    }
}
