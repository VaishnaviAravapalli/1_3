#include <stdio.h>
#include<stdlib.h>
struct sll
{
    int data;
    struct sll *link;
};

struct sll *head = NULL;
void insert(int data);
void display();
void delete_at_first();

int main()
{
    int data,i=0;
	while(++i <= 5)
    {
    printf("Enter data : \n");
    scanf("%d", &data);
    insert(data);
    }
	display();
	delete_at_first();
	printf("After deleting first node, ");
	display();
}

void insert(int data)
{
  struct sll *temp;
  struct sll *new = (struct sll *)malloc(sizeof(struct sll));
  if(new == NULL)
  {
      printf("Memory not allocated\n");
  }
  else
  {
      new->data = data;
      new->link = NULL;
      if(head == NULL)
      {
          head = new;
      }
      else
      {
          temp = head;
          while(temp->link != NULL)
          {
              temp = temp->link;
          }
          temp->link = new;
       }
  }
}

void display()
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
		printf("the list is : ");
        struct sll *temp = head;
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

void delete_at_first()
{
		if(head == NULL)
		{
				printf("LIST IS EMPTY\n");
		}
		else
		{
				struct sll *temp = head;
		        head = temp->link;
				printf("Deleted node is %d\n", temp->data);
				free(temp);
		}
}

