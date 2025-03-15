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
    void acceptAll(){
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
    void showAll(){
        printf("All details of tasks \n");
        for(int i=0;i<SIZE-1;i++){
            printf("TaskID:%d\n",tasks[i].taskID);
            printf("TaskDescription:%s\n",tasks[i].taskDescription);
            printf("assignedTeamMembers:%s\n",tasks[i].assignedTeamMembers);
            printf("StartDate:%s\n",tasks[i].startDate);
            printf("EndDate:%s\n",tasks[i].endDate);
            printf("TaskStatus:%s\n",tasks[i].taskStatus);
        }
    }
    void show (int index)
        {
            printf("details of Task \n");
            printf("TaskID:%d\n",tasks[index].taskID);
                printf("TaskDescription:%s\n",tasks[index].taskDescription);
                printf("assignedTeamMembers:%s\n",tasks[index].assignedTeamMembers);
                printf("StartDate:%s\n",tasks[index].startDate);
                printf("EndDate:%s\n",tasks[index].endDate);
                printf("TaskStatus:%s\n",tasks[index].taskStatus);

        }
        void update(int index){
            printf("Update existing %d th Task Details\n",index+1);
            printf("Enter TaskID:\n");
            scanf("%d",&tasks[index].taskID);
            printf("Enter Task Description:");
            scanf("%s",&tasks[index].taskDescription);
            printf("Enter assignedTeamMembers:");
            scanf("%s",&tasks[index].assignedTeamMembers);
            printf("Enter StartDate:");
            scanf("%s",&tasks[index].startDate);
            printf("Enter EndDate:");
            scanf("%s",&tasks[index].endDate);
            printf("Enter TaskStatus:");
            scanf("%s",&tasks[index].taskStatus);
        }
        int main(){
         
            int choice;
            acceptAll();

            while(1){
                printf("\nProject Management System\n");
                printf("===========================\n");
                printf("2. View all tasks\n");
                printf("3. Update taskss\n");
                printf("4. Delete tasks\n");
                printf("5. Exit\n");
                printf("Enter Your Choice (1-5): ");
                scanf("%d",&choice);

        switch (choice) {

            case2:
                  showAll();
                break;
                case3:
                   update(2);
                break;
                case4:
                   //case4:delete(1);break;/
                case5:
                return 0;
                printf("Invalid choice.Try again.\n");
        }
    }
    return 0;
                  
                    

            }