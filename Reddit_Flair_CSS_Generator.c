/*
Written by: Ciaran Ó Nuallain
Version: 0.0.1a
Purpose: Generating CSS for images on reddit when you're too lazy to type it out.
It assumes that you called them IMG followed by numbers.
You will need to upload the images one by one to your sub with this method
*/
#include <Stdio.h>
main()
{
    FILE *fp;

    if ((fp=fopen("CSSGEN.txt","w"))==NULL)
    {
        printf("This failed to open");
    }
    else
    {
        int SIZE=0;
        int i;
        printf("How Many Images do you want to generate the CSS for? :");
        scanf("%d",&SIZE);
        
        char string1[]= ".IMG";
        char string2[]="{ background: url(%%IMG";
        char string3[]= "%%);width: 70px; height: 70px; border: none !important; padding:0px; display:inline-block; } ";
        
        for(i=1;i<=SIZE;i++)
        {
            printf("\n %s %d %s %d %s \n",string1,i,string2,i,string3);
            fprintf(fp,"%s""%d""%s""%d""%s \n",string1,i,string2,i,string3);
        }
        fclose(fp);
    }//endelse
}//endmain