#include <stdio.h>
#include <stdlib.h>
struct node {
	int num;
	struct node *next;
};

void linkedListPrint(struct node *ptr){
	printf("\n");
	while (ptr != NULL){
		printf("%d	", ptr->num);
		ptr = ptr->next;
	}
}

struct node* addBeg(struct node *head, int data){
	struct node* ptr = (struct node *)malloc (sizeof(struct node ));
	ptr->num = data;
	ptr->next = head;
	head = ptr;
	return head;
}

int main(){
	struct node *head;
	struct node *second;
	struct node *third;
	
	head = (struct node *)malloc (sizeof(struct node));
	second = (struct node *)malloc (sizeof(struct node));
	third = (struct node *)malloc (sizeof(struct node));
	
	head->num = 7;
	head->next = second;
	
	second->num = 11;
	second->next = third;
	
	third->num = 87;
	third->next = NULL;
	
	linkedListPrint(head);
	
	int data = 54;
	
	head = addBeg(head, data);
	linkedListPrint(head);
	
	return 0;
}	