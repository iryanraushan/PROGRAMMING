#include <stdio.h>
#include <stdlib.h>

struct node {
	int key;
	struct node *link;
};

void displayList(struct node * start){
	struct node *p;
	p = start;
	printf("\n");
	if (checkEmpty(p)){
		printf("List is Empty.");
	}
	else{
		while (p != NULL){
			printf("%d  ", p->key);
			p = p->link;
		}
	}
}

int checkEmpty(struct node * start){
	struct node *p;
	p = start;
	if (p == NULL){
		return 1;
	} 
	else {
		return 0;
	}
}

int lengthOfList(struct node * start){
	int count = 0;
	struct node *p;
	p = start;
	if (checkEmpty(p)){
		return 0;
	}
	while (p != NULL){
		count++;
		p = p->link;
	}
	return count;
}

void displayLength(int length){
	printf("Length of LinkedList is : %d", length);
}

void insertAtStart(struct node **start, int num){
	struct node *q = (struct node *)malloc(sizeof(struct node));
	q->key = num;
	q->link = *start;
	*start = q;
}

void insertAtRandom

void main(){
	struct node *head;
	struct node *second;
	struct node *third;
	
	head = (struct node *)malloc (sizeof(struct node));
	second = (struct node *)malloc (sizeof(struct node));
	third = (struct node *)malloc (sizeof(struct node));
	
	head->key = 7; 
	head->link = second;
	
	second->key = 11;
	second->link = third;
	
	third->key = 87;
	third->link = NULL;
	
	displayLength(lengthOfList(head));
	displayList(head);
	insertAtStart(&head, 5);
	displayList(head);
}	