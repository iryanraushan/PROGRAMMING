#include <stdio.h>
#include <stdlib.h>
struct node{
	int num;
	struct node* next;
};

void linkedListPrint(struct node *ptr){
	printf("\n");
	while (ptr != NULL){
		printf("%d	", ptr->num);
		ptr = ptr->next;
	}
}
  
void insertAtEnd(struct node** head, int data){
	struct node* p = (struct node *)malloc (sizeof(struct node ));
	struct node* ptr;
	
	p->num = data;
	
	p->next = NULL;
	ptr = *head;
	int i = 0;
	while (ptr->next != NULL){	
		ptr = ptr->next;
	}
	ptr->next = p;
	 
}

int main () {
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	struct node *fifth;
	struct node *sixth;
	struct node *seventh;
	struct node *eighth;
	
	head = (struct node *)malloc (sizeof(struct node));
	second = (struct node *)malloc (sizeof(struct node));
	third = (struct node *)malloc (sizeof(struct node));
	fourth = (struct node *)malloc (sizeof(struct node));
	fifth = (struct node *)malloc (sizeof(struct node));
	sixth = (struct node *)malloc (sizeof(struct node));
	seventh = (struct node *)malloc (sizeof(struct node));
	eighth = (struct node *)malloc (sizeof(struct node));
	
	head->num = 7;
	head->next = second;
	
	second->num = 11;
	second->next = third;
	
	third->num = 87;
	third->next = fourth;
	
	fourth->num = 76;
	fourth->next = fifth;
	
	fifth->num = 88;
	fifth->next = sixth;
	
	sixth->num = 77;
	sixth->next = seventh;
	
	seventh->num = 10;
	seventh->next = eighth;
	
	eighth->num = 15;
	eighth->next = NULL;
	
	linkedListPrint(head);
	
	int data = 54;
insertAtEnd(&head, data);
	linkedListPrint(head);	
}

