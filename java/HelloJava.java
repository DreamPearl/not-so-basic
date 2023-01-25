import java.util.Arrays;
import java.util.Scanner;

public class HelloJava {
    public static void main(String[] args) {
        // Print Hello World
        System.out.println("Hello World");

        // Single-dimension array
        int[] numbers = {1, 2, 3, 4, 5};
        System.out.println("The length of single-dimensional array is: " + numbers.length);
        System.out.println("The elements in single-dimensional array are: " + Arrays.toString(numbers));

        // multi-dimension array
        int[][] m_numbers = new int[2][3];
        m_numbers[0][0] = 1;
        System.out.println("The elements in multi-dimensional array are: " + Arrays.deepToString(m_numbers));

        // Implicit casting
        /// byte > short > int > long
        short x = 1;
        int y = x + 2;
        System.out.println(y);

        /// byte > short > int > long > float > double
        double m1 = 1.1;
        double n1 = m1 + 2; // 2 will be casted implicitly into 2.0
        System.out.println(n1);

        // Explicit casting
        double m2 = 1.1;
        int n2 = (int)m2 + 2;
        System.out.println(n2);

        // Type cast String to int. Use parseInt method of wrapper class.
        String x2 = "1";
        int y2 = Integer.parseInt(x2) + 2; // Integer.parseInt(x2) is a Wrapper class for int primitive type. Takes String and returns int.
        System.out.println(y2);

        int result = (int) (Math.random() * 100); // Explicit cast into int as random() return double between 0 an 1.
        System.out.println(result);

        // Read Input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Name: ");
        String name = scanner.nextLine();   // scanner.next() takes only one word, not the spaces.
        System.out.println("Name is: " + name);

        System.out.print("Age: ");
        byte age = scanner.nextByte();  // Same we also have nextInt, nextFloat etc.
        System.out.println("Age is: " + age);
        scanner.close();

        // Ternary Operator
        int income = 120000;
        String className = income > 100000 ? "First" : "Second";
        System.out.println((className));
    }
}
