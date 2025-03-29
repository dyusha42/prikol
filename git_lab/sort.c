// функция ьытрой обработки массива
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high], i = low - 1, j, temp;
        for (j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        quicksort(arr, low, i);
        quicksort(arr, i + 2, high);
    }
}
