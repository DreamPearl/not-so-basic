package math;

public class MultiplicationUsingAddition {
    public static int Multiplication(int x, int y) {
        int result = 0;
        for(int i=0;i<y;i++) {
            result = result+x;
        }
        return result;
    }

    public static void main(String a[]) {
        int x = 4, y = 5;
        int multi = Multiplication(x,y);
        System.out.println(multi);
    }
}
