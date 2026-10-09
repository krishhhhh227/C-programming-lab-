#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

Stack s;

void initStack() {
    s.top = -1;
}

int isEmpty() {
    return s.top == -1;
}

void push(int value) {
    if (s.top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s.data[++(s.top)] = value;
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s.data[(s.top)--];
}

int isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

int performOperation(char operation, int op1, int op2) {
    switch (operation) {
        case '+': return op1 + op2;
        case '-': return op1 - op2;
        case '*': return op1 * op2;
        case '/': 
            if (op2 == 0) {
                printf("Error: Division by zero\n");
                return 0;
            }
            return op1 / op2;
        default:
            printf("Invalid operator: %c\n", operation);
            return 0;
    }
}

int evaluatePostfix(char *exp) {
    initStack();

    for (int i = 0; exp[i] != '\0'; i++) {
        if (isDigit(exp[i])) {
            push(exp[i] - '0');
        } 
        else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/') {
            int val2 = pop(); 
            int val1 = pop(); 
            int result = performOperation(exp[i], val1, val2);
            push(result);
        }
    }
    return pop();
}

int evaluatePrefix(char *exp) {
    initStack();
    int length = strlen(exp);

    for (int i = length - 1; i >= 0; i--) {
        if (isDigit(exp[i])) {
            push(exp[i] - '0');
        } 
        else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/') {
            int val1 = pop(); 
            int val2 = pop(); 
            int result = performOperation(exp[i], val1, val2);
            push(result);
        }
    }
    return pop();
}

int main(int argc, char *argv[]) {
    char postfixExp[] = "234*+";  
    char prefixExp[] = "*+234";   

    printf("Postfix Expression: %s\n", postfixExp);
    printf("Evaluation Result: %d\n\n", evaluatePostfix(postfixExp));

    printf("Prefix Expression: %s\n", prefixExp);
    printf("Evaluation Result: %d\n", evaluatePrefix(prefixExp));

    return 0;
}
