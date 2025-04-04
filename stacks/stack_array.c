// Stack from an array

#include <stdio.h>

void push();
void pop();
void peek();
void update();
void display();

int a[100], top = -1;

void push() {
    int n = 0;
    printf("\nenter the value to insert? ");
    scanf("%d", &n);
    top += 1;
    a[top] = n;
}
void pop() {
    if (top == -1) {
        printf("\nstack is empty");
    } else {
        int item;
        item = a[top];
        top -= 1;
        printf("\npopped item is %d ", item);
    }
}
void peek() {
    if (top >= 0)
        printf("\nthe top element is %d", a[top]);
    else
        printf("\n stack is empty");
}
void update() {
    int i, n;
    printf("\n enter the position to update? ");
    scanf("%d", &i);
    printf("\n enter the item to insert? ");
    scanf("%d", &n);
    if (top - i + 1 < 0) {
        printf("\n underflow condition");
    } else {
        a[top - i + 1] = n;
    }
}
void display() {
    if (top >= 0) {
        printf("elements are: ");
        for (int i = top; i >= 0; i--)
        printf("%d", a[i]);
        printf("");
    } else {
        printf("Stack is empty");
    }
}

int main() {
    int x;
    while (1) {
        printf("\n0.exit");
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.peek");
        printf("\n4.update");
        printf("\n5.display");
        printf("\nenter your choice? ");
        scanf("%d", &x);
        switch (x) {
            case 0:
                return 0;
            case 1: 
                push();
                break;
            case 2: 
                pop();
                break;
            case 3: 
                peek();
                break;
            case 4: 
                update();
                break;
            case 5:
                display();
                break;
            default:
                printf("\ninvalid choice");
        }
    }

    return (0);
}