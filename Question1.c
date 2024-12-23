#include <stdio.h>
#define SIZE 100

struct Stack {
    int stack[SIZE];
    int top;
} st;


void init() {
    st.top = -1;  
}


void PushIterm(int item) {
    if (st.top >= SIZE - 1) {  
        printf("Stack Overflow\n");
    } else {
        st.top++;
        st.stack[st.top] = item;
    }
}


int PopIterm() {
    if (st.top == -1) { 
        printf("The Stack are Entering\n");
        return -1;
    } else {
        int item = st.stack[st.top];
        st.top--;
        return item;
    }
}


void Display() {
    if (st.top == -1) {  
        printf("The Stack is empty\n");
    } else {
        for (int i = 0; i <= st.top; i++) {  
            printf("%d ", st.stack[i]);
        }
        printf("\n");
    }
}

int main() {
    init();  
    PushIterm(45);
    PushIterm(65);
    PushIterm(85);
    Display();
    PopIterm();
    Display();
    return 0;
}