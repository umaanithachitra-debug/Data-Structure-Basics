#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int value){
	stack[++top]=value;
}
int pop(){
	return stack[top--];
}
int main(){
	char postfix[100];
	int a,b,i,result;
	printf("enter postfix expression:");
	scanf("%s",postfix);
	for(i=0;postfix[i]!='\0';i++){
		if(isdigit(postfix[i])){
			push(postfix[i]-'0');
		}
		else{
			b=pop();
			a=pop();
			switch(postfix[i]){
				case '+':
					push(a+b);break;
				case '-':
					push(a-b);break;
				case '*':
					push(a*b);break;
				case '/':
					push(a/b);break;
				case '^':
					push(pow(a,b));break;
			}
		}
	}
	printf("result=%d\n",result);
	return 0;
}
