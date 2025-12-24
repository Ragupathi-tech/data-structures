#include <stdio.h>
#include <string.h>
struct Friend {
int id;
char name[50];
};
int main() {
struct Friend friends[50];
int count = 0, choice, i, searchId, found;
while (1) {
printf("\n--- Facebook Friends List ---\n");
printf("1. Add Friend\n");
printf("2. View Friends\n");
printf("3. Search Friend\n");
printf("4. Delete Friend\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter Friend ID: ");
scanf("%d", &friends[count].id);
printf("Enter Friend Name: ");
scanf("%s", friends[count].name);
count++;
printf("Friend Added Successfully!\n");
break;
case 2:
printf("\nFriends List:\n");
for (i = 0; i < count; i++) {
printf("ID: %d | Name: %s\n", friends[i].id, friends[i].name);
}
break;
case 3:
printf("Enter ID to search: ");
scanf("%d", &searchId);
found = 0;
for (i = 0; i < count; i++) {
if (friends[i].id == searchId) {
printf("Friend Found: %s\n", friends[i].name);
found = 1;
break;
}
}
if (!found)
printf("Friend Not Found!\n");
break;
case 4:
printf("Enter ID to delete: ");
scanf("%d", &searchId);
found = 0;
for (i = 0; i < count; i++) {
if (friends[i].id == searchId) {
for (int j = i; j < count - 1; j++) {
friends[j] = friends[j + 1];
}
count--;
printf("Friend Deleted Successfully!\n");
found = 1;
break;
}
}
if (!found)
printf("Friend Not Found!\n");
break;
case 5:
return 0;
default:
printf("Invalid Choice!\n");
}
}
}
