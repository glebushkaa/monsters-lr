#include <stdio.h>
#include <stdlib.h>

int* find_min(int* list, int list_size);
int length(char* string);
char* concatenate(char* first, char* second);

void main() {
    int nums[] = {32, 4,  21, 54, 23,  6,  432, 22, 21,
                  43, 65, 76, 21, 100, 32, 12,  3};

    int* min_value_pointer = find_min(nums, sizeof(nums) / sizeof(int));
    printf("Min value: %i\n", *min_value_pointer);

    char string[] = "Hello, DNU!";
    int len = length(string);
    printf("String length is %i\n", len);

    char first_string[] = "Hello, ";
    char second_string[] = "DNU!";
    char* appended_string = concatenate(first_string, second_string);
    printf("First string is %s\n", first_string);
    printf("Second string is %s\n", second_string);
    printf("Appended string is %s\n", appended_string);
}

int* find_min(int* list, int list_size) {
    int* pointer = list;
    for (int position = 0; position < list_size; position++) {
        if (*pointer <= list[position]) continue;
        pointer = &list[position];
    }
    return pointer;
}

int length(char* string) {
    int lenght = 0;
    while (string[lenght] != '\0') {
        lenght++;
    }
    return lenght;
}

char* concatenate(char* first, char* second) {
    int first_len = length(first);
    int second_len = length(second);
    int appended_string_len = first_len + second_len;
    char* appended_string = malloc(sizeof(char) * appended_string_len);

    for (int count = 0; count < first_len; count++) {
        appended_string[count] = first[count];
    }
    for (int count = 0; count < second_len; count++) {
        appended_string[first_len - 1 + count] = second[count];
    }
    return appended_string;
}
