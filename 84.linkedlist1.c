#include <stdio.h>
#include <stdlib.h>

int mno;

struct node {
	int info;
	struct node *link;
}*root=NULL;

int input()
{
	int value;
	printf("Enter the value: ");
	scanf("%d",&value);
	return value;
}

int position()
{
	int pos;
	printf("Enter the position: ");
	scanf("%d",&pos);
	return pos;
}

void createnode(int value)
{
	struct node *tmp;

	tmp = (struct node*)malloc(sizeof(struct node));
	if(tmp == NULL)
		printf("There is no space in the heap memory\n");
	tmp->info = value;
	tmp->link = NULL;

	if(root == NULL)
		root = tmp;
}

void addnodeatbegin(int value)
{
	struct node *tmp;

	tmp = (struct node*)malloc(sizeof(struct node));
	if(tmp == NULL)
		printf("There is no space in the heap memory\n");
	tmp->info = value;
	tmp->link = root;

	root = tmp;
}

void addnodeatend(int value)
{
	struct node *q,*tmp;

	q = root;

	while(q->link != NULL)
	{
		q = q->link;
	}

	tmp = (struct node*)malloc(sizeof(struct node));
	if(tmp == NULL)
		printf("There is no space in the heap memory\n");
	tmp->info = value;
	tmp->link = NULL;

	q->link = tmp;
}

void addnodeatinbetween(int value,int pos)
{
	struct node *q,*tmp;

	int i;
	q = root;

	for(i=0;i<pos;i++)
	{
		q = q->link;
	}

	tmp = (struct node*)malloc(sizeof(struct node));
	if(tmp == NULL)
		printf("There is no space in the heap memory\n");
	tmp->info = value;
	tmp->link = q->link;

	q->link = tmp;
}

void delete(int value)
{
	struct node *q,*tmp;

	while(root->info == value)
	{
		tmp = root;
		root = root->link;
		tmp->link = NULL;
		free(tmp);
		return;
	}

	q = root;

	while(q->link->link != NULL)
	{
		if(q->link->info == value)
		{
			tmp = q->link;
			q->link = tmp->link;
			tmp->link = NULL;
			free(tmp);
			return;
		}
		else
		{
			q=q->link;
		}
	}

	while(q->link->info == value)
	{
		tmp = q->link;
		q->link = NULL;
		free(tmp);
		return;
	}
}

void display()
{
	struct node *q;

	q = root;

	while(q != NULL)
	{
		printf("\n");
		printf("List is %d\n",q->info);
		printf("\n");
		q = q->link;
	}
}

void searchnode(int value)
{
	struct node *q;

	int pos = 1;
	q = root;

	while(q != NULL)
	{
		if(q->info == value)
			printf("\nThe value %d is found in the position %d\n\n",value,pos);
		pos++;
		q = q->link;
	}
}

int main(void)
{
	do{
		printf("1.create a node\n");
		printf("2.Add a node at begin\n");
		printf("3.Add a node at end\n");
		printf("4.Add a node at inbetween\n");
		printf("5.Delete a node\n");
		printf("6.Display all node\n");
		printf("7.Search a node in the list\n");
		printf("8.Exit a node\n");
		printf("Enter the menu no: ");
		scanf("%d",&mno);

		switch(mno)
		{
			case 1:
				createnode(input());
				break;
			case 2:
				addnodeatbegin(input());
				break;
			case 3:
				addnodeatend(input());
				break;
			case 4:
				addnodeatinbetween(input(),position());
				break;
			case 5:
				delete(input());
				break;
			case 6:
				display();
				break;
			case 7:
				searchnode(input());
				break;
			case 8:
				free(root);
				exit(0);
			default:
				break;
		}
	}while(1);

	return 0;
}
