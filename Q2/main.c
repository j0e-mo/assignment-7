#include <stdio.h>
#include <stdlib.h>

struct subjects{
    int prog, data, math, alg;
    int ID;
};
int main()
{
    struct subjects student[10];
    int i,j,mark1,mark2,mark3,mark4,ID_check,selection,selection2,edit;
    for(i=0;i<10;i++)
    {
         for(j=0;j<10;j++)
        {
        mark1=rand()%100+1;
        mark2=rand()%100+1;
        mark3=rand()%100+1;
        mark4=rand()%100+1;
        student[j].prog = mark1;
        student[j].data = mark2;
        student[j].math = mark3;
        student[j].alg = mark4;
        student[j].ID = j;
        }
    }

    printf("Enter the student's ID\n");
    scanf("%d",&ID_check);

    for(i=0;i<10;i++){
        if(student[i].ID != ID_check){
            printf("Verifying ID...\n");
        }
        else if (student[i].ID == ID_check){
            printf("Student with ID %d marks are as follows:\nProgramming:%d\nData Structure:%d\nDiscrete Maths:%d\nAlgorithms:%d\n"
            ,i,student[i].prog,student[i].data,student[i].math,student[i].alg);
            break;
            }
      }
      if(i>=10)
        printf("Wrong ID\n");
      else{
      printf("Do you want to change the grades? (1 for Yes, 0 for  No)\n");
      scanf("%d",&selection);
      if(selection){

        printf("Select the subject you wish to edit:\n1:Programming\n2:Data Structure\n3:Discrete Maths\n4:Algorithms\n");
        scanf("%d",&selection2);
        printf("Enter the new value:\n");
        scanf("%d",&edit);

        switch(selection2){
            case 1:
                student[ID_check].prog=edit;
                printf("New Programming grade for student with ID %d is:%d\n",ID_check, student[ID_check].prog);
                break;
            case 2:
                student[ID_check].data=edit;
                printf("New Data Structure grade for student with ID %d is:%d\n",ID_check, student[ID_check].data);
                break;
            case 3:
                student[ID_check].math=edit;
                printf("New Discrete Maths grade for student with ID %d is:%d\n",ID_check, student[ID_check].math);
                break;
            case 4:
                student[ID_check].alg=edit;
                printf("New Algorithms grade for student with ID %d is:%d\n",ID_check, student[ID_check].alg);
                break;
            default:
                printf("You have made an invalid selection\n");
        }
        }
      }
      printf("Thank you for using our program\n");
    return 0;
}
