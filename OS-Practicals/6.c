#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    int megabytes = 0;
    megabytes = atoi(argv[1]);

    printf("Memory Allocation\n");

    size_t bytes = megabytes * 1024 * 1024;
    printf("Allocating %zu bytes\n", bytes);

    char *ptr = (char *)malloc(bytes);
    if (!ptr) {
        printf("Failed to allocate memory\n");
        return 1;
    }

    printf("Memory allocated\n");
    memset(ptr, 1, bytes);
    printf("Enter any key to free\n");
    while (getchar() != '\n');
    free(ptr);

    return 0;
}
