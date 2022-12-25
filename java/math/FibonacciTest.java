package math;

import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class FibonacciTest {
    @Test
    public void fibonacciSum() {
        int n = 9;
        assertEquals(34, Fibonacci.fib(n));
    }
}
