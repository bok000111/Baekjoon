#include<stdio.h>
#include<string.h>
 
typedef struct _stack {    //스택 구조체. 
    int arr[10000];
    int top;
} Stack;
 
void StackInit(Stack * sp) {    //스택 초기화 함수
    sp -> top = -1;
}
 
int IsEmpty(Stack * sp) {    //스택이 비어있는지 확인 
    if(sp -> top == -1) {
        return 1;
    }
    return 0;
}
 
int Size(Stack *sp) {    //스택의 size 반환 
    return sp -> top + 1;
}
 
 
int IsFull(Stack * sp) {   //스택이 꽉 차있는지 확인 
    if(sp -> top + 1 >= 10000) {
    	return 1;
    }
    else {
    	return 0;
    }
}
 
void Push(Stack * sp, int data){    //스택의 push 
    if(IsFull(sp) == 1) {
    	return;
    }
    
    //top을 하나 올린 후 data 삽입
    sp->arr[++(sp->top)] = data;    
}
 
int Pop(Stack * sp){    //스택의 pop. 
    if(IsEmpty(sp) == 1) {
    	return -1;
    }
    else {
    	return sp -> arr[(sp -> top)--];
    }
}
 
int Peek(Stack *sp){    //스택의 맨위의 인자를 반환합니다. 
    if(IsEmpty(sp) == 1) {
    	return -1;
    }
    else {
    	return sp -> arr[sp -> top];
    }
}
 
 
int main(void){
    int i;
    char str[6];
    Stack stack;
    int n, num;
    
    scanf("%d", &n);
    
    fgetc(stdin);    //버퍼 비우기
    
    StackInit(&stack);    //stack 초기화. 
    
    
    for(i = 0; i < n; i++) {
    
        scanf("%s", str);
        fgetc(stdin);    //버퍼 비우기. 
 
        if(!strcmp(str, "push")) {    //push 인 경우 
            
            scanf("%d", &num);
            fgetc(stdin);    //버퍼 비우기. 
            Push(&stack, num);
        }
        
        else if(!strcmp(str, "pop")) {    //pop인 경우 
            printf("%d\n", Pop(&stack));
        }
        
        else if(!strcmp(str, "empty")) {    //empty인경우 
            printf("%d\n", IsEmpty(&stack));
        }
        
        else if(!strcmp(str, "size")){        //size인 경우
            printf("%d\n", Size(&stack));
        }
        
        else if(!strcmp(str, "top")) {        //top인 경우
            printf("%d\n", Peek(&stack));
        }
    }
    
    return 0;    
}