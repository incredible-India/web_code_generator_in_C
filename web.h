//function declaration
void gotoxy(int,int);
void setcolor(int);
void  exitFUNCTION(void);

struct webTitle {

   char *name ;
   int sizeOFtitle;


};

struct Node {

        char headingDATA[100];

        char paraDATA[500];

        struct Node * next;
};



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

struct node* HeadAndParaContent(struct Node *head,int NumOFHeaings)
{
    extern int i;
    struct Node *data = (struct Node*)malloc(sizeof(struct Node));

    for(i=0;i<NumOFHeaings;i++)
    {
        system("cls");

        setcolor(4);
        printf("Enter The Content of %d Heading..\n",i+1);
        fflush(stdin);
        gets(data->headingDATA);
           setcolor(6);
         printf("Enter The Content of %d heading`s Paragraph..\n",i+1);
        fflush(stdin);
        gets(data->paraDATA);

        data->next = NULL;


    }
    return data;

}



void  RawHTML()
{
struct webTitle Title;
struct Node *head = (struct node*) malloc(sizeof(struct Node));;
int NumOFHeaings;



  Title =  WEBTilte();

  system("cls");
  printf("Enter Number of Headings..\t");
  scanf("%d",&NumOFHeaings);
 head = HeadAndParaContent(head,NumOFHeaings);
 printf("%s",head->headingDATA);





}
