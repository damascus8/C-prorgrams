


// Cprogram to find avg raimfall from 5 years rainfall data
/*
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
        ==================   %%%%%%%%%%%%%%%                */

#include <stdio.h>
# define YEARS 5
# define MONTHS 12
int main ()
{
    // intialize rainfall data for 2011-15
    int years,months;
    // float subtotal=0,total=0;
  float rains[YEARS][MONTHS] = {
{1.69581,
4.24872,
4.19899,
0.99769,
1.37616,
2.70578,
2.87391,
0.66362,
2.10669,
4.81288,
4.25251,
4.82256},
{2.15929,
0.07171,
2.91699,
3.31547,
2.01681,
4.69392,
2.37095,
1.50480,
3.82418,
2.11519,
3.32657,4.75422}, {3.29525,
3.48836,
3.01661,
1.47437,
0.70795,
1.44708,
4.30152,
4.78082,
3.25911,
2.57760,
1.45680,
4.14328}, {1.44756,
2.34074,
2.03945,
1.72783,
0.48658,
2.69600,
1.95233,
2.89747,
2.83161,
1.15061,
0.09275,
2.97509} , {0.25072,
0.82143,
0.25810,
1.92670,
0.21608,
1.88120,
1.86463,
1.34374,
1.04640,
0.53821,
0.68818,
0.61893}
  };
printf("YEARS \t\tRAINFALL in(inches)\n");
/*  for (years = 0; years<YEARS; years++)
    {
      for (months=0;months<MONTHS; months++)
	{
// 	  printf (" %.2f ", rains[years][months]);
	}
      printf ("\n");
    }
*/
float total=0,subtotal=0;
  for (years = 0; years<YEARS; years++)
    {
      for (months=0;months<MONTHS; months++)
	{
	    
	    subtotal=subtotal+rains[years][months];
	}
	printf(" %d \t\t  %.2f \n",2010+years,subtotal);
	total = total+subtotal;
	}
    printf("\n \n");
    printf("the avg yearly rainfall = %.2f ",total/YEARS);
    printf("MONTHLY AVERAGE:\n\n");
    printf("Jan  Feb  Mar  Apr  May  June  July  August  Sept  Oct  Nov  Dec\n");
  subtotal=0,total=0;
    for(months=0;months<MONTHS;months++)
    {
        for(years=0; years<YEARS;years++)
         {
            subtotal=subtotal+ rains[years][months];
         }
         printf("%.2f ",subtotal/YEARS);  
    }

  return 0;
}
