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
//done for the raw html code.....

//for the bootstrap

int PrintHTMLBootstrp(struct Boot *heads)
{

    FILE *saveFILEbts;


//    this is the file name where .html file will be saved
    char name1 [] = "./HTML_BTS/";
    char* name2 = heads->webPageTitle;
  char* FileName = strcat(name1,name2);
  char* OriginalFileName = strcat(FileName,".html");


    mkdir("HTML_BTS");

    printf("%s",OriginalFileName);
    getch();
    saveFILEbts = fopen(OriginalFileName,"w");

    fprintf(saveFILEbts,"<!DOCTYPE html>\n<html lang=\"en\">\n<head>\n<meta charset=\"UTF-8\">\n<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n<title> %s </title>\n<link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-eOJMYsd53ii+scO/bJGFsiCZc+5NDVN2yr8+0RDqr0Ql0h+rP48ckxlpbzKgwra6\" crossorigin=\"anonymous\">\n</head>\n<body class=\"container\">",heads->webPageTitle);

 while(heads != NULL)
   {

        fprintf(saveFILEbts,"\n<h1 class=\"container\"> %s </h1>\n  ",heads->heading);
           fprintf(saveFILEbts,"\n<p class=\"container\"> %s </p> \n ",heads->paragraph);
           heads = heads->next;

   }
   fprintf(saveFILEbts,"</body>\n<script src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta3/dist/js/bootstrap.bundle.min.js\" integrity=\"sha384-JEW9xMcG8R+pH31jmWH6WWP0WintQrMb4s7ZOdauHnUtxwoG2vI5DkLtS3qm9Ekf\" crossorigin=\"anonymous\"></script>\n</html>");
    fclose(saveFILEbts);
    return 1;

}
