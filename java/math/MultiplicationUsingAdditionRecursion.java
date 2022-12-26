package math;

public class MultiplicationUsingAdditionRecursion {
    public static int Multiplication(int x, int y) {
        if(y == 0) return 0;
        if(y<0) return -Multiplication(x, -y);
        return x+Multiplication(x, y-1);
    }

    public static void main(String a[]) {
        int x = 4, y = 0;
        int multi = Multiplication(x,y);
        System.out.println(multi);
    }
}

// x*y = x*(y-1) + x;

// x*y = x, for y = 1;
// x*y = x*(y-1)+x, for y>=1
// -(x*(-y)), for y<0
