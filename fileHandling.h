int MakeHTMLPageRawOnly(struct Node *head,char nameWebPageTitle[])
{
    //first we will make a folder

    struct webTitle title;

    FILE *saveFILE;


    //this is the file name where .html file will be saved
    char name1 [] = "./Raw_HTML/";
    char* name2 = nameWebPageTitle;
  char* FileName = strcat(name1,name2);
  char* OriginalFileName = strcat(FileName,".html");




   mkdir("Raw_HTML");


   saveFILE = fopen(OriginalFileName,"w");


   fprintf(saveFILE,"<html>\n <head> \n<title> %s </title> \n</head>\n <body> ",nameWebPageTitle);


   while(head != NULL)
   {

        fprintf(saveFILE,"<h1> %s </h1>\n  ",head->headingDATA);
           fprintf(saveFILE,"<p> %s </p> \n ",head->paraDATA);
           head = head->next;

   }

    fprintf(saveFILE,"</body>\n</html>",nameWebPageTitle);

    fclose(saveFILE);

    return 1;






}


void  printBTSCode(struct boots *node,char webTitles[])
{

    FILE *BTSCode;

    mkdir("BTS_HTML");


    BTSCode = fopen("./BTS_HTML/sample.html","w");

    fprintf(BTSCode,"<!DOCTYPE html>\n<html lang=\"en\">\n<head>\n<meta charset=\"UTF-8\">\n");
     fflush(stdin);
    fprintf(BTSCode,"<title> %s </title>\n<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n",webTitles);
    fprintf(BTSCode,"<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n");
    fprintf(BTSCode,"<link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/css/bootstrap.min.css\"");
    fprintf(BTSCode,"rel=\"stylesheet\" integrity=\"sha384-eOJMYsd53ii+scO/bJGFsiCZc+5NDVN2yr8+0RDqr0Ql0h+rP48ckxlpbzKgwra6\"");
    fprintf(BTSCode,"crossorigin=\"anonymous\">\n</head>\n<body class=\"container\" style=\"margin-top : 25px;\">");

      fclose(BTSCode);


  BTSCode = fopen("./BTS_HTML/sample.html","a");

    while(node->next != NULL)
    {
        fflush(stdin);
        fprintf(BTSCode,"\n<h1 class=\"container\"> %s </h1>\n ",node->heading);
         fprintf(BTSCode,"<p class=\"container\"> %s </p> ",node->parag);
        node = node->next;
    }
      fclose(BTSCode);


    BTSCode = fopen("./BTS_HTML/sample.html","a");

       fprintf(BTSCode,"\n</body>\n<script src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.bundle.min.js\"");
          fprintf(BTSCode,"integrity=\"sha384-JEW9xMcG8R+pH31jmWH6WWP0WintQrMb4s7ZOdauHnUtxwoG2vI5DkLtS3qm9Ekf\" crossorigin=\"anonymous\"></script>\n</html>");


     fclose(BTSCode);


     system("cls");

     gotoxy(40,12);

     setcolor(2);

     printf("File Has been Created ,Check in \'BTS_HTML\' Folder");
     getch();

     return;
}

