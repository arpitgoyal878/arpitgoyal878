#include<stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;

};
void insertfirst(node *&ptr,int t)
{
	struct node * head;
	head = (struct node *)malloc(sizeof(struct node));
	head->data=t;
	head->next=ptr;
	ptr=head;

}	
void printlist(node *&ptr)
{
	struct node *temp;
	temp=ptr;
	while(temp!=NULL)
	{
		printf("Element: %d\n", temp->data);
		temp=temp->next;
	}

}

struct node * merge(node *&ptr1,node *&ptr2)
{
	struct node *temp1=ptr1;
	struct node *temp2= ptr2;
	while(temp1->next!=NULL)
	{
		if(temp1->data>temp2->data)
		{
			temp1->next=temp2->next;
			temp2->next=temp1;
		}
		else {
			temp2->next=temp1->next;
			temp1->next=temp2;
		}




		temp1=temp1->next;
		temp2=temp2->next;

	}
	temp1->next
}

int main()
{
	struct node* ptr1;
	ptr1=(struct node *)malloc(sizeof(struct node));
	ptr1->next=NULL;
	insertfirst(ptr1,34);
	insertfirst(ptr1,29);
	insertfirst(ptr1,10);
	insertfirst(ptr1,6);
	insertfirst(ptr1,5);
	printlist(ptr1);

	struct node* ptr2;
	ptr2 =(struct node *)malloc(sizeof(struct node));
	ptr2->next=NULL;
	insertfirst(ptr2, 90);
	insertfirst(ptr2, 56);
	insertfirst(ptr2, 40);
	insertfirst(ptr2,30);
	insertfirst(ptr2,20);
	printlist(ptr2);

	struct node *ptr=merge(ptr1,ptr2);


}