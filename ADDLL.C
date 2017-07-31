#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct list1
{
int data;
struct list1 *link1;
}*newnode1,*temp1,*first1=NULL;

struct list2
{
int data;
struct list2 *link2;
}*newnode2,*temp2,*first2=NULL;
void crlista()
{
int n;
do
{
newnode1=(struct list1*)malloc(sizeof(struct list1));
printf("Enter data\n");
scanf("%d",&newnode1->data);
newnode1->link1=NULL;
if(first1==NULL)
{
temp1=first1=newnode1;
}
else
{
temp1->link1=newnode1;
temp1=newnode1;
}
printf("\nDo you want to continue(1 for y//0 for n)\n");
scanf("%d",&n);
}while(n!=0);
main();
}
void crlistb()
{
int n;
do
{
newnode2=(struct list2*)malloc(sizeof(struct list2));
printf("Enter data\n");
scanf("%d",&newnode2->data);
newnode2->link2=NULL;
if(first2==NULL)
{
temp2=first2=newnode2;
}
else
{
temp2->link2=newnode2;
temp2=newnode2;
}
printf("\nDo you want to continue(1 for y//0 for n)\n");
scanf("%d",&n);
}while(n!=0);
main();
}

void addlist()
{
temp1=first1;
while(temp1->link1!=NULL)
{
temp1=temp1->link1;
}
temp1->link1=first2;
temp1=first1;
while(temp1!=NULL)
{
printf("%d-->",temp1->data);
temp1=temp1->link1;
}
printf("NULL");
main();
}

void display(int n)
{
switch(n)
{
case 1:
{
temp1=first1;
while(temp1!=NULL)
{
printf("%d-->",temp1->data);
temp1=temp1->link1;
}
printf("NULL");
break;
}
case 2:
{
temp2=first2;
while(temp2!=NULL)
{
printf("%d-->",temp2->data);
temp2=temp2->link2;
}
printf("NULL");
break;
}
}
main();
}
main()
{
int ch,dn;
printf("Select from the options\n");
printf("\n[1]Create list1\n[2]Create list2\n[3]Add the lists\n[4]Display\[5]exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
      crlista();
      break;
case 2:
      crlistb();
      break;
case 3:
      addlist();
      break;
case 4:
       printf("Select from following\n");
       printf("[1]List1\n[2]List2");
       scanf("%d",&dn);
       display(dn);
       break;
case 5:
   exit(1);
   break;
}
getch();
}



