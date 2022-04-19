#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node *link;
}*root=NULL;

int menu;

int input()
{
	int input;
	printf("Enter the value: ");
	scanf("%d",&input);
	return input;
}

int position()
{
	int pos;
	printf("Enter the Position: ");
	scanf("%d",&pos);
	return pos;
}

void create_node(int value)
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

void addnodeatend(int value)
{
	struct node *q,*tmp;

	q = root;

	while(q->link != NULL)
		q = q->link;

	tmp = (struct node*)malloc(sizeof(struct node));
	if(tmp == NULL)
		printf("There is no space in the heap memory\n");
	tmp->info = value;
	tmp->link = NULL;

	q->link = tmp;
}

void addnodeatbegin(int value)
{
	struct node *tmp;

	tmp = (struct node*)malloc(sizeof(struct node));
	if(tmp == NULL)
		printf("There is no space in the heap memory\n");
	tmp->info = value;
	tmp->link= root;

	root = tmp;
}

void addnodeatinbetween(int pos,int value)
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

void displaynodes()
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

void searchanode(int value)
{
	struct node *q;

	q = root;

	int pos = 1;

	while(q != NULL)
	{
		if(q->info == value)
		{
			printf("\n");
			printf("The data searched is in %d position value is %d\n",pos,q->info);
			printf("\n");
		}

		pos++;
		q = q->link;
	}
}

void deletenode(int value)
{
	struct node *q,*tmp;

	while(root->info == value)
	{
		tmp = root;
		root =	root->link;
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
			q = q->link;
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

int main(void)
{
	do{
		printf("select the option for linked list\n");
		printf("1.create node\n");
		printf("2.Add a node at end\n");
		printf("3.Add a node at begin\n");
		printf("4.Add a node at inbetween\n");
		printf("5.Display a nodes\n");
		printf("6.Search a node\n");
		printf("7.Delete a node\n");
		printf("8.Exit the loop\n");
		printf("Enter the menu no: ");
		scanf("%d",&menu);
		switch(menu)
		{
			case 1:
				create_node(input());
				break;
			case 2:
				addnodeatend(input());
				break;
			case 3:
				addnodeatbegin(input());
				break;
			case 4:
				addnodeatinbetween(input(),position());
				break;
			case 5:
				displaynodes();
				break;
			case 6:
				searchanode(input());
				break;
			case 7:
				deletenode(input());
				break;
			case 8:
				free(root);
				exit(0);
				break;
			default:
				break;
		}
	}while(1);

	return 0;
}
