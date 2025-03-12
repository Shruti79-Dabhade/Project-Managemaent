
#include<stdio.h>
#include<string.h>
#define MAX_PROJCTS 50
#define MAX_TASKS 100
#define MAX_TEAM_MeMBERS 10
#define SIZE 10

struct  Project{
   int projectID;
   char projectName[100];
   char descpription[200];
   char startDate[20];
   char endDate[20];
   char projectStatus[20];

};


struct Project Projects[SIZE];

void acceptInput(){
for(int i=0;i<SIZE-1;i++){
printf("Enter details of project %d \n",i+1);
   printf("Enter ProjectID\n");
   scanf("%d",&Projects[i].projectID);
   printf("Enter Project Name:");
   scanf("%s",Projects[i].projectName);
   printf("Enter description:");
   scanf("%s",Projects[i].descpription);
   printf("Enter start Date:");
   scanf("%s",Projects[i].startDate);
   printf("Enter End Date:");
   scanf("%s",Projects[i].endDate);
   printf("Enter Project Status:");
   scanf("%s",Projects[i].projectStatus);
}


}
void displayOutput(){
    for(int i=0;i<SIZE-1;i++){
   printf("projectID:%d\n",Projects[i].projectID);
   printf("projectname:%s\n",Projects[i].projectName);
   printf("description:%s\n",Projects[i].descpription);
   printf("startdate:%s\n",Projects[i].startDate);
   printf("enddate:%s\n",Projects[i].endDate);
   printf("projectstatus:%s\n",Projects[i].projectStatus);
    }



}
int main(){
   acceptInput();
   displayOutput();
   return 0;


}

