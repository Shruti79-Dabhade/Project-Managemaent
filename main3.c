
#include<stdio.h>
#include<string.h>
#define MAX_PROJCTS 50
#define MAX_TASKS 100
#define MAX_TEAM_MeMBERS 10
#define SIZE 3

struct  Project{
   int projectID;
   char projectName[100];
   char descpription[200];
   char startDate[20]; 
   char endDate[20];
   char projectStatus[20];

};


struct Project Projects[SIZE];

void acceptAll(){
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
void showAll(){
    printf("All details of project \n");
    for(int i=0;i<SIZE-1;i++){
   printf("projectID:%d\n",Projects[i].projectID);
   printf("projectname:%s\n",Projects[i].projectName);
   printf("description:%s\n",Projects[i].descpription);
   printf("startdate:%s\n",Projects[i].startDate);
   printf("enddate:%s\n",Projects[i].endDate);
   printf("projectstatus:%s\n",Projects[i].projectStatus);
    }



}
void show(int index)
{
    printf("details of project \n");
    printf("projectID:%d\n",Projects[index].projectID);
   printf("projectname:%s\n",Projects[index].projectName);
   printf("description:%s\n",Projects[index].descpription);
   printf("startdate:%s\n",Projects[index].startDate);
   printf("enddate:%s\n",Projects[index].endDate);
   printf("projectstatus:%s\n",Projects[index].projectStatus);


}
void update(int index){
    printf("Update existing %d th Project Details\n",index+1);
    printf("Enter ProjectID:\n");
   scanf("%d",&Projects[index].projectID);
   printf("Enter Project Name:");
   scanf("%s",Projects[index].projectName);
   printf("Enter description:");
   scanf("%s",Projects[index].descpription);
   printf("Enter start Date:");
   scanf("%s",Projects[index].startDate);
   printf("Enter End Date:");
   scanf("%s",Projects[index].endDate);
   printf("Enter Project Status:");
   scanf("%s",Projects[index].projectStatus);

}
int main(){
   acceptAll();
   showAll();



   int index;
   printf("Enter index to show Details:");
   scanf("%d",&index);

   show(index);
   update(index);
   showAll();
   return 0;


}

