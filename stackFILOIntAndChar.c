#include <stdio.h>
#include <stdlib.h>
#define MAXSTACK 10
#define EMPTYSTACK -1
int top = EMPTYSTACK;
char items[MAXSTACK];

void push(char c) {
   items[++top] = c;
}

char pop() {
   return items[top--];
}

int full()  {
   return top+1 == MAXSTACK;
}

int empty()  {
   return top == EMPTYSTACK;
}

int main() {
   char ch;
   while ((ch = getchar())
         != '\n')
      if (!full()) push(ch);
   while (!empty())
      printf("%c", pop());
   printf("\n");
   return 0;
}
