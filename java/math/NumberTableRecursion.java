package math;

public class NumberTableRecursion {
    public static void printTable(int n, int i) {
        if (i<=10) {
            System.out.println(n + " x " + i + " = " + n*i);
            printTable(n, i+1);
        }
    }

    public static void main(String a[]) {
        int n = 8;
        printTable(n, 1);
    }
}
