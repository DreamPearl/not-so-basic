public class BubbleSort {
    public static void bubbleSort(int arr[]) {
        for(int i=0;i<arr.length-1;i++) {
            for(int j=1;j<arr.length-i;j++) {
                if(arr[j-1]>arr[j]) {
                    int biggerNum = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = biggerNum;
                }
            }
        }
    }
    public static void main(String a[]) {
        int arr[] = {27, 6, 7, 10, 19, 22, 40, 25};
        bubbleSort(arr);
        System.out.println("Sorted array using Bubble sort: ");
        for(int i = 0;i < arr.length;i++) {
            System.out.println(arr[i]+" ");
        }
    }
}
