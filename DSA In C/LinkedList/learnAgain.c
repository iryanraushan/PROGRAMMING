#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* link;
};

void printLinkList(struct node * head){
	struct node* ptr = head;
	printf("\n");
	while(ptr != NULL){
		printf("%d,	", ptr->data);
		ptr = ptr->link;
	}
}

struct node* begInsertElemnet(int num, struct node * head){
	struct node *newLinkList;
	struct node *ptr = head;
	newLinkList = (struct node*)malloc(sizeof(struct node));
	newLinkList->data = num;
	newLinkList->link = ptr;
	ptr = newLinkList;
	return ptr;	
}

struct node* insertInBetween(struct node* head, int data, int index){
	struct node* ptr = (struct node *)malloc (sizeof(struct node ));
	struct node *p = head;
	int i = 0;
	while (i != index-1){
		p = p->next;
		i++;
	}
	ptr->num = data;
	ptr->next = p->next;
	p->next = ptr;
	return head;

}

int main (){
	struct node* start;
	start->data = 56;
	start->link = NULL;
	printLinkList(&start);
	int num = 65;
	start = begInsertElemnet(num, &start);
	printLinkList(&start);
	int num = 65, index = 4;
	start = insertInBetween(head, num, index);
	printLinkList(&start);
}