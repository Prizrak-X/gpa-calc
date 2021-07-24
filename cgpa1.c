#include<stdio.h>
#include<stdlib.h>
#include<string.h>
float Credits[10], CGPA = 0.0, GradePoint[10];
float GradePointTotal, CreditsTotal;
int Input, i, SubjectNumber;
char Grade[20][20], Subject[20][20];
void GPA4();
void GPA41();
void main()
{
    printf("Enter the number of subjects: ");
    scanf("%d" ,&SubjectNumber);
    printf("\n");
    printf("For CGPA Scale 4.0, Select---1|| For CGPA Scale 4.0+, Select--->2: ");
    scanf("%d" ,&Input);
    switch (Input)
    {
    case 1:
    printf("You have selected CGPA Scale 4.0\n");
    GPA4();
        break;
    case 2:
    printf("You have selected CGPA Scale 4.0+");
    GPA41();
         break;    
    default:
    printf("Wrong Choice, Exiting Program!");
    exit(0);
        break;
    }
}
void GPA4()
{
    printf("Enter Your List of Subjects: \n");
    for (i=0; i<SubjectNumber; i++)
    {
        printf("%d." ,i+1);
        scanf("%s",Subject[i]);
    }
    fflush(stdin);
    for (i=0; i<SubjectNumber; i++)
    {
        printf("Enter the grade for %s : ",Subject[i]);
        scanf("%s",Grade[i]);
        fflush(stdin);
        printf("Enter the Credits for %s :",Subject[i]);
        scanf("%f" ,&Credits[i]);
        printf("\n");
    }
    for(i=0; i<SubjectNumber; i++)
    {
    if(strcmp(Grade[i],"A"))
    GradePoint[i] = 4*Credits[i];
    else if(strcmp(Grade[i],"B"))
    GradePoint[i] = 3*Credits[i];
    else if(strcmp(Grade[i],"C"))
    GradePoint[i] = 2*Credits[i];
    else if(strcmp(Grade[i],"D"))
    GradePoint[i] = 1*Credits[i];  
     else if(strcmp(Grade[i],"F"))
    GradePoint[i] = 0*Credits[i]; 
    CreditsTotal +=Credits[i];
    GradePointTotal +=GradePoint[i];
    }
    CGPA = GradePointTotal/CreditsTotal;
    printf("Your CGPA for this semester is: %.2f", CGPA);
}
void GPA41()
{
    printf("Enter Your List of Subjects: \n");
    for (i=0; i<SubjectNumber; i++)
    {
        printf("%d." ,i+1);
        scanf("%s",Subject[i]);
    }
    fflush(stdin);
    for (i=0; i<SubjectNumber; i++)
    {
        printf("Enter the grade for %s : ",Subject[i]);
        scanf("%s",Grade[i]);
        fflush(stdin);
        printf("Enter the Credits for %s :",Subject[i]);
        scanf("%f" ,&Credits[i]);
        printf("\n");
    }
    for(i=0; i<SubjectNumber; i++)
    {
    if(strcmp(Grade[i],"A+"))
    GradePoint[i] = 4.33*Credits[i];
     else if(strcmp(Grade[i],"A"))
    GradePoint[i] = 4*Credits[i];
    else if(strcmp(Grade[i],"A-"))
    GradePoint[i] = 3.67*Credits[i];
    else if(strcmp(Grade[i],"B+"))
    GradePoint[i] = 3.33*Credits[i];
    else if(strcmp(Grade[i],"B"))
    GradePoint[i] = 3*Credits[i];
     else if(strcmp(Grade[i],"B-"))
    GradePoint[i] = 2.67*Credits[i];
     else if(strcmp(Grade[i],"C+"))
    GradePoint[i] = 2.33*Credits[i];
     else if(strcmp(Grade[i],"C"))
    GradePoint[i] = 2*Credits[i];
     else if(strcmp(Grade[i],"D+"))
    GradePoint[i] = 1.33*Credits[i]; 
     else if(strcmp(Grade[i],"D"))
    GradePoint[i] = 1.00*Credits[i];
     else if(strcmp(Grade[i],"D-"))
    GradePoint[i] = 0.67*Credits[i];
     else if(strcmp(Grade[i],"F"))
    GradePoint[i] = 0*Credits[i];
    CreditsTotal +=Credits[i];
    GradePointTotal +=GradePoint[i];
    }
    CGPA = GradePointTotal/CreditsTotal;
    printf("Your CGPA for this semester is: %.2f", CGPA);
}