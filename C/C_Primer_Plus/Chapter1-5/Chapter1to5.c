#include <stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<float.h>
void jolly(void){
	printf("For he's a jolly fellow!\n");
}

void Tempertures(double F)
{
	const double five = 5.0;
	const double nine = 9.0;
	const double thrity = 32.0;
	const double twohundred = 273.16;
	double C = five / nine*(F - thrity);
	double K = F + twohundred;
	printf("%5.2f��C = %5.2f��F = %5.2f��K\n",F,C,K);
}

int main(void)
{
	/*scanfҪ����getchar()*/
	/*float weight;
	printf("plz input ur :");
	scanf_s("%f",&weight);
	getchar();
	printf("ok\n");*/
	
	/*����������������*/
	/*int big_int = pow(2,31)-1;//the max int data is 2^31-1
	float big_float = 3.4E38;//the max float data is 3.4e38
	float small_int = 10.0 / 3;
	printf("the big int data is %d, and plus 1 is%d\n",big_int,big_int+1);
	printf("the big float data is %f,\nand multiply 10 is %f\n", big_float,big_float*10);
	printf("the bit of float is %f\n", small_int);//resolution of float is 6 bit;*/

	/*����һ��ASCII�룬��ӡ������ַ�*/
	/*int ascii;
	printf("plz input a ASCII(ex: 66):\n");
	scanf_s("%d", &ascii); getchar();
	printf("so the charactor is: %c\n",ascii);*/

	/*����������ӡ�ı�*/
	/*	printf("\a");
	printf("Startled by the sudden sound, Sally shouted,\n");
	printf("\"By the Great Pumpkin, what was that!\"");*/

	/*��ȡ����������ӡ��С������ʽ���ش�ӡ��ָ����ʽ���ٴ�ӡ��p������*/
	/*float a;
	printf("plz input a float data: ");
	scanf_s("%f", &a); getchar();
	printf("so the fixed point notation is %f,\n   the exponential notion is %e, \n   the p notion is %a\n",
		a,a,a);*/

	/*һ��3.156e7�룬��ʾ�������䣬��ʾ��Ӧ��*/
	/*double a;
	printf("plz input ur age(ex:24):");
	scanf_s("%lf", &a); getchar();
	printf("the time past: %fs\n", a*3.156e7);*/

	/*ͨ������������ˮ��������*/
	/*double a,b;
	printf("plz input the quarts of water:");
	scanf_s("%lf", &a); getchar();
	b = a * 950 / 3e-23;
	printf("the number of water is: %g\n", b);*/

	/*�����������������Ӣ����*/
	/*double a;
	printf("plz input ur height(cm):");
	scanf_s("%lf", &
		a); getchar();
	printf("so ur height is %g cm, equal to %g inch\n",a , a / 2.54);*/

	/*�û����뱭������Ʒ�ѣ���˾�����ף�������ʾ�ȼ�������˼��Ϊ���ø�������ͺ��ʣ�*/
	/*printf("plz input the cups of water:");
	double a;
	scanf_s("%lf", &a); getchar();
	printf("that equal to %g pints, %g ounce, %g soup, %g tea\n", a / 2, a * 8, a * 8 * 2, a * 8 * 2 * 3);*/
	
	/*�û�������������ӡ������˫���š��ڿ��20�ֶ��Ҷ˴�ӡ����������˴�ӡ���ڱ��������3���ֶ��д�ӡ����*/
	/*char lname[20];
	char fname[20];
	printf("plz input ur first name: ");
	scanf_s("%s", fname,20);
	printf("plz input ur last name: ");
	scanf_s("%s", lname,20);
	printf("\nHello, \"%s %s\"\n", fname,lname);
	printf("\"%*s %s\"\n", 20-strlen(fname)-strlen(lname)-1 , fname, lname);
	printf("\"%-s %-13s\"\n",fname, lname);
	printf("\"%*s%s\"\n",strlen(fname)+3,fname, lname);*/

	/*��ȡһ��������������С�����������ӡ��Ȼ����ָ����������ӡ*/
	/*double a, b;
	printf("���룺");
	scanf_s("%lf", &a);
	printf(" д�� %.1f = %e\n", a, a);
	printf("�����룺");
	scanf_s("%lf", &b);
	printf(" д�� %+.3f = %.3e\n", b, b);*/

	/*�û�������ߣ�Ӣ�磩��������Ȼ�������Ϣ*/
	/*float height;
	char name[20];
	printf("plz input ur height and ur name with a \", \"in the middle:");
	scanf_s("%g,%s", &height, name,20);
	printf("%s, you are %f feet tall.", name, height);*/

	/*�û���������λÿ�루Mb/s��Ϊ��λ�������ٶȺ������ֽڣ�MB��Ϊ��λ���ļ���С����������ļ�������ʱ��*/
	/*float size,speed;
	printf("plz input the size of ur file(MB) and ur internet speed(Mb/s) "
		   "with a \",\"in the middle:");
	scanf_s("%f,%f", &size, &speed);
	printf("At %g megabits per seconf,a file of %g megabytes\n "
		   "downloads in %g seconds.", speed, size, size * 8 / speed);*/

	/*����ʽ�������û������ֱ����ĸ��*/
	/*char fname[10];
	char lname[10];
	int flen, llen;
	printf("plz input ur first name :");
	scanf_s("%s", fname,10);
	printf("plz input ur last name :");
	scanf_s("%s", lname, 10);
	flen = strlen(fname); llen = strlen(lname);
	printf("%s %s\n%*d%*d\n", fname, lname, flen,flen, flen,llen);
	printf("%s %s\n%-*d%-*d\n", fname, lname, flen,flen, flen,llen);*/

	/*�� һ��double���͵ı�������Ϊ1.0/3.0��һ��float���͵ı�������Ϊ1.0/3.0.�ֱ�
	��ʾ���μ�������3�Σ�һ����ʾС�����6λ���֣�һ����ʾС�����12λ���֣�
	һ����ʾС����ż16λ���֡��������float.h����ʾFLT_DIG��DBL_DIG*/
	/*double a_dbl;
	float a_flt;
	a_dbl = 1.0 / 3.0; a_flt = 1.0 / 3.0;
	printf("6λdouble:%.6lf\t\t6λfloat:%.6f\n",a_dbl,a_flt);
	printf("12λdouble:%.12lf\t\t12λfloat:%.12f\n",a_dbl,a_flt);
	printf("16λdouble:%.16lf\t\t16λfloat:%.16f\n", a_dbl, a_flt);
	printf("floatֵΪ��%f\ndoubleֵΪ��%lf\n",FLT_DIG,DBL_DIG);*/

//5.1 ���÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䣬ʹ��#define��const����һ����ʾ60�ķ��ų�����ͨ��while���û����룬ָ��С�ڵ���0ֹͣ
/*const int min_p_hour = 60;
int minuts = 10;
while (minuts > 0)
{
	printf("plz enter a period of time ,expressed in minutes:");
	scanf_s("%d", &minuts, 10);
	if (minuts < 0){ printf("u r entering a negative number,error!"); break; }
	printf("so it equal to %dhours,%dminuts.\n", minuts / min_p_hour, minuts%min_p_hour);
}*/

//5.2 �û�����һ����������ӡ�Ӹ������ȸ�����10��������������ӡ�ĸ���ֵ֮����һ���ո��Ʊ�����з��ֿ���
/*int a,b;
printf("enter a num:");
scanf_s("%d", &a, 10);
b = a;
printf("so the next 5 nums are :");
while ((a > b || a == b) & (a < b + 5 || a == b + 5))
{
	printf("%d\t", a);
	a++;
}printf("\n");*/

//5.3 �û���������������ת��Ϊ����������
/*int a;
printf("enter a num expressed in days:");
scanf_s("%d", &a,10);
while (a > 0)
{
	printf("%d days are %d weeks, %d days.\n", a, a / 7, a % 7);
	printf("enter the number of days:");
	scanf_s("%d", &a, 10);
}
printf("bye\n");*/

//5.4 �û�����һ��������ף��ֱ������׺�Ӣ����ʾ��������С�����֣��ܹ��ض����롣
/*printf("enter a number of height expressed in milimeter:");
double height,inches;
int feet;
scanf_s("%lf", &height);
while (height > 0)
{
	feet = height / 2.54 / 12;
	inches = height / 2.54 - feet*12;
	printf("the height equal to %g milimeter, %dfeet, %5.1finches.\n", height, feet, inches);
	printf("enter a number of height expressed in milimeter:(<=0 to quit)");
	scanf_s("%lf", &height);
}*/

//5.8 ��ʾ��ģֵ����� ���û�����ĵ�һ��������Ϊ��ħ������ĵڶ���������󣬸�������������б��ֲ��䣬�û������������ʱ��һ���������
/*int a, b;
printf("enter a integer(b):");
scanf_s("%d", &b, 7);
printf("enter a another integer(a):");
scanf_s("%d", &a);
while (a > 0 & b > 0)
{
	printf("so, %d \% %d is %d\n", a, b, a%b);
	printf("enter a integer(b):");
	scanf_s("%d", &b, 7);
	printf("enter a another integer(a):");
	scanf_s("%d", &a);
}printf("Done");*/

//5.9 �û�����һ�������¶ȣ������ȡdouble���͵�ֵ��Ϊ�¶�ֵ�����Ѹ�ֵ���ݸ�һ�����������ڼ��������¶ȺͿ�ʽ�¶ȣ�����С�����2λ���־�����ʾ�����¶ȡ�

double F;
printf("enter a number of terperture:");
//scanf_s("%lf", F,7);
while (1 == scanf_s("%lf", &F, 7))
{
	Tempertures(F);
	printf("enter a number of terperture:");
}



	




	system("pause");
	return 0;
}