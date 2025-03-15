#include<stdio.h>
#include<conio.h>
#define MAX_PROJECTS 50
#define MAX_TASKS 100
#define MAX_TEAM_MEMBERS 10


    struct Task {
        int taskID;
        char taskDescription[200];
        char assignedTeamMembers[MAX_TEAM_MEMBERS][100];  // Team members assigned to the task
        char startDate[20];
        char endDate[20];
        char taskStatus[20];  // e.g., "Not Started", "In Progress", "Completed"
    };
    struct Task b;

    void acceptInput(){
        printf("Enter TaskID:");
        scanf("%d",&b.taskID);
        printf("Enter TaskDescription:");
        scanf("%s",&b.taskDescription);
        printf("Enter assignedTeamMembers:");
        scanf("%s",&b.assignedTeamMembers);
        printf("Enter StartDate:");
        scanf("%s",&b.startDate);
        printf("Enter endDate:");
        scanf("%s",&b.endDate);
        printf("Enter taskStatus:");
        scanf("%s",&b.taskStatus);


    }
    void displayOutput(){
        printf("taskID:%d\n",b.taskID);
        printf("Enter TaskDescription:%s\n",b.taskDescription);
        printf("Enter assignedTeamMembers:%s\n",b.assignedTeamMembers);
        printf("Enter StartDate:%s\n",b.startDate);
        printf("Enter endDate:%s\n",b.endDate);
        printf("Enter taskStatus:%s\n",b.taskStatus);
    }
 
    int main(){
        acceptInput();
        displayOutput();
        return 0;

    }