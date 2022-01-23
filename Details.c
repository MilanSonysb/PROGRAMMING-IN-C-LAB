#include <stdio.h>
struct person{

char name[20];
int age;
int salary;
};
int main(void) {

  struct person p[3];
  int i;
  for(i=0;i<=3;i++){
    if(i==0){
      printf("Enter the details of the 1st person😁\n");
    }
    else if (i==1)

     {printf("Details of the first person received now you can enter the details of the 2nd person😄\n");
     }
     else if (i==2)

     {printf("Details of the second person received now you can enter the details of the 3rd person😄\n");
     }
     else if (i==3)

     {printf("Details of the third person received now you can enter the details of the 4th person😄\n");
     }

 printf("Enter the name of the person:");
scanf("%s",&p[i].name);
 printf("Enter the age of the person:");
scanf("%d",&p[i].age);
 printf("Enter the salary of the person:");
scanf("%d",&p[i].salary);
  }
       printf("You have entered the all details of the 4 persons and here is your result\n");
for(i=0;i<=3;i++){
  if(i==0){
      printf("Details of  %s are:\n\n",p[i].name);
       printf("Name\tAge\tSalary\n");
 printf("%s\t%d\t%d\n\n",p[i].name,p[i].age,p[i].salary);
    }
    if(i==1){
      printf("Details of  %s are:\n\n",p[i].name);
       printf("Name\tAge\tSalary\n");
 printf("%s\t%d\t%d\n\n",p[i].name,p[i].age,p[i].salary);
    }
    if(i==2){
      printf("Details of  %s are:\n\n",p[i].name);
       printf("Name\tAge\tSalary\n");
 printf("%s\t%d\t%d\n\n",p[i].name,p[i].age,p[i].salary);
    }
    if(i==3){
      printf("Details of  %s are:\n\n",p[i].name);
       printf("Name\tAge\tSalary\n");
 printf("%s\t%d\t%d\n\n",p[i].name,p[i].age,p[i].salary);
    }
   
}


printf("We have displayed all the details of the 4 persons.ThankYou🥰\n");
      
    
  
  return 0;
}