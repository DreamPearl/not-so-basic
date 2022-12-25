package math;

public class NumberTable {
    public static void printTable(int n) {
        for(int i=1;i<=10;i++) {
            System.out.println(n + " x " + i + " = " + n*i);
        }
    }

    public static void main(String a[]) {
        int n = 8;
        printTable(n);
    }
}
