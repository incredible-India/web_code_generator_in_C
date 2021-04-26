//function declaration
void gotoxy(int,int);
void setcolor(int);
void  exitFUNCTION(void);
void  RawHTML(void);
void CodeWithBootstrap(void);


void intro()
{

    extern int i;

    SetConsoleTitle("CODE GENERATOR");

    char *USERchoice  = (char *) malloc(1*sizeof(char));

    //giving option to user

    while(1)
    {
          gotoxy(30,10);
        setcolor(2);
        printf("%s",__DATE__);



          gotoxy(15,12);
        setcolor(6);
        printf(" 1 : Raw HTML only");





          gotoxy(15,16);
        setcolor(1);
        printf(" 2 : Web page with \'Bootstrap\'");



             gotoxy(15,18);
        setcolor(4);
        printf(" 3: EXIT");


        //taking the user choice
        readAG:
        gotoxy(15,20);
        *USERchoice = getch();


       if(*USERchoice == '2')
        {
          //  free(USERchoice);
            CodeWithBootstrap();

        }else if (*USERchoice == '1')

        {  //free(USERchoice);
            RawHTML();

        }else if (*USERchoice == '3')

        {
            // free(USERchoice);
            exitFUNCTION();

        }else
        {
            goto readAG;

        }

    }

}

