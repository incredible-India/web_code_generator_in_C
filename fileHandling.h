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
