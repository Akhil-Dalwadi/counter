#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXCHARS 80

int count(const int a[], int n, int seek);
bool contains(const int a1[], int n1, const int a2[], int n2);
int header(void);
int parseArgs(char argc, char *argv[], double *lower, double *upper, double *step);
int solicit_ppl(void);
int prn_result(double n1, double n2);
int getJoyNum(void);
int prnJoy(int opt);
