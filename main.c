#include <stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
};
struct node *head = NULL;
void insertInSortedManner(int data) {
  struct node* newNode,*temp,*current;
  newNode = (struct node*)malloc(sizeof(struct node));
  if(head == NULL) {
    head = newNode;
  }
  else {
    current = head;
    while(current!=NULL && current->data < newNode->data) {
      temp = current;
      current = current->next;
    }

    newNode->next = current;
    temp->next = newNode;
  }
}
void insertAtEnd(int data) {
  struct node *temp,*t;
  temp = (struct node*)malloc(sizeof(struct node*));
  temp->data = data;
  temp->next = NULL;
  if(head == NULL) {
    head = temp;
  }
  else {
    t = head;
    while(t->next!=NULL) {
      t = t->next;
    }
    t->next=temp;
  }
}
void display() {
  if(head == NULL) {
    printf("Linked list is empty");
  }
  else {
    struct node *t = head;
    while(t != NULL) {
      printf("%d ",t->data);
      t = t->next;
    }
  }
}
int main(void) {
  
  insertAtEnd(4);
  insertAtEnd(5);
  insertAtEnd(7);
  insertInSortedManner(6);
  display();
  return 0;
}