#include "general.h"

int header(void){
  printf("     F\t\t     C\n");
  printf("========================\n");
  return 0;
}

int parseArgs(char argc, char *argv[], double *lower, double *upper, double *step)
{
  int i;

  // command line input
  for (i = 0; i <  argc; i++)
  {
    if (!strcmp("-h", argv[i])){
      printf("HELP: output fahrenheit to celsius\n");
      printf("usage: f2c -l <lower> -u <upper> -s <step>\n\n");
      exit(0);
    }

    if (!strcmp("-l", argv[i])){
      //printf("start: ");
      //puts(argv[i+1]);
      *lower = *upper = atof(argv[i+1]);
    }

    if (!strcmp("-u", argv[i])){
      //printf("end: ");
      //puts(argv[i+1]);
      *upper = atof(argv[i+1]);
    }
    if (!strcmp("-s", argv[i])){
      //printf("step: ");
      //puts(argv[i+1]);
      *step = atof(argv[i+1]);
    }
  }

  return 0;
}

int solicit_ppl(void)
{
  printf("Give me two numbers: ");
  return (0);
}

int prn_result(double n1, double n2)
{
  printf("%f times %f = %f\n", n1,n2, n1*n2);

  return 0;
}

int getJoyNum(void)
{
  int opt = -1;
  do
  {
    printf("Give me a num : ");
    scanf("%d",&opt);
  }
  while(opt < 1 || opt > 100);
  return opt;
}


int prnJoy(int opt)
{
  int i,j;
  for (i = 0; i < opt ; i++){
    for (j = 0; j < i ; j++)
      printf("Hi ");
    printf("\n");
  }
  for (i = opt; i > 0 ; i--){
    for (j = 0; j < i ; j++)
      printf("Hi ");
    printf("\n");
  }
  return 0;
}

int count(const int a[], int n, int seek)
{
  int i;
  int counting = 0;
  for (i = 0; i < n; i++)
  {
    if (seek == a[i])
      counting++;
  }
  return counting;
}

bool contains(const int a1[], int n1, const int a2[], int n2)
{
  int cnt1;
  int cnt2;
  int a2val;
  int i;

  // loop over a2[]
  for (i = 0; i < n2 ; i++)
  {
    // get current a2[] value
    a2val = a2[i];

    //find count in a1[]
    cnt1 = count(a1,n1,a2[i]);
    //find count in a2[]
    cnt2 = count(a2,n2,a2[i]);

    printf("a2[%d] = %d  \t a1_cnt = %d \t a2_cnt = %d\n",
        i,a2val,cnt1,cnt2);

    // a1 needs as many vals as a2 has
    if (cnt1 < cnt2)
      return false;
  }
  // a1[] has enough of every a2[] value
  return true;
}



