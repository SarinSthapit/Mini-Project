#include <stdio.h>
#include "colours.h"

//Functions for differnt colors
void red ()
{
  printf("\033[1;31m");
}

void blue ()
{
  printf("\033[0;34m");
}

void green()
{
  printf("\033[0;32m");
}

void purple()
{
  printf("\033[0;35m");
}

void sky_blue()
{
  printf("\033[0;36m");
}

void yellow()
{
  printf("\033[01;33m");
}

void reset ()
{
  printf("\033[0m");
}