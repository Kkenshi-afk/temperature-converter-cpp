#include <iostream>
#include <string>
using namespace std;
const int MAX_TASKS = 100;
string tasks[MAX_TASKS];
int taskCount = 0;
void information(){
cout<<"--------TO DO LIST--------"<<"\n";
cout<<"You press 1 to add a task."<<"\n";
cout<<"If you press 2, you will delete the task."<<"\n";
cout<<"If you press 3, you will list the tasks."<<"\n";
cout<<"If you press 4 you will exit!"<<"\n";
};
void addTask() {
    if (taskCount >= MAX_TASKS) {
        cout << "Task list is full!\n";
        return;
    }
    cin.ignore();
    cout << "Enter task: ";
    getline(cin, tasks[taskCount]);
    taskCount++;
    cout << "Task added!\n";
}
void listTasks() {
    if (taskCount == 0) {
        cout << "No tasks to show.\n";
        return;
    }

    cout << "Your tasks:\n";
    for (int i = 0; i < taskCount; i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}
void deleteTask() {
    listTasks();
    if (taskCount == 0) return;

    int index;
    cout << "Enter task number to delete: ";
    cin >> index;

    if (index < 1 || index > taskCount) {
        cout << "Invalid task number.\n";
        return;
    }

    for (int i = index - 1; i < taskCount - 1; i++) {
        tasks[i] = tasks[i + 1];
    }
    taskCount--;
    cout << "Task deleted!\n";
}

int main(){
    information();
    int choice;
    string todo_list;
    while (true){
        cout<<"Make your choice: ";
        cin>>choice;
        switch(choice){
        case 1: addTask(); break;
        case 2: listTasks(); break;
        case 3: deleteTask(); break;
        case 4:cout << "Exiting...\n"; return 0;
        default: cout << "Invalid choice.\n";


        }
        }


return 0;
}
