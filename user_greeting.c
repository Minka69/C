#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello, my name is %s and I'm %d years old.\n", name, age);
    printf("I am learning C!\n");
    printf("C is awesome!\n");

    return 0;
}

