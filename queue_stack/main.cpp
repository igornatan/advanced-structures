#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct stack {
    int x;
    struct stack *p;
};

stack *insert(){
    struct stack *p1;
    p1 = (struct stack*) malloc(sizeof(struct stack));
    p1->p = nullptr;
    std::cout << "Type your code: " << std::endl;
    scanf("%d", p1->x);
}

void print(){

}

int main() {
    std::cout << "Hello, World!" << std::endl;

    struct stack *top;
    struct stack *bot;

    bool first = true;

    char option;
    do {
        std::cout << "I - Insert" << std::endl;
        std::cout << "P - Print" << std::endl;
        std::cout << "E - Exit" << std::endl;



    } while (option != 'a' && option != 'S');

    return 0;
}