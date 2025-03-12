
 #include<stdio.h>
 #include<string.h>
 #define MAX_PROJCTS 50
 #define MAX_TASKS 100
 #define MAX_TEAM_MeMBERS 10


 struct  Project{
    int projectID;
    char projectName[100];
    char descpription[200];
    char startDate[20];
    char endDate[20];
    char projectStatus[20];

 };

 struct Project a;
 void acceptInput(){
    printf("Enter ProjectID:");
    scanf("%d",&a.projectID);
    printf("Enter Project Name:");
    scanf("%s",a.projectName);
    printf("Enter description:");
    scanf("%s",a.descpription);
    printf("Enter start Date:");
    scanf("%s",a.startDate);
    printf("Enter End Date:");
    scanf("%s",a.endDate);
    printf("Enter Project Status:");
    scanf("%s",a.projectStatus);


 }
 void displayOutput(){
    printf("projectID:%d\n",a.projectID);
    printf("projectname:%s\n",a.projectName);
    printf(" description:%s\n",a.descpription);
    printf("startdate:%s\n",a.startDate);
    printf("enddate:%s\n",a.endDate);
    printf("projectstatus:%s\n",a.projectStatus);



 }
 int main(){
    acceptInput();
    displayOutput();
    return 0;


 }
 
