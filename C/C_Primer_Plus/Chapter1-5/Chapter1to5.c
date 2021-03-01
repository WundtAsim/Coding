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
	printf("%5.2f°C = %5.2f°F = %5.2f°K\n",F,C,K);
}

int main(void)
{
	/*scanf要两次getchar()*/
	/*float weight;
	printf("plz input ur :");
	scanf_s("%f",&weight);
	getchar();
	printf("ok\n");*/
	
	/*整数、浮点数上溢*/
	/*int big_int = pow(2,31)-1;//the max int data is 2^31-1
	float big_float = 3.4E38;//the max float data is 3.4e38
	float small_int = 10.0 / 3;
	printf("the big int data is %d, and plus 1 is%d\n",big_int,big_int+1);
	printf("the big float data is %f,\nand multiply 10 is %f\n", big_float,big_float*10);
	printf("the bit of float is %f\n", small_int);//resolution of float is 6 bit;*/

	/*输入一个ASCII码，打印输入的字符*/
	/*int ascii;
	printf("plz input a ASCII(ex: 66):\n");
	scanf_s("%d", &ascii); getchar();
	printf("so the charactor is: %c\n",ascii);*/

	/*发警报，打印文本*/
	/*	printf("\a");
	printf("Startled by the sudden sound, Sally shouted,\n");
	printf("\"By the Great Pumpkin, what was that!\"");*/

	/*读取浮点数，打印成小数点形式，载打印成指数形式，再打印成p计数法*/
	/*float a;
	printf("plz input a float data: ");
	scanf_s("%f", &a); getchar();
	printf("so the fixed point notation is %f,\n   the exponential notion is %e, \n   the p notion is %a\n",
		a,a,a);*/

	/*一年3.156e7秒，提示输入年龄，显示对应秒*/
	/*double a;
	printf("plz input ur age(ex:24):");
	scanf_s("%lf", &a); getchar();
	printf("the time past: %fs\n", a*3.156e7);*/

	/*通过夸脱数计算水分子数量*/
	/*double a,b;
	printf("plz input the quarts of water:");
	scanf_s("%lf", &a); getchar();
	b = a * 950 / 3e-23;
	printf("the number of water is: %g\n", b);*/

	/*根据身高厘米数计算英寸数*/
	/*double a;
	printf("plz input ur height(cm):");
	scanf_s("%lf", &
		a); getchar();
	printf("so ur height is %g cm, equal to %g inch\n",a , a / 2.54);*/

	/*用户输入杯数，以品脱，盎司，汤勺，茶勺显示等价容量，思考为何用浮点比整型合适？*/
	/*printf("plz input the cups of water:");
	double a;
	scanf_s("%lf", &a); getchar();
	printf("that equal to %g pints, %g ounce, %g soup, %g tea\n", a / 2, a * 8, a * 8 * 2, a * 8 * 2 * 3);*/
	
	/*用户输入姓名，打印姓名带双引号、在宽度20字段右端打印姓名、在左端打印、在比姓名宽度3的字段中打印姓名*/
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

	/*读取一个浮点数，先以小数点计数法打印，然后以指数计数法打印*/
	/*double a, b;
	printf("输入：");
	scanf_s("%lf", &a);
	printf(" 写作 %.1f = %e\n", a, a);
	printf("再输入：");
	scanf_s("%lf", &b);
	printf(" 写作 %+.3f = %.3e\n", b, b);*/

	/*用户输入身高（英寸）和姓名，然后输出信息*/
	/*float height;
	char name[20];
	printf("plz input ur height and ur name with a \", \"in the middle:");
	scanf_s("%g,%s", &height, name,20);
	printf("%s, you are %f feet tall.", name, height);*/

	/*用户输入以兆位每秒（Mb/s）为单位的下载速度和以兆字节（MB）为单位的文件大小。程序计算文件的下载时间*/
	/*float size,speed;
	printf("plz input the size of ur file(MB) and ur internet speed(Mb/s) "
		   "with a \",\"in the middle:");
	scanf_s("%f,%f", &size, &speed);
	printf("At %g megabits per seconf,a file of %g megabytes\n "
		   "downloads in %g seconds.", speed, size, size * 8 / speed);*/

	/*按格式输出输出用户姓名分别的字母数*/
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

	/*将 一个double类型的变量设置为1.0/3.0，一个float类型的变量设置为1.0/3.0.分别
	显示两次计算结果各3次，一次显示小数点后6位数字；一次显示小数点后12位数字；
	一次显示小数点偶16位数字。程序包含float.h并显示FLT_DIG和DBL_DIG*/
	/*double a_dbl;
	float a_flt;
	a_dbl = 1.0 / 3.0; a_flt = 1.0 / 3.0;
	printf("6位double:%.6lf\t\t6位float:%.6f\n",a_dbl,a_flt);
	printf("12位double:%.12lf\t\t12位float:%.12f\n",a_dbl,a_flt);
	printf("16位double:%.16lf\t\t16位float:%.16f\n", a_dbl, a_flt);
	printf("float值为：%f\ndouble值为：%lf\n",FLT_DIG,DBL_DIG);*/

//5.1 把用分钟表示的时间转换成用小时和分钟表示的时间，使用#define或const创建一个表示60的符号常量，通过while让用户输入，指导小于等于0停止
/*const int min_p_hour = 60;
int minuts = 10;
while (minuts > 0)
{
	printf("plz enter a period of time ,expressed in minutes:");
	scanf_s("%d", &minuts, 10);
	if (minuts < 0){ printf("u r entering a negative number,error!"); break; }
	printf("so it equal to %dhours,%dminuts.\n", minuts / min_p_hour, minuts%min_p_hour);
}*/

//5.2 用户输入一个整数，打印从该数到比该数大10的所有整数，打印的各个值之间用一个空格，制表符或换行符分开；
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

//5.3 用户输入天数，将其转换为周数和天数
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

//5.4 用户输入一个身高厘米，分别以厘米和英寸显示，允许有小数部分，能够重读输入。
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

//5.8 显示求模值结果， 把用户输入的第一个整数作为求魔运算符的第二个运算对象，该数在运算过程中保持不变，用户后面输入的数时第一个运算对象。
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

//5.9 用户输入一个华氏温度，程序读取double类型的值作为温度值，并把该值传递给一个函数，用于计算摄氏温度和开式温度，并以小数点后2位数字精度显示三种温度。

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