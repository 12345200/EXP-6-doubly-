#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *Rlink,*Llink;
};
   struct node *head=NULL,*NEW;
   int item;
   void create();
   void insert_beg();
   void insert_end();
   void Ftraverse();
   void Btraverse();
   void delete_beg();
   void delete_end();
   void insert_pos();
   void delete_pos();   
         int main()
         {
         	int ch;
         	printf("\n1.Insert at begin,\n2.Forward traverse,\n3.Backword traverse,\n4.Insert at end,\n5.delete at begin,\n6.delete at end,\n7.Insert at position,\n8.delete at position,\n9.exit");
         	do 
			{
         	printf("\nEnter the choice: ");
         	scanf("%d",&ch);
         	         switch(ch)
         	         {
         	         	case 1: insert_beg();
         	         			break;
         	         	case 2: Ftraverse();
         	         			break;
         	         	case 3: Btraverse();
         	         			break;
         	        	case 4: insert_end();
         	         			break;
         	         	case 5:delete_beg();
         	         		   break;
         	         	case 6: delete_end();
         	         			break;
        	         	case 7: insert_pos();
        	         			break;
       	            Case 8:delete_pos();
      	         			break;
         	         	case 9:exit(0);
         	             default: printf("Enter correct choice");
					}
           }while(ch<10);
    
		 }
		 
		 void create()
		 {
		 	NEW=(struct node*)malloc(sizeof(struct node));
		 	printf("Enter the number: ");
		 	scanf("%d",&item);
		 	NEW->Rlink=NULL;
		 	NEW->Llink=NULL;
		 	NEW->data=item;
		 }
		 
		 void insert_beg()
		 {
		 	create();
		 	if(head==NULL)
		 	{
		 		head=NEW;
			 }
			 else
			 {
			 	NEW->Rlink=head;
			 	head->Llink=NEW;
			 	head=NEW;
			 }
		 }
		  void insert_end()
		   {
		   	   create();
		   	  struct node *temp;
		   	  if(head==NULL)
		   	  {
		   	  	head=NEW;
			  }
			  else
			  {
			  	temp=head;
			  	while(temp->Rlink!=NULL)
			  	{
			  	   temp=temp->Rlink;
				}
				temp->Rlink=NEW;
				NEW->Llink=temp;
			  }
		   }
		   
		   void delete_beg()
		   {
		   	  struct node *temp;
		   	  if(head==NULL)
		   	  {
		   	  	printf("List is empty");
			  }
			  else
			  {
			  	temp=head;
			  	head=temp->Rlink;
			  	
				//temp=temp->Rlink;
				//temp->Llink=NULL;
			    //temp->Llink=NULL;
			  	printf("Deleted element is %d",temp->data);
			  	free(temp);
			  }
		   }
		void delete_end()
		{
		   	  struct node *temp,*prev;
		   	 if(head==NULL)
				{
					printf("List is empty");
				 } 
			 else
			  {
			    temp=head;
			      while(temp->Rlink!=NULL)
			      {
			      	 prev=temp;
			    	 temp=temp->Rlink;
				  }
		      }
		        prev->Rlink=NULL;
		        	printf("deleted elememt is %d",temp->data);
		        	free(temp);
	    }
	      void insert_pos()
	      {
	      	int pos,i=1;	 
	      	struct node *temp,*next;
	      	printf("At which position you have to insert: ");
			  scanf("%d",&pos);
			  create();
			  temp=head;
			  while(i<pos-1)
			  {
			  	 temp=temp->Rlink;
			  	 i++;
			  }   
		          next=temp->Rlink;
				  NEW->Rlink=next;
				  NEW->Llink=temp;
				  temp->Rlink=NEW;
				  temp->Llink=NEW;	 
		  }
		   void delete_pos();
		   { 
		       int pos,i=1;
		   	   struct node *temp,*pre;
		   	     if(head==NULL)
		   	     {
		   	 	  printf("List is empty");
			      }
			     else
			    {
			       printf("Enter the position that you have to delete: ")
		   	       scanf("%d",&pos);
		   	       while(i<pos)
		   	       {
		   	       	  temp=temp->Rlink;
		   	       	  i++;
					}
					 temp=prev;
					  
					}
			} 
			
		     void Ftraverse()
		    {
		 	struct node *temp;
		 	if(head==NULL)
		 	{
		 		printf("List is empty");
			 }
			 else
			 {
			 	temp=head;
			 	while(temp!=NULL)
			 	{
			 		printf("%d->",temp->data);
			 		temp=temp->Rlink;
				 }
				 printf("NULL");
			 }
		 }
		 void Btraverse()
		 {
		 	struct node *temp=head;
		      printf("NULL->");
		 	while(temp->Rlink!=NULL)
		 	{
		 		temp=temp->Rlink;
		     }
			 while(temp!=NULL)
			 {
			 	printf("%d->",temp->data);
				temp=temp->Llink;
			 }
	     }
