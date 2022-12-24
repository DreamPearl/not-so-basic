package sort;

import org.junit.Test;
import static org.junit.Assert.assertArrayEquals;

public class InsertionSortTest {
    
    @Test
    public void testInsertionSort() {
        int arr[] = {27, 6, 7, 10, 19, 22, 40, 25};
        InsertionSort.insertionSort(arr);
        int expected_arr[] = {6, 7, 10, 19, 22, 25, 27, 40};
        assertArrayEquals(expected_arr, arr);
    }
}
