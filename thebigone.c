/* Calculates what year some one will turn a specific age */
#include <stdio.h>
#define Target_Age 40

int year1, year2;

int calcYear(int year1);

int main( void )
{
  //Ask for birth year
  printf("What year was the person born? ");
  printf("Enter as a 4-digit year (YYYY): ");
  scanf(" %d", &year1);

  // Calculate the future year and display it
  year2 = calcYear(year1);

  printf("Someone born in %d will be %d in %d.",
          year1, Target_Age, year2);

  return 0;
}

/* Function that gets furute Year */
int calcYear(int year1)
{
  return(year1 + Target_Age);
}
