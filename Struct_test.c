#include <stdio.h>


struct Test1 {
    char a;
};

struct Test2 {
    char a;
    char b;
};

// Padding expected
struct Test3 {
    char a;
    short b;
};

// Better alignment
struct Test4 {
    short a;
    short b;
    char c;
};

// Padding in middle & end
struct Test5 {
    char a;
    int b;
    char c;
};

// Reordered to reduce padding
struct Test6 {
    int b;
    char a;
    char c;
};

// Larger alignment (double)
struct Test7 {
    double a;
    int b;
};

// Mixed alignment
struct Data {
    double a;
    int b;
    double c;
};

int main() {

    printf("=== Structure Padding Demo ===\n\n");

    printf("Test1: char a;\n");
    printf("Size = %lu\n\n", sizeof(struct Test1));

    printf("Test2: char a; char b;\n");
    printf("Size = %lu\n\n", sizeof(struct Test2));

    printf("Test3: char a; short b;\n");
    printf("Size = %lu\n\n", sizeof(struct Test3));

    printf("Test4: short a; short b; char c;\n");
    printf("Size = %lu\n\n", sizeof(struct Test4));

    printf("Test5: char a; int b; char c;\n");
    printf("Size = %lu\n\n", sizeof(struct Test5));

    printf("Test6 (Reordered): int b; char a; char c;\n");
    printf("Size = %lu\n\n", sizeof(struct Test6));

    printf("Test7: double a; int b;\n");
    printf("Size = %lu\n\n", sizeof(struct Test7));

    printf("Data: double a; int b; double c;\n");
    printf("Size = %lu\n\n", sizeof(struct Data));

    return 0;
}