package sort;

public class SelectionSort {
    public static void selectionSort(int arr[]) {
        for(int i=0;i<arr.length-1;i++) {
            int index = i;
            for(int j=i+1;j<arr.length;j++) {
                if(arr[j]<arr[index]) {
                    index = j;
                }
            }
            int smallestNum = arr[index];
            arr[index] = arr[i];
            arr[i] = smallestNum;
        }
    }

    public static void main(String a[]) {
        int arr[] = {27, 6, 7, 10, 19, 22, 40, 25};
        selectionSort(arr);
        System.out.println("Sorted array using Selection sort: ");
        for(int i = 0;i < arr.length;i++) {
            System.out.println(arr[i]+" ");
        }
    }
}
