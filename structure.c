/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct student 
{
    int roll;
    char name[20];
};
void read(struct student *x);
void display(struct student *x);
int main()
{
    
    struct student s[3],*p;
    p=&s[0];
    printf("Iam in main function\n");
    printf("Going to read function\n");
    read(p);
    printf("Back to read function\n");
    printf("Going to display function\n");
    display(p);
    printf("Back to main function\n");
    return 0;
    
}
void read(struct student *y)
{
    printf("Iam in read function\n");
    for(int i=0;i<3;i++)
    {
        printf("Enter student%d RollNo:",(i+1));
        scanf("%d",&((y+i)->roll));
        printf("Enter student%d Name:",(i+1));
        scanf(" %[^\n]",&((y+i)->name));
        
    }
    
}
void display(struct student *y)
{
    printf("Iam in display function\n");
       printf("S.No\t\tRollNo\t\tName\t\t\n");
        printf("______________________________________\n");
    for(int i=0;i<3;i++)
    {
        
        
    
        printf("%d\t\t",(i+1));
        printf("%d\t\t",((y+i)->roll));
        printf("%s\t\t",((y+i)->name));
        
        printf("\n");
    }
    
}


