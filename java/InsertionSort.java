public class InsertionSort {
    public static void insertionSort(int arr[]) {
        for(int i=1;i<arr.length;i++) {
            int j = i-1;
            int new_element = arr[i];
            while(j>=0 && new_element<arr[j]) {
                    arr[j+1] = arr[j];
                    j--;
            }
            arr[j+1] = new_element;
        }
    }
    public static void main(String a[]) {
        int arr[] = {27, 6, 7, 10, 19, 22, 40, 25};
        insertionSort(arr);
        System.out.println("Sorted array using Insertion sort: ");
        for(int i = 0;i < arr.length;i++) {
            System.out.println(arr[i]+" ");
        }
    }
}
