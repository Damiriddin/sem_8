#include <stdio.h>
#include <string.h>

// реализация быстрой сортировки для длин строк 
void qsort(char **arr, int left, int right) {
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
        qsort(arr, left, j);
    if (i < right)
        qsort(arr, i, right);
}

int main() {
 
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);   //  считываем количество вводимых строк
    char **arr = (char **) malloc(n * sizeof(char *));
   
    printf("Enter %d strings:\n", n);
    // выделяем память под каждую строку
    for (int i = 0; i < n; i++) {
        char *str = (char *) malloc(256 * sizeof(char));
    scanf("%s", str);
    arr[i] = str; // заносим указатель на строку в массив
    }
    qsort(arr, 0, n - 1);
    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);

    
    return 0;
}
