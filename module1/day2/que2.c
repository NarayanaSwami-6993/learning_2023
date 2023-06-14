#include <stdio.h>

// Function to swap any type of data using pointers and type casting
void swapData(void* a, void* b, size_t size) {
    void* temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapData(&num1, &num2, sizeof(int));
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    double pi = 3.14, e = 2.71;
    printf("Before swapping: pi = %lf, e = %lf\n", pi, e);
    swapData(&pi, &e, sizeof(double));
    printf("After swapping: pi = %lf, e = %lf\n", pi, e);

    char ch1 = 'A', ch2 = 'B';
    printf("Before swapping: ch1 = %c, ch2 = %c\n", ch1, ch2);
    swapData(&ch1, &ch2, sizeof(char));
    printf("After swapping: ch1 = %c, ch2 = %c\n", ch1, ch2);

    return 0;
}