#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

double min_2(double x, double y);

void chline(char ch, int i, int j);

double haraverage(double a, double b);

void larger_of(double *a, double *b);

void large_sort(double *a, double *b,double *c);

int alpha_cal(int a);

double power_i(double a, int b);

void to_base_n(int base, int n);

void Fibonacci(unsigned n);

void p10_1(void);

void copy_arr(double *target, double*source, int n);//p10_2���Ӻ��������ڿ�������
void copy_ptr(double *target, double*source, int n);//p10_2���Ӻ��������ڿ�������
void copy_ptrs(double *target, double*source, double *source_n);//p10_2���Ӻ��������ڿ�������
void p10_2(void);

int max_array(int *array, int n);
void p10_3(void);

int *array_reverse(int *array, int n);
void p10_6(void);

void p10_7(void);

void p10_8(void);

double *copy_2d(double source[][5], double target[][5], int rows);//p10_9�Ӻ��������ڿ�����ά����
void display(double source[][5], double target[][5], int rows);//p10_9�Ӻ�����������ʾ������ά����
void p10_9(void);

void merge_array(int *source1, int *source2, int *target, int n);//p10_10�Ӻ������ϲ�����һά����
void p10_10(void);

void print_a(int *a, int n);//p10_11�Ӻ��������ڴ�ӡ��ά����
void double_array(int *a[][5], int n);//p10_11�Ӻ��������ڽ�����ÿ����double
void p10_11(void);

double average_a(double *a, int n);//p10_13�Ӻ��������ڼ���һά�����ֵ
double average_2d(double a[][5], int n);//p10_13�Ӻ��������ڼ����ά�����ܾ�ֵ
double max_2d(double a[][5], int n);//p10+13�Ӻ����������Ҷ�ά�������ֵ
void p10_13(void);

