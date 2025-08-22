//Design an algorithm and a program to implement stack using array. The program should implement following stack operations: 


#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void Create() {
    top = -1;
}

void Push(int k) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = k;
}

int Pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int IsEmpty() {
    return (top == -1);
}

int Size() {
    return top + 1;
}

void Print() {
    if (IsEmpty()) {
        printf("Stack is Empty\n");
        return;
    }
    printf("Stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, val;
    Create();
    while (1) {
        printf("\nChoose operation:\n");
        printf("1. Push\n2. Pop\n3. Size\n4. IsEmpty\n5. Print\n6. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &val);
                Push(val);
                Print();
                break;
            case 2:
                val = Pop();
                if (val != -1) printf("Popped: %d\n", val);
                Print();
                break;
            case 3:
                printf("Size of stack: %d\n", Size());
                break;
            case 4:
                if (IsEmpty()) printf("Stack is Empty\n");
                else printf("Stack is Not Empty\n");
                break;
            case 5:
                Print();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid Choice\n");
        }
    }
}
