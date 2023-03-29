#include <stdio.h>

int main() {
    FILE *demo, *destination;
    char c;

    demo = fopen("demo.txt", "r");
    destination = fopen("destination.txt", "w");

    if (demo == NULL || destination == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((c = fgetc(demo)) != EOF) {
        fputc(c, destination);
    }

    fclose(demo);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}

