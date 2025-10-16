#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>


struct contact

{

    long ph;
    char name[20],address[20],email[30];

}list;

char string[20],name[20];
long int danial;

FILE *fp, *ft;

int i,n,anykey,l,found;
//Start of main
int main()

{

main:

    system("cls");
    system("color 2");

    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Add a New Contact\n\t\t[2] List all Contacts\n\t\t[3] Search for Contact\n\t\t[4] Edit a Contact\n\t\t[5] Delete a Contact\n\t\t[0] Exit\n\t\t=================\n\t\t");

    printf("Enter Your Choice: ");

    scanf("%d",&anykey);

    switch(anykey)

    {
	//This case is used for Exit

    case 0:

        printf("\n\n\t\tAre You Sure To Exit?");

        break;



    case 1:



        system("cls");

        fp=fopen("contact.dll","a");//initally this is empty ,

        for (;;)

        {
            fflush(stdin);

            printf("To Exit Enter Blank Space in the Name Input\nName (Use identical): ");

            scanf("%[^\n]",&list.name);
            //gets(list.name);

            if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)

                break;

            fflush(stdin);//

            printf("Phone: ");

            scanf("%ld",&list.ph);

            fflush(stdin);

            printf("Address: ");

            scanf("%[^\n]",&list.address);//

            fflush(stdin);

            printf("Email Address: ");

            gets(list.email);

            printf("\n");

            fwrite(&list,sizeof(list),1,fp);//

        }

        fclose(fp);

        break;


    case 2:

        system("cls");

        printf("\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n\nName\t\tPhone No\t    Address\t\tE-mail\n=================================================================\n\n");

        for(i=97; i<=122; i=i+1)//

        {

            fp=fopen("contact.dll","r");

            fflush(stdin);

            found=0;

            while(fread(&list,sizeof(list),1,fp)==1)

            {

                if(list.name[0]==i || list.name[0]==i-32)

                {

                    printf("\nName\t: %s\nPhone\t: %ld\nAddress\t: %s\nEmail\t: %s\n",list.name,

                           list.ph,list.address,list.email);

                    found++;

                }

            }


            fclose(fp);

        }

        break;

    case 3:

        system("cls");

        do

        {

            found=0;

            printf("\n\n\tCONTACT SEARCH\n\t===========================\n\tName of contact to search: ");

            fflush(stdin);

            scanf("%[^\n]",&string);

            l=strlen(string);

            fp=fopen("contact.dll","r");

            system("cls");

            printf("\n\nSearch result for '%s' \n===================================================\n",string);

            while(fread(&list,sizeof(list),1,fp)==1)

            {



                if(strcmp(list.name,string)==0)

                {

                    printf("\nName\t: %s\nPhone\t: %ld\nAddress\t: %s\nEmail\t: %s\n",list.name,list.ph,list.address,list.email);

                    found++;

                  /*  if (found%4==0)

                    {

                        printf("Press any key to continue.....");

                        getch();

                    }*/

                }

            }

            if(found==0)

                printf("\nNo match found!");

            else

                printf("\n%d match(s) found!",found);

            fclose(fp);

            printf("\n Try again?\n\n\t[1] Yes\t\t[Any Key] No\n\t");

            scanf("%d",&anykey);

        }
        while(anykey==1);

        break;

    case 4:

        system("cls");

        fp=fopen("contact.dll","r");

        ft=fopen("temp.dat","w");

        fflush(stdin);

        printf("..::Edit contact\n===============================\n\n\t..::Enter the contact number to edit:");

       //  long int danial;
        scanf("%ld",&danial);

        while(fread(&list,sizeof(list),1,fp)==1)

        {

           // if(stricmp(name,list.name)!=0)
                   if(danial!=list.ph)
                fwrite(&list,sizeof(list),1,ft);//

        }

        fflush(stdin);

        printf("\n\nEditing '%s'\n\n",name);

        printf("Name(Use identical):");

        scanf("%[^\n]",&list.name);

        fflush(stdin);

        printf("Phone:");

        scanf("%ld",&list.ph);

        fflush(stdin);

        printf("address:");

        scanf("%[^\n]",&list.address);

        fflush(stdin);

        printf("email address:");

        gets(list.email);

        printf("\n");

        fwrite(&list,sizeof(list),1,ft);

        fclose(fp);

        fclose(ft);

        remove("contact.dll");

        rename("temp.dat","contact.dll");

        break;



    case 5:

        system("cls");

        fflush(stdin);

        printf("\n\n\tDELETE A CONTACT\n\t==========================\n\tEnter the contact number to delete:");


       // scanf("%[^\n]",&name);
      // long int danial;
       scanf("%ld",&danial);

        fp=fopen("contact.dll","r");

        ft=fopen("temp.dat","w");

        while(fread(&list,sizeof(list),1,fp)!=0)

            if (danial!=list.ph)

                fwrite(&list,sizeof(list),1,ft);

        fclose(fp);

        fclose(ft);

        remove("contact.dll");

        rename("temp.dat","contact.dll");

        break;

    default:

        printf("Invalid choice");

        break;

    }

    printf("\n\n\nEnter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");

    scanf("%d",&anykey);

    switch (anykey)

    {

    case 1:

        goto main;

    case 0:

        break;

    default:

        printf("Invalid choice");

        break;

    }

    return 0;

}
