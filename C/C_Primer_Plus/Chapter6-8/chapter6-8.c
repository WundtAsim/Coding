#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>


void p7_1(void)
{
	//编写一个程序读取输入，读到#字符停止，然后报告读取的空格数，换行数和其他所有字符数量；
	printf("Enter a line of characters, end with a #:");
	char c = getchar();
	int space = 0,enter = 0,else_c = 0;
	while (c != '#')
	{
		if (c == ' ')
			space++;
		else if (c == '\n')
			enter++;
		else
			else_c++;
		c = getchar();
	}
	printf("There are %d Spaces, %dEnters, and %d else characters in this sentance.\n", space, enter, else_c);
	return;
}

void p7_2(void)
{
	//读取输入直到#字符为止，程序打印每个输入的字符以及其对应的ASCII码，一行打印5个字符，建议使用字符技术和求模运算符在每8个循环周期时打印一个换行符
	printf("Enter a line of characters, end with a #:");
	char c = getchar();
	int num = 0;
	while (c != '#')
	{
		num++;
		printf("(%d)%c: %d\t",num, c, c);
		if (num%5 ==0)
		{
			printf("\n");
		}
			
		c = getchar();
	}
	num = 0;
	return;
}

void p7_3(void)
{
	//读取整数直到用户输入0，输入结束后，程序报告用户输入的偶数个数，平均值，输入奇数个数及平均值。
	printf("Enter a line of integers, end with a '0':");
	int n = 0,index_odd = 0,index_even = 0;
	double odd = 0, even = 0;

	scanf_s("%d", &n);
	while (n != 0)
	{
		n % 2 == 0 ? index_even++, even+=n : index_odd++, odd+=n;
		
		scanf_s("%d", &n);
	
	}
	printf("u have enter %deven numbers, %dodd numbers.\n", index_even, index_odd);
	printf("the averange of the even numbers is %lf\nthe averange of the odd numbers is %lf\n;", even / index_even, odd / index_odd);
}

void p7_4(void)
{
	//使用if else 语句编写一个程序读取输入，读到#为止，使用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少替换；
	char ch;
	int num = 0;
	printf("What do u want to say?");
	ch = getchar();
	while (ch != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			num++;
		}
			
		else if (ch == '!')
		{
			printf("\!\!");
			num++;
		}
			
		else
			printf("%c", ch);
		ch = getchar();
	}
	printf("\nu have reverted %d times.", num);
}

void p7_5(void)
{
	//使用if else 语句编写一个程序读取输入，读到#为止，使用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少替换；
	char ch;
	int num = 0;
	printf("What do u want to say?\n");
	ch = getchar();
	while (ch != '#')
	{
		switch (ch)
		{
		case '!':
			printf("\!");
			num++;
		case '.':
			ch = '!';
			num++;
		
		default:
			printf("%c", ch);
		}	
		ch = getchar();
	}
	printf("\nu have reverted %d times.", num);
}

void p7_6(void)
{
	//编写程序读取输入，直到#为止，报告ei出现的次数，注意程序要记录一个字符和当前自古，用Receive your eieio award这样的输入类测试
	char ch,ch_n;
	int i = 0;
	ch = getchar();
	ch_n = getchar();
	while (ch != '#' )
	{
		if (ch == 'e' && ch_n =='i')
		{
			i++;
		}
		ch = ch_n;
		ch_n = getchar();

	}
	printf("the ei comes out %dtimes.", i);
}

void p7_7(void)
{
	//提示用户输入一周工作小时数，然后打印工资总额，税金和净收入。基本工资1000/h,加班（超过40小时） = 1.5倍时间，税率：前300 15%，续150 20%，余下25%。
#define BasePay 1000;
#define overtime 1.5;
#define less300 0.15;
#define more300 0.2;
#define more450 0.25;
	double worktime, pay, tax;
	int a;
	printf("Enter you working time in this week: ");
	a = scanf_s("%lf", &worktime,10);
	while (a ==1 && worktime >= 0)
	{
		worktime = (worktime <= 40) ? worktime :  40 + (worktime - 40)*1.5;
		
		pay = worktime * BasePay ;

		if (pay <= 300)
		{
			tax = pay * less300;
		}
		else if (pay > 300 && pay <= 450)
		{
			tax = 300 * less300 + (pay - 300) * more300;
		}
		else
		{
			tax = 300 * less300 + 150 * more300 + (pay - 450) * more450;
		}
		printf("your pay is %.2fdollars, tax is %.2fdollars, neat pay is %.2fdollars.\n\n", pay, tax, pay - tax);
		printf("Enter you working time in this week: ");
		a = scanf_s("%lf", &worktime, 10);
	}
	
}

void p7_8(void)
{
	//修改练习7，让程序给出一个可供选择的工资等级菜单，使用switch完成工资等级的选择；
#define BasePay1 8.75
#define BasePay2 9.33
#define BasePay3 10.00
#define BasePay4 11.20
	int index;
	double BasePay_, worktime, pay, tax;
	
		for (int i = 0; i < 80; i++)
			printf("*");
		printf("\nEnter the number corresponding to the desired pay rate or action:\n");
		printf("1) $8.75/hr\t2) $9.33/hr\n3) $10.00/hr\t4) $11.20/hr\n5) quit\n");
		for (int i = 0; i < 80; i++)
			printf("*");
		printf("\n");
		scanf_s("%d", &index, 2);
		
	while (index > 0 && index < 5)
	{
		switch (index)
		{
			case 1: BasePay_ = BasePay1;
				break;
			case 2: BasePay_ = BasePay2;
				break;
			case 3: BasePay_ = BasePay3;
				break;
			case 4: BasePay_ = BasePay4;
				break;
			default: break;
		}

		printf("Enter you working time in this week: \n");
		int a = scanf_s("%lf", &worktime, 10);
		
			worktime = (worktime <= 40) ? worktime : 40 + (worktime - 40)*1.5;

			pay = worktime * BasePay_;

			if (pay <= 300)
			{
				tax = pay * less300;
			}
			else if (pay > 300 && pay <= 450)
			{
				tax = 300 * less300 + (pay - 300) * more300;
			}
			else
			{
				tax = 300 * less300 + 150 * more300 + (pay - 450) * more450;
			}
			printf("your pay is %.2fdollars, tax is %.2fdollars, neat pay is %.2fdollars.\n\n", pay, tax, pay - tax);
			
		for (int i = 0; i < 80; i++)
			printf("*");
		printf("\nEnter the number corresponding to the desired pay rate or action:\n");
		printf("1) $8.75/hr\t2) $9.33/hr\n3) $10.00/hr\t4) $11.20/hr\n5) quit\n");
		for (int i = 0; i < 80; i++)
			printf("*");
		printf("\n");
		scanf_s("%d", &index, 2);
		
	}
}

void p7_9(void)
{
	_Bool input_is_prime;
	int input;
	//编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数
	printf("Enter a integer:\n");
	scanf_s("%d", &input,5);
	while (input > 0)
	{
		for (; input > 0; input--)
		{
			input_is_prime = 1;
			for (int i = 2; i < input; i++)
			{
				
				if (input%i == 0)
				{
					input_is_prime = 0;
					break;
				}
								
			}
			if (input_is_prime)
			{
				printf("%d\n", input);
			}
			

		}
		
	}
	printf("done.");
}

void p8_1(void)
{
//统计在读到文件尾之前读取的字符数
	int count = 0;
	int ch;
	printf("enter some words, end with  Ctrl+Z:");
	while ((ch = getchar()) != EOF)
	{	
		count++;	
	}
	printf("the number of the words you enter is %d", count);
	return;
}

void p8_2(void)
{
	//在遇到EOF之前把输入作为字符流读取，程序要打印每个输入的字符及其相应的ASCII十进制值，注意在ASCII序列中
	//空格字符前面的字符都是非打印字符，要特殊处理这些字符，如果非打印字符是换行或制表符，则打印\……，否则使用控制字符表示法
	//例如ASCII的1是Ctrl+A可显示为^A，而A的ASCII值为Ctrl+A的值加上64，其他也有类似的关系，
	//除每次遇到换行符打印新的一行外，每行打印10对
	int i = 1;
	int ch;
	printf("enter some words, end with  ~:");
	printf("%c ASCII码是: %d\t", 'j', 'j');
	
	while ((ch = getchar()) != '~')//赋值=优先级没有！=高，于是之前错误地将true赋值给了ch
	{
		
		
		if (ch == '\n')
		{
			printf("\\n ASCII码是: %d\t", ch);
			i = 1;
		}
		else if (ch == '\t')
		{
			printf("\\t ASCII码是: %d\t", ch);
		}
		else if (ch < ' ')
		{
			printf("^%c ASCII码是: %d\t", ch+64,ch);
		}
		else
		{
			printf("%c ASCII码是: %d\t", ch, ch);
		}
		
		(i %3 == 0) ? printf("\n"),i++ : i++;
		
		
	}
	return;
}

void p8_3(void)
{
	//遇到~之前，把输入作为字符流读取，报告输入中的大写字母和小写字母个数，驾驶大小写字母数值是连续的，或者使用ctype.h中适合的分类函数
	int ch,Num = 0,num = 0;
	while ((ch = getchar()) != '~')
	{
		if (ch >= 'A'&&ch <= 'Z')//if(issupper(ch))
			Num++;
		if (ch >= 'a'&&ch <= 'z')//if(islower(ch))
			num++;
	}
	printf("there r %d Capital letters, and %d small letters ",Num,num);
	return;
}

void p8_4(void)
{
	//报告平均每个单词的字母数，不要抱空白统计为单词的字母，标点也不应
	int ch, Num_lets = 0,Num_words = 0;
	while ((ch = getchar()) != '~')
	{
		if (ispunct(ch) || isblank(ch))
		{
			Num_words++;
		}
		else if (isalpha(ch))
		{
			Num_lets++;
		}
		else
		{
			continue;
		}

	}
	printf("the average number of lettersin each word is %d ", Num_lets / Num_words);
	return;
}

void p8_5(void)
{
	//二分法猜数字
	int start = 0, end = 100;
	int num = (start+end)/2;
	char ch;
	_Bool wrong_guess = 1;
	printf("Plz imagine a number between0 and 100, i'll guess it:\n");
	do
	{
		printf("Is it %d?\n", num);
		printf("Bigger or smaller or right?\n");
		ch = getchar();
		while (getchar() != '\n')
			continue;
		if (ch == 'b' || ch == 'B')
		{
			end = num;
			num = (start + end) / 2;
		}
			
		else if (ch == 's' || ch == 'S')
		{
			start = num;
			num = (start+end)/2;
		}
			
		else if (ch == 'r' || ch == 'R')
		{
			printf("I know I'm right!,It is %d", num);
			wrong_guess = 0;
		}
		else
		{
			printf("plz enter B,S,or R!!");
		}
			

	}
	
	while (wrong_guess);
	
	
	return;
}

void p8_8(void)
{
	//显示一个提供加法、减法、乘法、除法的菜单，获得用户的选项后程序提示用户输入两个数字，然后执行用户刚才的操作，改程序只接受菜单提供的选项，程序使用float变量存储用户输入的数字，如果用户输入失败，则允许再次输入，进行除法运算时不为0除数
	_Bool go_on = 1;
	
	float first_n, second_n;
	while (go_on)
	{
		printf("Pick the operation u want to perform:\n");
		printf("a. add\ts. subtract\n");
		printf("m. multiply\td.divide\n");
		printf("q. quit\n");
		char ch = getchar();
		printf("you have press the %c button now.\n", ch);

		while (getchar() != '\n')//消除\n
		{
			continue;
		}
			
		
		if (ch == 'q')
		{
			printf("Bye");
			go_on = 0;
			break;
		}

		printf("Enter first float numbers to perform ur choise:\n");
		
		while (1 != scanf_s("%f", &first_n, 10))
		{
			printf("Enter a number such as 2.5,-1.7e8……:\n");
			scanf_s("%f", &first_n, 10);
		}
		printf("Enter second float numbers to perform ur choise:\n");
		
		while ((1 != scanf_s("%f", &second_n, 10)))
		{
			printf("Enter a number such as 2.5,-1.7e8……:\n");
			scanf_s("%f", &second_n, 10);
		}
		
		while (getchar() != '\n')//消除\n
		{
			continue;
		}
	

		switch (ch)
		{
		case 'a':
			printf("%f + %f = %f\n", first_n, second_n, first_n + second_n);
			break;
		case 's':
			printf("%f - %f = %f\n", first_n, second_n, first_n - second_n);
			break;
		case 'm':
			printf("%f * %f = %f\n", first_n, second_n, first_n * second_n);
			break;
		case 'd':
			while (second_n == 0)
			{
				printf("Enter a number other than 0:\n");
				scanf_s("%f", &second_n, 10);
			}

			while (getchar() != '\n')//消除\n
			{
				continue;
			}
			printf("%f / %f = %f\n", first_n, second_n, first_n / second_n);
			break;
		default:
			printf("plz pick the right choise.");
		}
	}
	
		
	return;

}

double sum_group(double ori[], int n)//计算数组前n项和
{
	double a = 0;
	for (int i = 0; i < n; i++)
	{
		a += ori[i];
	}

	return a;
}
int main()
{
	//p7_1();
	//p7_2();
	//p7_3();
	//p7_4();
	//p7_5();
	//p7_6();
	//p7_7();
	//p7_8();
	//p7_9();
	//p8_1();//EOF 在此计算机上只有在一行开始Ctrl+Z才算
	//p8_2();
	//p8_3();
	//p8_4();
	//p8_5();
	p8_8();


	

	//6.1编写一个程序，创建一个包含26个元素的数组，并在其中存储26个小写字母，打印数组的所有内容
	/*char ch[26];
	int i;
	for (i = 0; i < 26; i++)
	{
		ch[i] = 'a' + i;
		printf("%c ", ch[i]);
	}*/

	//6.2使用嵌套循环，按格式输出字符$
	/*int i,j;
	char ch[5] = "$$$$$";
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i;j++)
		{
			printf("%c", ch[j]);
		}
		printf("\n");
	}*/

	//6.3使用嵌套循环，打印字符F；FE；FED……
	/*	char lets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c",lets[5-j] );
		}
		printf("\n");
	}*/

	//6.5编写程序用户输入大写字母，使用嵌套循环输出金字塔形式字母
	/*char lett;
	printf("Enter a Capital letter:");
	scanf_s("%c", &lett,1);
	int i, j, k;//i表示行数；j表示每行空格数，k表示每行字母
	int Num = lett - 'A';
	
	for (i = 0; i <= Num; i++)
	{
		for (j = Num; j > i; j--)//打印空格
		{
			printf("-");
		}
		for (k = 0; k <= i; k++)//打印正序字母
		{
			printf("%c", 'A' + k);
		}
		for (k = 1; k <= i; k++)//打印倒序字母
		{
			printf("%c", 'A' + i - k);
		}
		for (j = Num; j > i; j--)//打印空格
		{
			printf("-");
		}
		printf("\n");
				
	}*/

	//6.6打印一个表格，每行打印一个整数，该数的平方、立方。要求用户输入表格的上下限
	/*	double limi[2];
	int i;

	printf("Enter the up and down limits of the digits table:\n(enter q to quit)");

	while (2 == scanf_s("%lf%lf", &limi[0], &limi[1], 10))
	{
		if (limi[0] != 0 || limi[1] != 1)
		{
			break;
		}
		if (limi[0] <= limi[1])
		{
			for (i = 1; pow(limi[0], i) <= limi[1]; i++)
			{
				printf("%.2lf\n", pow(limi[0], i));
			}
			
		}
		else
		{
			for (i = 1; pow(limi[1], i) <= limi[0]; i++)
			{
				printf("%.2lf\n", pow(limi[1], i));
			}
		}
	}
	printf("i quitted. bye.");*/

	//6.7把一个单词读入一个字符数组中，然后倒序打印单词，strlen()可用于计算数组最后一个字符的下标
	/*	char word[20];
	int i;
	printf("enter a word:");
	scanf_s("%s", word, 20);
	printf("the length of the word: %d\n", strlen(word));
	for (i = strlen(word)-1; i > 0; i--)
	{
		printf("%c", word[i]);
	}*/

	//6.8用户输入两个浮点数，打印两数之差除以两数乘积的结果，在用户输入非数字之前，程序循环处理每队值
/*double i, j;
printf("enter two digits: (enter q to quit)");
while (2 == scanf_s("%lf%lf", &i, &j))
{
	printf("the result is:%.2lf", (i - j) / i / j);
}*/

//6.10用户输入一个上线整数，一个下限整数，计算从上线到下限范围内所有整数的平方和，显示计算结果，然后继续提示，指导用户输入上线小于下限为止
/*int uplim, downlim ,i ,sum_square = 0;
printf("enter ur up limit and ur down limit:");

while (2 == scanf_s("%d%d", &uplim, &downlim))
{
	if (uplim >= downlim)
	{
		for (i = downlim; i <= uplim  ; i++)
		{
			sum_square += pow(i, 2);
		}
		printf("the sum of the square is %d", sum_square);
	}
	else{ break; }
}printf("bye.");*/

//6.12计算两个无限序列的总和，直到达到用户输入的某次数1+1/2+1/3+1/4……1-1/2+1/3-1/4……
/*int times;
double sums_p = 0, sums_m = 0;
printf("enter the limit times :");
while (1 == scanf_s("%d", &times,10))
{
	if (times > 0)
	{
		for (int i = 1; i <= times; i++)
		{
			sums_p += 1.0 / i;
			sums_m += 1.0 / i*pow(-1, i - 1);
		}
		printf("the sum of 1+1/2+1/3+1/4……is %.4lf\nthe sum of 1-1/2+1/3-1/4……is %.4lf\n"
			, sums_p, sums_m);
		sums_m = 0.0; sums_p = 0.0;//ln2;lnn
		printf("enter the limit times :");
	}
	else{ break; }
	
}
*/

//6.13创建一个8个元素的Int数组，分别把数组元素设置为2的前8次幂，使用for循环设置数组元素的值，使用dowhile显示数组元素的值
/*int digits[8];
for (int i = 0; i < 8; i++)
{
	digits[i] = pow(2, i + 1);
}
int i = 0;
do
{
	printf("2的%d次幂是%d\n",i+1, digits[i]);
	i++;
} 
while (i < 8);*/

//6.14创建两个包含8个元素的double类型数组，使用循环提示用户为第一个数组输入8个值，第二个数组严肃设置为第一个数组对应元素的累计之和，使用循环显示两个数组内容
/*double ori[8];
double sum[8];
printf("enter 8 numbers for ur original group:");
for (int i = 0; i < 8; i++)
{
	scanf_s("%lf", &ori[i],8);
}
for (int i = 0; i < 8; i++)
{
	printf("%.2lf\t", ori[i]);
}
printf("\n");
for (int i = 0; i < 8; i++)
{
	sum[i] = sum_group(ori,i+1);//使用函数计算前n项和，做数组
}
for (int i = 0; i < 8; i++)
{
	printf("%.2lf\t", sum[i]);
}*/

//6.15读取一行输入，将其倒序打印，可以吧输入存储在char数组中，假设不超过255，scanf只能读取一个字符，enter键产生一个换行
/*char input_c[255];
printf("enter a line of characters:\n");
int i = -1;
do
{
	i++;
	scanf_s("%c", &input_c[i],1);
} while (input_c[i] != '\n');
printf("the revert words r: ");
for (int j = i; j > 0; j--)
{
	//printf("%c", input_c[j-1]);
}printf("\n");*/

//6.16Daphne以10%的单利息投资了100刀，deirdre以5%的复合利息投资了100刀，计算多少年后Deieder投资额超过Daohne。
/*double d10 = 100, d5 = 100;
int i = 1;
while (d5 <= d10)
{
	d10 +=10;
	d5 *= 1.05;
	i++;
}
printf("After %d years, Daphne have %.2lfdollars, Deirdre have %.2fdollars.\n", 
	i, d10, d5);*/

//6.17Lucky赢了100万刀，把奖金存入年利率8%的账户，在每一年最后一天，它取出10万刀，计算多少年后他取出所有钱
/*double have = 1e6;
int i = 1;
while (have > 0)
{
	have *= 1.08;
	have -= 1e5;
	i++;
}
printf("After %d years, he has no money.\n",i);*/

//6.18R 加入了一个社交圈，起初他有5个朋友，第一周减少一个，剩下的数量翻倍，第二周减少2个，剩下的数量翻倍，显示每周朋友数，指导超过150；
/*int R = 5,weeks = 0;
while (R <= 150)
{
	R = (R - weeks) * 2;
	if (R > 150)
		break;
	printf("After %dweeks, he has %d friends.\n", weeks, R);
	weeks++;
}*/

	system("pause");
	return 0;
}

