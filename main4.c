
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


struct Project projects[SIZE];

void acceptAll(){
for(int i=0;i<SIZE-1;i++){
printf("Enter details of project %d \n",i+1);
   printf("Enter ProjectID\n");
   scanf("%d",&projects[i].projectID);
   printf("Enter Project Name:");
   scanf("%s",&projects[i].projectName);
   printf("Enter description:");
   scanf("%s",&projects[i].descpription);
   printf("Enter start Date:");
   scanf("%s",&projects[i].startDate);
   printf("Enter End Date:");
   scanf("%s",&projects[i].endDate);
   printf("Enter Project Status:");
   scanf("%s",&projects[i].projectStatus);
}


}
void showAll(){
    printf("All details of project \n");
    for(int i=0;i<SIZE-1;i++){
   printf("projectID:%d\n",projects[i].projectID);
   printf("projectname:%s\n",projects[i].projectName);
   printf("description:%s\n",projects[i].descpription);
   printf("startdate:%s\n",projects[i].startDate);
   printf("enddate:%s\n",projects[i].endDate);
   printf("projectstatus:%s\n",projects[i].projectStatus);
    }



}
void show(int index){
    printf("details of project \n");
    printf("projectID:%d\n",projects[index].projectID);
   printf("projectname:%s\n",projects[index].projectName);
   printf("description:%s\n",projects[index].descpription);
   printf("startdate:%s\n",projects[index].startDate);
   printf("enddate:%s\n",projects[index].endDate);
   printf("projectstatus:%s\n",projects[index].projectStatus);


}
void update(int index){
    printf("Update existing %d th Project Details\n",index+1);
    printf("Enter ProjectID:\n");
   scanf("%d",&projects[index].projectID);
   printf("Enter Project Name:");
   scanf("%s",&projects[index].projectName);
   printf("Enter description:");
   scanf("%s",&projects[index].descpription);
   printf("Enter start Date:");
   scanf("%s",&projects[index].startDate);
   printf("Enter End Date:");
   scanf("%s",&projects[index].endDate);
   printf("Enter Project Status:");
   scanf("%s",&projects[index].projectStatus);

}
int main(){

    int choice;
    acceptAll(); 
            
    //infinite loop
    
    while (1){
        printf("\nProject Management System\n");
        printf("===========================\n");
        printf("2. View all Projects\n");
        printf("3. Update Projects\n");
        printf("4. Delete Projects\n");
        printf("5. Exit\n");
        printf("Enter Your Choice (1-5): ");
        scanf("%d",&choice);

        switch (choice) {
             
               
            case 2: 
                showAll(); 
            break;
            case 3: 
                update(2); 
            break;
            //case 4: delete(1); break;/
            case 5:
                return 0;
            default: 
            printf("Invalid choice. Try again.\n");
            
        }
    } 
    return 0;

    
}
