#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//存储输入操作符号的栈
typedef struct stacknode_opt
{
	char c;
	struct stacknode_opt* next;
} stacknode_opt;

typedef struct stack_opt
{
	stacknode_opt* top;//记录栈顶节点 
	int count;//记录栈的长度 
}stack_opt;

//存储输入数字的栈
typedef struct stacknode_num
{
	double num;
	struct stacknode_num* next;
} stacknode_num;

typedef struct stack_num
{
	stacknode_num* top;
	int count;
} stack_num;

//插入新元素到栈顶
void push_top_opt(stack_opt* A, char c)//操作符入栈 
{
	stacknode_opt* node = (stacknode_opt*)malloc(sizeof(stacknode_opt));
	if (node == NULL)
	{
		return;
	}
	node->c = c;
	node->next = A->top;
	A->top = node;
	A->count++;
}

void push_top_num(stack_num* B, double num)//数字入栈 
{
	stacknode_num* node = (stacknode_num*)malloc(sizeof(stacknode_num));
	if (node == NULL)
	{
		return;
	}
	node->num = num;
	node->next = B->top;
	B->top = node;
	B->count++;
}

//栈顶元素出栈
char pop_top_opt(stack_opt* A)//操作符出栈 
{
	if (A->top == NULL)
	{
		return '0';
	}
	char c = A->top->c;
	stacknode_opt* p = A->top;//保留当前栈顶节点 
	A->top = A->top->next;
	free(p);//释放之前栈顶节点 
	A->count--;
	return c;


}

double  pop_top_num(stack_num* B)//数字出栈 
{
	if (B->top == NULL)
	{
		return 0;
	}
	double num = B->top->num;
	stacknode_num* p = B->top;//保留当前栈顶节点 
	B->top = B->top->next;
	free(p);//释放之前栈顶节点 
	B->count--;

	return num;

}

//得到栈顶元素

char get_top_opt(stack_opt* A)//得到栈顶操作符 
{
	if (A->count == 0)
	{
		return '0';
	}

	return A->top->c;

}
double get_top_num(stack_num* B)//得到栈顶数字 
{
	if (B->count == 0)
	{
		return 0;
	}

	return B->top->num;
}

//判断输入字符与A栈顶字符的优先级 输入字符优先级高于就返回  1  否则返回 0
int is_pre(stack_opt* A, char c)
{
	if (A->count == 0 || c == '(') //当操作符栈为空时或输入为 ' ( ' 输入的优先级拉满
	{
		return 1;
	}
	if (c == '/0')//当输入为 ‘ \0 ' 优先级最低
	{
		return 0;
	}
	if (c == '*' || c == '/')// * / 优先级高于 + -；
	{
		if (A->top->c == '*' || A->top->c == '/')
		{
			return 0;
		}
		else
		{
			return 1;
		}

	}

	else
	{
		return 0;

	}
}


int main()
{
	stack_opt A;//存储操作符的栈 
	A.count = 0;
	A.top = NULL;

	stack_num B;//c存储数字的栈
	B.count = 0;
	B.top = NULL;

	char* push_c = (char*)malloc(sizeof(char[10010]));//输入的中缀表达式 
	if (push_c == NULL)
	{
		return 0;
	}
	//char push_c[10010];这种写法警告为初始化内存，暂时不知道为什么
	gets(push_c);

	double sum = 0;
	int i = 0;
	do {
		if (push_c[i] >= '0' && push_c[i] <= '9')
		{
			sum = sum * 10 + (double)push_c[i] - (double)'0';
			i++;
			if (push_c[i] < '0' || push_c[i] > '9')
			{
				push_top_num(&B, sum);
				sum = 0;
			}

		}
		else
		{

			if (A.count == 0 || get_top_opt(&A) == '(' && push_c[i] != ')' || is_pre(&A, push_c[i]))//让该操作符入栈
			{
				push_top_opt(&A, push_c[i]);
				i++;
				continue;

			}

			if (get_top_opt(&A) == '(' && push_c[i] == ')')//让 ‘（’ 出栈
			{
				pop_top_opt(&A);
				i++;
				continue;
			}

			if (push_c[i] == '\0' && A.count != 0 || get_top_opt(&A) != '(' && push_c[i] == ')' || is_pre(&A, push_c[i]) == 0)
			{
				switch (pop_top_opt(&A))
				{
				case '+':
					push_top_num(&B, pop_top_num(&B) + pop_top_num(&B));
					break;
				case '-':
				{
					double num = pop_top_num(&B);
					push_top_num(&B, pop_top_num(&B) - num);
				}break;

				case '*':
					push_top_num(&B, pop_top_num(&B) * pop_top_num(&B));
					break;
				case '/':
				{
					double num = pop_top_num(&B);
					push_top_num(&B, pop_top_num(&B) / num);
				}
				break;

				default:
					break;
				}

				continue;
			}



		}

	} while (push_c[i] != '\0' || A.count != 0);

	printf("%.2lf\n", pop_top_num(&B));

	return 0;
}
