#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Task 1
// int main()
// {
//     int arr[5];
//     int *dyn_arr = malloc(sizeof(int) * 5);
//     for (int i = 0; i < 5; i++)
//     {
//         dyn_arr[i] = i;
//         printf("%d", dyn_arr[i]);
//     }

//     free(dyn_arr);
//     return 0;
// }

// task 2

int main() {
    char *str1 = malloc(sizeof(char) * 15);
    strcpy(str1, "21st");

    char *str2 = malloc(sizeof(char) * 15);
    strcpy(str2, "century");

    printf("%s %s", str1, str2);

    free(str1);
    free(str2); 
    return 0;
}