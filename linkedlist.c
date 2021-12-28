#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node*next;
};
struct Node*first;
struct Node*last,*temp;
void creat();
void insert();
void insert_begining();
void insert_end();
void insert_position();
void delete();
void delete_begining();
void delete_end();
void delete_position();
void display();
int main()
{
  int ch;
  do
  {printf("\n1.creat\n2.insert\n3.delete\n4.display\n5.exit");
  printf("\nenter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:creat();
          break;
   case 2:insert();
          break;
   case 3:delete();
          break;
   case 4:display();
   break;
   default:
       printf("invalid position");
       break;
  }
  }while(ch!=5);
}
void insert()
{
  int ch;
  printf("1.insert_begining\n 2.insert_end\n 3.insert_position\n");
  printf("enter choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:insert_begining();
          break;
   case 2:insert_end();
          break;
   case 3:insert_position();
          break;
   default:
       printf("invalid position");
          break;
  }
}
void creat()
{
  struct Node*newnode;
  newnode=(struct Node*)malloc(sizeof(struct Node));
  char ch='y';
  int cont;
  if(first != NULL)
  {
   printf("list exist,use insert option");
  }
  else
  {
    while(ch=='y')
    {
     printf("enter the element:");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     if(first==NULL)
    {
      first=last=newnode;
    }
    else
    {
      last->next=newnode;
      last=newnode;
    }
    printf("\n Do you want to continue(0/1)");
    fflush(stdin);
    scanf("%d",&cont);
    if(cont==1)
    {
      newnode=(struct Node*)malloc(sizeof(struct Node));
    }
    else
    {
     break;
    }
    }
  }
}
void insert_begining()
{
  if(first==NULL)
  {
   printf("list doesn't exist");
  }
  else
  {
    struct Node*newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter the value to be inserted:");
    scanf("%d",&newnode->data);
    newnode->next=first;
    first=newnode;
    printf("%d is successfully inserted",first->data);
  }
}
void insert_end()
{
 struct Node*newnode;
 newnode=(struct Node*)malloc(sizeof(struct Node));
 printf("enter the element to be inserted:");
 scanf("%d",&newnode->data);
 last->next=newnode;
 newnode->next=NULL;
 last=newnode;
 printf("%d is inserted successfully",last->data);
}
void insert_position()
{
 int pos,i;
 if(first==NULL)
  {
   printf("list doesn't exist");
  }
 else
  {
    printf("enter the position to be insert");
    scanf("%d",&pos);
     if(pos==1)
      {
        insert_begining();
      }
     else
      {
        struct Node*newnode;
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("enter the value");
        scanf("%d",&newnode->data);
        temp=first;
        for(i=1;i<pos-2;i++)
        temp=temp->next;
        if(temp==NULL)
          {
             printf("invalid position");
          }
        else
          {
             newnode->next=temp->next;
             temp->next=newnode;
             printf("%d is inserted",newnode->data);
          }
 
       }
    }
 
}

void delete()
{
  int ch;
  printf("\n1.delete_begining\n2.delete_end\n3.delete_position");
  printf("enter choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:delete_begining();
          break;
   case 2:delete_end();
          break;
   case 3:delete_position();
          break;
   default:
       printf("invalid position");
          break;
  }
}
  void delete_begining()
  {
      if(first==NULL)
      {
          printf("list does not exist");
      }
      else
      {  
          temp=first;
          if(first->next==NULL)
          {
              first=last=NULL;
          }
          else
           {
              first=first->next;
              printf("%d is deleted successfully",temp->data);
              free(temp);
             
           }
      }
  }
 void delete_end()
  {
      if(first==NULL)
      {
          printf("list does not exist");
      }
      else
      {  

          if(first->next==NULL)
          {
              printf("%d is deleted successfully",first->data);
              free(first);
              first=last=NULL;
             
          }
          else
          {
              temp=first;
              while(temp->next!=NULL)
              {
                  temp=temp->next;
                  temp->next=NULL;
                  printf("%d is deleted successfully",temp->data);
                  free(temp);
                  temp=last;
              }
          }
      }
  }
 void delete_position()
  {   int pos,i;
      if(first==NULL)
      {
          printf("list does n't exist ");
      }
      else
      {
       
          printf("enter the position to be insert");
          scanf("%d",&pos);
          if(pos==1)
           {
             delete_begining();
           }
           else
           {
                 
              struct Node*p;
              p=(struct Node*)malloc(sizeof(struct Node));
              temp=first;
              for(i=1;1<pos-2;i++)
              temp=temp->next;
              if(temp==NULL)
              {
                  printf("invalid position");
              }
              else
              {
                p=temp->next;
                temp->next=temp->next->next;
                printf("%d is deletd",p->data);
                free(p);
              }

           }
        }
    }

void display()
{  
    if(first==NULL)
    {
        printf("link does n't exist");
    }
    else
    {
        temp=first;
        printf("the elements in the linked list \n");
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
           
        }printf("NULL");
    }

}




