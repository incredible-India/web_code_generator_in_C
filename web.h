 //function declaration
void gotoxy(int,int);
void setcolor(int);
void  exitFUNCTION(void);
void RawHTML(void);



//global variables and data types
struct webTitle {
//used in raw html
   char *name ;
   int sizeOFtitle;


};

struct Node {
    //used in raw html

        char headingDATA[100];

        char paraDATA[500];

        struct Node * next;
};


//function declaration

//for the raw html code


struct Node* HeadAndParaContent(struct Node *);
int MakeHTMLPageRawOnly(struct Node *,char[]);

struct webTitle WEBTilte()
{
    struct webTitle nameIs;
    nameIs.sizeOFtitle =30;
    nameIs.name = (char *) malloc(nameIs.sizeOFtitle*sizeof(char));

    fflush(stdin);

    system("cls");
    gotoxy(40,12);
    setcolor(4);
    printf("Enter the Web Page Title..\n");
    setcolor(6);
    gotoxy(40,14);
    gets(nameIs.name);



    return nameIs;

}

struct Node * HeadAndParaContent(struct Node *head)
{

    struct Node *data = (struct Node*) malloc (sizeof(struct Node));
    struct Node *extraNode = head;

   extern int j;

        system("cls");

        setcolor(3);
        printf("Enter The Content of %d Heading..\n",++j+1);
        fflush(stdin);
        gets(data->headingDATA);
           setcolor(6);
         printf("Enter The Content of %d heading`s Paragraph..\n",j+1);
        fflush(stdin);
        gets(data->paraDATA);

    while(extraNode->next != NULL)
    {

       extraNode = extraNode->next;

    }

     extraNode->next =data;
      data->next = NULL;
    return head;

}



void  RawHTML()
{
struct webTitle Title;
struct Node  *head = (struct node*) malloc(sizeof(struct Node));

int NumOFHeaings,done;
extern int i;
int counter = 0;

  Title =  WEBTilte();

  readAG2:
  system("cls");
  printf("Enter Number of Headings..\t");
  scanf("%d",&NumOFHeaings);


  if(NumOFHeaings <= 0 )
  {
      system("cls");
      gotoxy(40,12);
      printf("Please enter the number greater than zero...");
      getch();
      goto readAG2;
        }


         system("cls");
         setcolor(4);
        printf("Enter The Content of %d Heading..\n",counter+1);
        fflush(stdin);
        gets(head->headingDATA);
         setcolor(6);
        printf("Enter The Content of %d heading`s Paragraph..\n",counter+1);
         fflush(stdin);
        gets(head->paraDATA);
    head->next =NULL;
      fflush(stdin);

  for( i=0 ;i<NumOFHeaings-1;i++)
  {
       head = HeadAndParaContent(head);

  }


/*while(head != NULL)
 {
     fflush(stdin);
   printf("%s",head->headingDATA);
     head=head->next;

}*/


            system("cls");
       done = MakeHTMLPageRawOnly(head,Title.name);

       if(done)
       {
           system("cls");

          printf("File has been created you can check in Raw_HTML folder");
          getch();
          system("cls");
          intro();

       }else
       {
        printf("An Error Occured");

       }






}


//end code for the raw html file creation..

//code for bootstrap

struct boots
{
    char heading[100];
    char parag[500];
    struct boots * next;
};


//function declaration
struct boots* HeadAndParaContentFrBTS(struct boots *);
void  printBTSCode(struct boots*,char []);

void  CodeWithBootstrap()
{
    struct webTitle titleWEB;

    struct boots *node =  (struct boots*) malloc(sizeof(struct boots*));

    int numberOFheading ;

    int counter =0;

    titleWEB = WEBTilte();


    //printf("%s",titleWEB.name);

    readAG3:
    system("cls");

    gotoxy(40,12);

    setcolor(7);

    printf("Enter the number of headings...\t");

    setcolor(8);

    scanf("%d",&numberOFheading);


     if(numberOFheading <= 0 )
       {
      system("cls");
      gotoxy(40,12);
      printf("Please enter the number greater than zero...");
      getch();
      goto readAG3;
        }


        system("cls");

        setcolor(6);

        printf("Enter the %d`heading content..\n",++counter);


        fflush(stdin);
        setcolor(3);

        gets(node->heading);





        setcolor(4);

        printf("Enter the %d`heading`s paragraph content..\n",counter);

        fflush(stdin);

        setcolor(7);

        gets(node->parag);


        node->next =NULL;

        for(int i = 0 ; i < (numberOFheading-1); i++)
        {
            node = HeadAndParaContentFrBTS(node);
        }



        printBTSCode(node,titleWEB.name);







}


struct boots * HeadAndParaContentFrBTS(struct boots* node)

{

 struct boots *newNode = (struct boots *) malloc(sizeof(struct boots));

 struct boots *PreviousNode = node;

 extern int j;

 system("cls");

 setcolor(3);

 printf("Enter The %d`Heading `s content \n",++j+1);

 fflush(stdin);

 setcolor(7);

 gets(newNode->heading);



 setcolor(6);

 printf("\nEnter The %d`Heading paragraph `s content \n",j+1);

 fflush(stdin);

 setcolor(2);

 gets(newNode->parag);


   while(PreviousNode->next != NULL)
    {

       PreviousNode = PreviousNode->next;

    }

     PreviousNode->next =newNode;

     newNode->next = NULL;

    return node;


}
