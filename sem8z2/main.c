#include <stdio.h>
#include <string.h>

    void sort(char **arr, int left, int right) {
        int i = left, j = right;
        char *mid = arr[(left + right) / 2];
        while (i <= j) {
            while (strlen(arr[i]) < strlen(mid))
                i++;
        while (strlen(arr[j]) > strlen(mid))
            j--;
        if (i <= j) {
            char *temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
    }
        }
    if (left < j)
        sort(arr, left, j);
    if (i < right)
        sort(arr, i, right);
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    char **arr = (char **) malloc(n * sizeof(char *));
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
    char *str = (char *) malloc(256 * sizeof(char));
    scanf("%s", str);
    arr[i] = str;
    }
    sort(arr, 0, n - 1);
    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++)
    printf("%s\n", arr[i]);
    return 0;
}
