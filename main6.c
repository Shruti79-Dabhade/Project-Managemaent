#include<stdio.h>
#define MAX_PROJCTS 50
#define MAX_TASKS 100
#define MAX_TEAM_MEMBERS 10
#define SIZE 3

    struct Task {
        int taskID;
        char taskDescription[200];
        char assignedTeamMembers[MAX_TEAM_MEMBERS][100];  
        char startDate[20];
        char endDate[20];
        char taskStatus[20]; 
    };
   struct Task tasks[SIZE]; 

    void acceptInput(){
        for(int i=0;i<SIZE-1;i++){
            printf("Enter details of Task:%d \n",i+1);
            printf("Enter TaskID:\n");
            scanf("%d",&tasks[i].taskID);
            printf("Enter Task Description:");
            scanf("%s",&tasks[i].taskDescription);
            printf("Enter assignedTeamMembers:");
            scanf("%s",&tasks[i].assignedTeamMembers);
            printf("Enter StartDate:");
            scanf("%s",&tasks[i].startDate);
            printf("Enter EndDate:");
            scanf("%s",&tasks[i].endDate);
            printf("Enter TaskStatus:");
            scanf("%s",&tasks[i].taskStatus);

        }
    }
    void displayOutput(){
        for(int i=0;i<SIZE-1;i++){
            printf("TaskID:%d\n",tasks[i].taskID);
            printf("TaskDescription:%s\n",tasks[i].taskDescription);
            printf("assignedTeamMembers:%s\n",tasks[i].assignedTeamMembers);
            printf("StartDate:%s\n",tasks[i].startDate);
            printf("EndDate:%s\n",tasks[i].endDate);
            printf("TaskStatus:%s\n",tasks[i].taskStatus);


        }
    }
    int main(){
        acceptInput();
        displayOutput();
        return 0;
    }
