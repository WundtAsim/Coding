#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>


void p7_1(void)
{
	//��дһ�������ȡ���룬����#�ַ�ֹͣ��Ȼ�󱨸��ȡ�Ŀո����������������������ַ�������
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
	//��ȡ����ֱ��#�ַ�Ϊֹ�������ӡÿ��������ַ��Լ����Ӧ��ASCII�룬һ�д�ӡ5���ַ�������ʹ���ַ���������ģ�������ÿ8��ѭ������ʱ��ӡһ�����з�
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
	//��ȡ����ֱ���û�����0����������󣬳��򱨸��û������ż��������ƽ��ֵ����������������ƽ��ֵ��
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
	//ʹ��if else ����дһ�������ȡ���룬����#Ϊֹ��ʹ�ø�̾���滻��ţ���������̾���滻ԭ���ĸ�̾�ţ���󱨸�����˶����滻��
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
	//ʹ��if else ����дһ�������ȡ���룬����#Ϊֹ��ʹ�ø�̾���滻��ţ���������̾���滻ԭ���ĸ�̾�ţ���󱨸�����˶����滻��
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
	//��д�����ȡ���룬ֱ��#Ϊֹ������ei���ֵĴ�����ע�����Ҫ��¼һ���ַ��͵�ǰ�Թţ���Receive your eieio award���������������
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
	//��ʾ�û�����һ�ܹ���Сʱ����Ȼ���ӡ�����ܶ˰��;����롣��������1000/h,�Ӱࣨ����40Сʱ�� = 1.5��ʱ�䣬˰�ʣ�ǰ300 15%����150 20%������25%��
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
	//�޸���ϰ7���ó������һ���ɹ�ѡ��Ĺ��ʵȼ��˵���ʹ��switch��ɹ��ʵȼ���ѡ��
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
	//��дһ������ֻ�������������룬Ȼ����ʾ����С�ڻ���ڸ���������
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
//ͳ���ڶ����ļ�β֮ǰ��ȡ���ַ���
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
	//������EOF֮ǰ��������Ϊ�ַ�����ȡ������Ҫ��ӡÿ��������ַ�������Ӧ��ASCIIʮ����ֵ��ע����ASCII������
	//�ո��ַ�ǰ����ַ����ǷǴ�ӡ�ַ���Ҫ���⴦����Щ�ַ�������Ǵ�ӡ�ַ��ǻ��л��Ʊ�������ӡ\����������ʹ�ÿ����ַ���ʾ��
	//����ASCII��1��Ctrl+A����ʾΪ^A����A��ASCIIֵΪCtrl+A��ֵ����64������Ҳ�����ƵĹ�ϵ��
	//��ÿ���������з���ӡ�µ�һ���⣬ÿ�д�ӡ10��
	int i = 1;
	int ch;
	printf("enter some words, end with  ~:");
	printf("%c ASCII����: %d\t", 'j', 'j');
	
	while ((ch = getchar()) != '~')//��ֵ=���ȼ�û�У�=�ߣ�����֮ǰ����ؽ�true��ֵ����ch
	{
		
		
		if (ch == '\n')
		{
			printf("\\n ASCII����: %d\t", ch);
			i = 1;
		}
		else if (ch == '\t')
		{
			printf("\\t ASCII����: %d\t", ch);
		}
		else if (ch < ' ')
		{
			printf("^%c ASCII����: %d\t", ch+64,ch);
		}
		else
		{
			printf("%c ASCII����: %d\t", ch, ch);
		}
		
		(i %3 == 0) ? printf("\n"),i++ : i++;
		
		
	}
	return;
}

void p8_3(void)
{
	//����~֮ǰ����������Ϊ�ַ�����ȡ�����������еĴ�д��ĸ��Сд��ĸ��������ʻ��Сд��ĸ��ֵ�������ģ�����ʹ��ctype.h���ʺϵķ��ຯ��
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
	//����ƽ��ÿ�����ʵ���ĸ������Ҫ���հ�ͳ��Ϊ���ʵ���ĸ�����Ҳ��Ӧ
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
	//���ַ�������
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
	//��ʾһ���ṩ�ӷ����������˷��������Ĳ˵�������û���ѡ��������ʾ�û������������֣�Ȼ��ִ���û��ղŵĲ������ĳ���ֻ���ܲ˵��ṩ��ѡ�����ʹ��float�����洢�û���������֣�����û�����ʧ�ܣ��������ٴ����룬���г�������ʱ��Ϊ0����
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

		while (getchar() != '\n')//����\n
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
			printf("Enter a number such as 2.5,-1.7e8����:\n");
			scanf_s("%f", &first_n, 10);
		}
		printf("Enter second float numbers to perform ur choise:\n");
		
		while ((1 != scanf_s("%f", &second_n, 10)))
		{
			printf("Enter a number such as 2.5,-1.7e8����:\n");
			scanf_s("%f", &second_n, 10);
		}
		
		while (getchar() != '\n')//����\n
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

			while (getchar() != '\n')//����\n
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

double sum_group(double ori[], int n)//��������ǰn���
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
	//p8_1();//EOF �ڴ˼������ֻ����һ�п�ʼCtrl+Z����
	//p8_2();
	//p8_3();
	//p8_4();
	//p8_5();
	p8_8();


	

	//6.1��дһ�����򣬴���һ������26��Ԫ�ص����飬�������д洢26��Сд��ĸ����ӡ�������������
	/*char ch[26];
	int i;
	for (i = 0; i < 26; i++)
	{
		ch[i] = 'a' + i;
		printf("%c ", ch[i]);
	}*/

	//6.2ʹ��Ƕ��ѭ��������ʽ����ַ�$
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

	//6.3ʹ��Ƕ��ѭ������ӡ�ַ�F��FE��FED����
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

	//6.5��д�����û������д��ĸ��ʹ��Ƕ��ѭ�������������ʽ��ĸ
	/*char lett;
	printf("Enter a Capital letter:");
	scanf_s("%c", &lett,1);
	int i, j, k;//i��ʾ������j��ʾÿ�пո�����k��ʾÿ����ĸ
	int Num = lett - 'A';
	
	for (i = 0; i <= Num; i++)
	{
		for (j = Num; j > i; j--)//��ӡ�ո�
		{
			printf("-");
		}
		for (k = 0; k <= i; k++)//��ӡ������ĸ
		{
			printf("%c", 'A' + k);
		}
		for (k = 1; k <= i; k++)//��ӡ������ĸ
		{
			printf("%c", 'A' + i - k);
		}
		for (j = Num; j > i; j--)//��ӡ�ո�
		{
			printf("-");
		}
		printf("\n");
				
	}*/

	//6.6��ӡһ�����ÿ�д�ӡһ��������������ƽ����������Ҫ���û��������������
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

	//6.7��һ�����ʶ���һ���ַ������У�Ȼ�����ӡ���ʣ�strlen()�����ڼ����������һ���ַ����±�
	/*	char word[20];
	int i;
	printf("enter a word:");
	scanf_s("%s", word, 20);
	printf("the length of the word: %d\n", strlen(word));
	for (i = strlen(word)-1; i > 0; i--)
	{
		printf("%c", word[i]);
	}*/

	//6.8�û�������������������ӡ����֮����������˻��Ľ�������û����������֮ǰ������ѭ������ÿ��ֵ
/*double i, j;
printf("enter two digits: (enter q to quit)");
while (2 == scanf_s("%lf%lf", &i, &j))
{
	printf("the result is:%.2lf", (i - j) / i / j);
}*/

//6.10�û�����һ������������һ��������������������ߵ����޷�Χ������������ƽ���ͣ���ʾ��������Ȼ�������ʾ��ָ���û���������С������Ϊֹ
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

//6.12���������������е��ܺͣ�ֱ���ﵽ�û������ĳ����1+1/2+1/3+1/4����1-1/2+1/3-1/4����
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
		printf("the sum of 1+1/2+1/3+1/4����is %.4lf\nthe sum of 1-1/2+1/3-1/4����is %.4lf\n"
			, sums_p, sums_m);
		sums_m = 0.0; sums_p = 0.0;//ln2;lnn
		printf("enter the limit times :");
	}
	else{ break; }
	
}
*/

//6.13����һ��8��Ԫ�ص�Int���飬�ֱ������Ԫ������Ϊ2��ǰ8���ݣ�ʹ��forѭ����������Ԫ�ص�ֵ��ʹ��dowhile��ʾ����Ԫ�ص�ֵ
/*int digits[8];
for (int i = 0; i < 8; i++)
{
	digits[i] = pow(2, i + 1);
}
int i = 0;
do
{
	printf("2��%d������%d\n",i+1, digits[i]);
	i++;
} 
while (i < 8);*/

//6.14������������8��Ԫ�ص�double�������飬ʹ��ѭ����ʾ�û�Ϊ��һ����������8��ֵ���ڶ���������������Ϊ��һ�������ӦԪ�ص��ۼ�֮�ͣ�ʹ��ѭ����ʾ������������
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
	sum[i] = sum_group(ori,i+1);//ʹ�ú�������ǰn��ͣ�������
}
for (int i = 0; i < 8; i++)
{
	printf("%.2lf\t", sum[i]);
}*/

//6.15��ȡһ�����룬���䵹���ӡ�����԰�����洢��char�����У����費����255��scanfֻ�ܶ�ȡһ���ַ���enter������һ������
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

//6.16Daphne��10%�ĵ���ϢͶ����100����deirdre��5%�ĸ�����ϢͶ����100��������������DeiederͶ�ʶ��Daohne��
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

//6.17LuckyӮ��100�򵶣��ѽ������������8%���˻�����ÿһ�����һ�죬��ȡ��10�򵶣�������������ȡ������Ǯ
/*double have = 1e6;
int i = 1;
while (have > 0)
{
	have *= 1.08;
	have -= 1e5;
	i++;
}
printf("After %d years, he has no money.\n",i);*/

//6.18R ������һ���罻Ȧ���������5�����ѣ���һ�ܼ���һ����ʣ�µ������������ڶ��ܼ���2����ʣ�µ�������������ʾÿ����������ָ������150��
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

