#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printWelcomeMessage();
int mainMenu();
void getStudentName();
void enrollInCourse();
void studentProgress();
void exitProgram();

int main() 
{
  int choice;
  printWelcomeMessage();
  while(1) {
      choice = mainMenu();
      switch (choice) {
          case 1:
              getStudentName();
              break;
          case 2:
              enrollInCourse();
              break;
          case 3:
              studentProgress();
              break;
          case 4:
              exitProgram();
              break;
          default:
              printf("\nInvalid Input! Please try again\n");
              break;
      }
  }
  return 0;
}

void printWelcomeMessage() {
  printf("\nWelcome to our programming course. \nWe will help you develop a successful career in tech industry!\n\n");
}

int mainMenu() {
  int choice;
  printf("Menu: \n");
  printf("1. Enter your name\n");
  printf("2. Enroll in a course\n");
  printf("3. Check your progress\n");
  printf("4. Exit the program\n");
  printf("Your Choice: ");
  scanf("%d", &choice);
  return choice;
}

void getStudentName() {
  char name[20];
  printf("\nPlease enter your name: ");
  scanf("%s", name);
  printf("\nWelcome %s!\n\n", name);
}

void enrollInCourse() {
  int courseChoice;
  printf("\nWhich course are you enrolling in? \n");
  printf("1. C Programming\n2. Java Programming\n3. Web Development\n");
  printf("Your Choice: ");
  scanf("%d", &courseChoice);
  switch (courseChoice) {
    case 1:
      printf("\nYou have enrolled in C Programming course.\n");
      break;
    case 2:
      printf("\nYou have enrolled in Java Programming course.\n");
      break;
    case 3:
      printf("\nYou have enrolled in Web Development course.\n");
      break;
    default:
      printf("\nInvalid Input! Please try again.\n");
      break;
  }
  printf("\n");
}

void studentProgress() {
  printf("\nYour progress will be tracked and reported weekly.\n\n");
}

void exitProgram() {
  printf("\nThank you for using our program. We wish you all the best in your career in tech industry!\n\n");
  exit(0);
}