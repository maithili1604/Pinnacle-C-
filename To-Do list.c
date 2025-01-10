#include<stdio.h>
#include<string.h>

#define MAX_TASKS 10
#define MAX_LENGTH 100

typedef struct{
    char task[MAX_LENGTH];
    int isComplete;
}Task;

void showTaskList(Task tasks[], int numTasks);
void addTaskList(Task tasks[], int *numTasks);
void markCompleteTask(Task tasks[], int numTasks);
void editTaskList(Task tasks[], int numTasks);

int main(){
    Task tasks[MAX_TASKS];
    int numTasks = 0;
    int ch;
    while(1){
        printf("\nTo-Do List Menu:\n");
        printf("1. Add Task\n");
        printf("2. Edit Task\n");
        printf("3. Mark Task as Complete\n");
        printf("4. View Tasks\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &ch);
        getchar();

        switch(ch){
            case 1:
                addTaskList(tasks, &numTasks);
                break;
            case 2:
                editTaskList(tasks, numTasks);
                break;
            case 3:
                markCompleteTask(tasks, numTasks);
                break;
            case 4:
                showTaskList(tasks, numTasks);
                break;
            case 5:
                printf("Exiting the To-Do List.Goodbye...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
void showTaskList(Task tasks[], int numTasks){
    if(numTasks==0){
        printf("No tasks found.\n");
        return;
    }
    printf("\nTask List:\n");
    for(int i=0; i<numTasks; i++){
        printf("%d. %s [%s]\n", i + 1, tasks[i].task, tasks[i].isComplete ? "Completed" : "Pending");
    }
}
void addTaskList(Task tasks[], int *numTasks){
    if(*numTasks == MAX_TASKS){
        printf("Task list is full. Cannot add more tasks.\n");
        return;
    }
    printf("Enter task: ");
    fgets(tasks[*numTasks].task, MAX_LENGTH, stdin);
    tasks[*numTasks].task[strcspn(tasks[*numTasks].task, "\n")] = '\0';
    tasks[*numTasks].isComplete = 0;
    (*numTasks)++;
    printf("Task added successfully.\n");
}
void editTaskList(Task tasks[], int numTasks){
    if(numTasks==0){
        printf("No tasks found.\n");
        return;
    }
    int taskaddress;
    showTaskList(tasks, numTasks);
    printf("Enter the task number to edit: ");
    scanf("%d", &taskaddress);
    getchar();

    if(taskaddress < 1 || taskaddress > numTasks){
        printf("Invalid task number.\n");
        return;
    }
    printf("Enter new task: ");
    fgets(tasks[taskaddress - 1].task, MAX_LENGTH, stdin);
    tasks[taskaddress - 1].task[strcspn(tasks[taskaddress - 1].task, "\n")]='\0';
    printf("Task edited successfully.\n");
}
void markCompleteTask(Task tasks[], int numTasks){
    if(numTasks==0){
        printf("No tasks found.\n");
        return;
    }
    int taskaddress;
    showTaskList(tasks, numTasks);
    printf("Enter the task number to mark as complete: ");
    scanf("%d", &taskaddress);
    getchar();
    if(taskaddress < 1 || taskaddress > numTasks){
        printf("Invalid task number.\n");
        return;
    }
    tasks[taskaddress - 1].isComplete = 1;
    printf("Task marked as complete.\n");
}