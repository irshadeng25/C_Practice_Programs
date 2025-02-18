#include<stdio.h>
#include<string.h>
struct child1
{
    char na[15];
    char roll[5];
    char school[30];
};

struct child2
{
    char na[15];
    char roll[5];
    char school[30];
};


struct Data
{
    char name[15];
    char mob[11];
    char addr[15];
    struct child1 child1info;
    struct child2 child2info;
};

int main()
{
    char pers[15];
   // printf("")
   struct Data person1, person2, person3, person4;;
   //printf("welcome to family data of person1\n");
    strcpy(person1.name, "Irshad");
    strcpy(person1.mob, "9123456789");
    strcpy(person1.addr, "Hyderabad");
    strcpy(person1.child1info.na,"1111");
    strcpy(person1.child1info.roll,"91");
    strcpy(person1.child1info.school,"Etechno");
    strcpy(person1.child2info.na,"2222");
    strcpy(person1.child2info.roll,"92");
    strcpy(person1.child2info.school,"Etechno");


    printf("welcome to family data of person2\n");
    strcpy(person2.name, "Surender");
    strcpy(person2.mob, "9123456789");
    strcpy(person2.addr, "Hyderabad");
   // printf("%s\t%s\t%s\n",person2.name, person2.mob,person2.addr);
    strcpy(person2.child1info.na,"3333");
    strcpy(person2.child1info.roll,"91");
    strcpy(person2.child1info.school,"Etechno");
    //printf("%s\t%s\t%s\n",person2.child1info.na,person2.child1info.roll,person2.child1info.school);
    strcpy(person2.child2info.na,"4444");
    strcpy(person2.child2info.roll,"92");
    strcpy(person2.child2info.school,"Etechno");
    //printf("%s\t%s\t%s\t",person2.child2info.na,person2.child2info.roll,person2.child2info.school);

    printf("welcome to family data of person3\n");
    strcpy(person3.name, "Manohar");
    strcpy(person3.mob, "9123456789");
    strcpy(person3.addr, "Hyderabad");
    //printf("%s\t%s\t%s\n",person3.name, person3.mob,person3.addr);
    strcpy(person3.child1info.na,"5555");
    strcpy(person3.child1info.roll,"91");
    strcpy(person3.child1info.school,"Etechno");
    //printf("%s\t%s\t%s\n",person3.child1info.na,person3.child1info.roll,person3.child1info.school);
    strcpy(person3.child2info.na,"6666");
    strcpy(person3.child2info.roll,"92");
    strcpy(person3.child2info.school,"Etechno");
    //printf("%s\t%s\t%s\t",person3.child2info.na,person3.child2info.roll,person3.child2info.school);

    printf("Enter the person details to verify\n");


    scanf("%s",pers);
    //printf("%s\n", pers);
    //printf("%s\n", person2.name);
    if (strcmp(person1.name,pers) == 0)
        {
    printf("Data is identified as below");

    printf("%s\t%s\t%s\n",person1.name, person1.mob,person1.addr);

    printf("%s\t%s\t%s\n",person1.child1info.na,person1.child1info.roll,person1.child1info.school);

    printf("%s\t%s\t%s\t",person1.child2info.na,person1.child2info.roll,person1.child2info.school);
        }
    else if (strcmp(person2.name,pers) == 0)
        {
    printf("Data is identified as below");

    printf("%s\t%s\t%s\n",person2.name, person2.mob,person2.addr);

    printf("%s\t%s\t%s\n",person2.child1info.na,person2.child1info.roll,person2.child1info.school);

    printf("%s\t%s\t%s\t",person2.child2info.na,person2.child2info.roll,person2.child2info.school);
        }
    else if (strcmp(person3.name,pers) == 0)
        {
    printf("Data is identified as below");

    printf("%s\t%s\t%s\n",person3.name, person3.mob,person3.addr);

    printf("%s\t%s\t%s\n",person3.child1info.na,person3.child1info.roll,person3.child1info.school);

    printf("%s\t%s\t%s\t",person3.child2info.na,person3.child2info.roll,person3.child2info.school);
        }
    else
    {
        printf("Please enter the data here : \n");
        printf("New structure member is created\n");
        scanf("%s%s%s",person4.name, person4.mob,person4.addr);



  //  printf("%s\t%s\t%s\n",person4.child1info.na,person4.child1info.roll,person4.child1info.school);

    //printf("%s\t%s\t%s\t",person4.child2info.na,person4.child2info.roll,person4.child2info.school);
    }
    printf("%s\t%s\t%s\n",person4.name, person4.mob,person4.addr);
}
