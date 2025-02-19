9#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name[10];
    int *modelno;
};

int main()
{
  //struct car mycar;
  //struct car *cartype;
  //cartype = &mycar;
 // int *p= (int *)malloc1(10*sizeof(int))
  struct car *carmode = (struct car*)malloc(10 * sizeof(struct car));

  if (carmode!=NULL)
  {
     // printf("memory is not created\n");

  strcpy(carmode->name,"BMW");
  carmode->modelno = 70;

  printf("%s\n",carmode->name);
  printf("%d\n",carmode->modelno);

}
}
