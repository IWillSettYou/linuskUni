#include <stdio.h>

#define SIZE 1024

int main() {
    const char *file = "pm.c";
    FILE *fp = fopen(file, "r");
    if (!fp) {
        perror("no file kek");
        return 1;
    }

    char buffer[SIZE];
    while (fgets(buffer, SIZE, fp)) {
        fputs(buffer, stdout);
    }

    fclose(fp);
    return 0;
}