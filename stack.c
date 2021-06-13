#include <stdio.h>
#include<stdbool.h>
char a[100];
char b[100];
int head=0;
int tail=-1;
int head1=0;
int tail1=-1;
void push(char x){
    tail++;//tail=0
    printf("push1=%c\n",a[tail]);
    if(tail+1 < sizeof(a))
    {
         a[tail]=x;
    }
}
char pop(){
    tail--;
    char x;
    x=a[tail+1];
    if(tail-head!=-1)
    {
        a[tail+1]=' ';
    }
    return x;
}
void enqueue(char x){
    tail1++;
    if(tail1+1<sizeof(b))
    {
        b[tail1]=x;
    }
} 
int dequeue(){
    head1++;
    char x;
    x = b[head1-1];
    if(tail1-head1>-1)
    {
        b[head1-1]=' ';
    }
    return x;
}

bool queue_full(){
    bool x;
    if(tail1>sizeof(b))
    {
        x=true;
    }
    else{
        x=false;
    }
    return x;
}
bool queue_empty(){
    bool x;
    if(tail1-head1==-1)
    {
       x=true;
    }
    else{
        x=false;
    }
    return x;
}
bool stack_empty(){
    bool x;
    if(tail-head==-1)
    {
        x=true;
    }
    else{
        x=false;
    }
    return x;
}
bool stack_full(){
    bool x;
    if(tail>sizeof(a))
    {
        x=true;
    }
    else{
        x=false;
    }
    return x;
}

int main()
{
 push('(');
 enqueue('3');
 push('+');
 enqueue('2');
 enqueue(pop());//+
 pop();//(
 push('*');
 enqueue('5');
 push('-');
 enqueue('8');
 enqueue(pop());//-
 enqueue(pop());
 push('*');
 enqueue('6');
 enqueue(pop());
 while(!queue_empty()){
 printf("%c ", dequeue());
 }
 return 0;
}