#include<stdio.h>

int main()
{
     printf("\n\tGrocery shop");
     printf("\n\n\n");
     printf("\tSerial");
     printf("\tProduct");
     printf("\tPrice");
     printf("\n\n");
     printf("\t1");
     printf("\tPotato");
     printf("\t20");
     printf("\n");
     printf("\t2");
     printf("\tTomato");
     printf("\t200");
     printf("\n");
     printf("\t3");
     printf("\tRice");
     printf("\t50");
     printf("\n");
     printf("\t4");
     printf("\tDal");
     printf("\t160");
     printf("\n\n\n");


     int serial,s2,s21,s211,Q,q2,q21,q211,P1,p1,t1,r1,d1,quantity,quantityt,quantityr,quantityd,price;

     fflush(stdin);

     printf("\tPlease Chose the product and please Enter the no. :");
     scanf("%d",&serial);

     if(serial==1)
     {    printf("Please Enter the Quantity of Potato");
          scanf("%d",&Q);
          printf("\n\tSir, you chose %d Kg Potato. Do you want buy another ? \n\t 1. Tomato\n\t 2. Rice\n\t 3. Dal \n\t 4. No Thanks\n\n\tPlease Select which you want:",Q);
          scanf("%d",&s2);
          if(s2==1)
          {    printf("Please Enter the Quantity of Tomato");
               scanf("%d",&q2);
               printf("\n\tSir, you chose %d Kg Potato and %d Kg Tomato . Do you want buy another ?\n\t 1. Rice\n\t 2. Dal \n\t 3. No Thanks\n\n\tPlease Select which you want:",Q,q2);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Rice");
                    scanf("%d",&q21);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato and %d Kg Rice . Do you want buy another ?\n\t 1. Dal \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q2,q21);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Dal");
                         scanf("%d",&q211);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato ,%d Kg Tomato and %d Kg Rice .",Q,q2,q21);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }

               else if(s21==2)
               {    printf("Please Enter the Quantity of Dal");
                    scanf("%d",&q211);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Tomato \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Tomato");
                         scanf("%d",&q2);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal .",Q,q2,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==3)
               {
                    printf("\n\tSir, you chose %d Kg Potato and %d Kg Tomato . ",Q,q2);

                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);

                         d1=(q2*160);
                         printf("\n%d Kg Tomato is %d Taka",q2,d1);
                         printf("\n___________________________");
                         P1=p1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);


               }
          }
          else if(s2==2)
          {    printf("Please Enter the Quantity of Rice");
               scanf("%d",&q21);
               printf("\n\tSir, you chose %d Kg Potato and %d Kg Rice . Do you want buy another ?\n\t 1. Tomato\n\t 2. Dal \n\t 3. No Thanks\n\n\tPlease Select which you want:",Q,q21);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Tomato");
                    scanf("%d",&q2);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato and %d Kg Rice . Do you want buy another ?\n\t 1. Dal \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q2,q21);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Dal");
                         scanf("%d",&q211);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                     else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato ,%d Kg Tomato and %d Kg Rice  .",Q,q2,q21);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         t1=(q211*160);
                         printf("\n%d Kg Tomato is %d Taka",q2,d1);
                         printf("\n___________________________");
                         P1=p1+r1+t1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                     }

               }
               else if(s21==2)
               {    printf("Please Enter the Quantity of Dal");
                    scanf("%d",&q211);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Tomato \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Tomato");
                         scanf("%d",&q2);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal .",Q,q2,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }


               }
               else if(s21==3)
               {
                    printf("\n\tSir, you chose %d Kg Potato and %d Kg Rice . ",Q,q21);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*160);
                         printf("\n%d Kg Dal is %d Taka",q21,r1);
                         printf("\n___________________________");
                         P1=p1+r1;
                         printf("\nTotal Price is %d Taka Only ",P1);


               }


          }
          else if(s2==3)
          {    printf("Please Enter the Quantity of Dal");
               scanf("%d",&q211);
               printf("\n\tSir, you chose %d Kg Potato and %d Kg Dal . Do you want buy another ?\n\t 1. Tomato\n\t 2. Rice \n\t 3. No Thanks\n\n\tPlease Select which you want:",Q,q211);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Tomato");
                    scanf("%d",&q2);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato and %d Kg Dal . Do you want buy another ?\n\t 1. Rice \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q2,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Rice");
                         scanf("%d",&q21);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==2)
               {    printf("Please Enter the Quantity of Rice");
                    scanf("%d",&q21);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Tomato \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Tomato");
                         scanf("%d",&q2);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal .",Q,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==3)
               {
                    printf("\n\tSir, you chose %d Kg Potato and %d Kg Dal . ",Q,q211);

                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);

                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);


               }


          }
          else if(s2==4)
          {
               printf("\n\tSir, you chose %d Kg Potato ",Q);
               p1=Q*20;
               printf("\n%d Kg Potato is %d Taka",Q,p1);
               printf("\n___________________________");
               P1=p1;
               printf("\nTotal Price is %d Taka Only ",P1);


          }


     }

     if(serial==2)
     {    printf("Please Enter the Quantity of Tomato");
          scanf("%d",&q2);
          printf("\n\tSir, you chose %d Kg Tomato. Do you want buy another ? \n\t 1. Poato\n\t 2. Rice\n\t 3. Dal \n\t 4. No Thanks\n\n\tPlease Select which you want:",q2);
          scanf("%d",&s2);
          if(s2==1)
          {    printf("Please Enter the Quantity of Potato");
               scanf("%d",&Q);
               printf("\n\tSir, you chose %d Kg Potato and %d Kg Tomato . Do you want buy another ?\n\t 1. Rice\n\t 2. Dal \n\t 3. No Thanks\n\n\tPlease Select which you want:",Q,q2);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Rice");
                    scanf("%d",&q21);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato and %d Kg Rice . Do you want buy another ?\n\t 1. Dal \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q2,q21);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Dal");
                         scanf("%d",&q211);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato ,%d Kg Tomato and %d Kg Rice .",Q,q2,q21);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }

               else if(s21==2)
               {    printf("Please Enter the Quantity of Dal");
                    scanf("%d",&q211);
                    printf("\n\tSir, you chose %d Kg Tomato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Potato \n\t 2. No Thanks\n\n\tPlease Select which you want:",q2,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Potato");
                         scanf("%d",&Q);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal .",Q,q2,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==3)
               {
                    printf("\n\tSir, you chose %d Kg Potato and %d Kg Dal . ",Q,q211);

                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);

                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);


               }
          }
          else if(s2==2)
          {    printf("Please Enter the Quantity of Rice");
               scanf("%d",&q21);
               printf("\n\tSir, you chose %d Kg Tomato and %d Kg Rice . Do you want buy another ?\n\t 1. Potato\n\t 2. Dal \n\t 3. No Thanks\n\n\tPlease Select which you want:",q2,q21);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Potato");
                    scanf("%d",&Q);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato and %d Kg Rice . Do you want buy another ?\n\t 1. Dal \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q2,q21);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Dal");
                         scanf("%d",&q211);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

                     else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Tomato , %d Kg Rice and %d Kg Potato .",q2,q21,Q);
                         p1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==2)
               {    printf("Please Enter the Quantity of Dal");
                    scanf("%d",&q211);
                    printf("\n\tSir, you chose %d Kg Tomato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Potato \n\t 2. No Thanks\n\n\tPlease Select which you want:",q2,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Potato");
                         scanf("%d",&Q);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Tomato , %d Kg Rice and %d Kg Dal .",q2,q21,q211);
                         p1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }


          }
          else if(s2==3)
          {    printf("Please Enter the Quantity of Dal");
               scanf("%d",&q211);
               printf("\n\tSir, you chose %d Kg Tomato and %d Kg Dal . Do you want buy another ?\n\t 1. Potato\n\t 2. Rice \n\t 3. No Thanks\n\n\tPlease Select which you want:",q2,q211);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Potato");
                    scanf("%d",&Q);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato and %d Kg Dal . Do you want buy another ?\n\t 1. Rice \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q2,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Rice");
                         scanf("%d",&q21);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==2)
               {    printf("Please Enter the Quantity of Rice");
                    scanf("%d",&q21);
                    printf("\n\tSir, you chose %d Kg Tomato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Potato \n\t 2. No Thanks\n\n\tPlease Select which you want:",q2,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Potato");
                         scanf("%d",&Q);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal .",Q,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==3)
               {
                    printf("\n\tSir, you chose %d Kg Potato and %d Kg Dal . ",Q,q211);

                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);

                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);


               }


          }
          else if(s2==4)
          {
               printf("\n\tSir, you chose %d Kg Tomato ",q2);
               t1=q2 *200;
               printf("\n%d Kg Potato is %d Taka",q2,t1);
               printf("\n___________________________");
               P1=t1;
               printf("\nTotal Price is %d Taka Only ",P1);


          }


     }
     if(serial==3)
     {    printf("Please Enter the Quantity of Rice");
          scanf("%d",&q21);
          printf("\n\tSir, you chose %d Kg Rice. Do you want buy another ? \n\t 1. Tomato\n\t 2. Potato\n\t 3. Dal \n\t 4. No Thanks\n\n\tPlease Select which you want:",q21);
          scanf("%d",&s2);
          if(s2==1)
          {    printf("Please Enter the Quantity of Tomato");
               scanf("%d",&q2);
               printf("\n\tSir, you chose %d Kg Potato and %d Kg Tomato . Do you want buy another ?\n\t 1. Potato\n\t 2. Dal \n\t 3. No Thanks\n\n\tPlease Select which you want:",Q,Q);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Potato");
                    scanf("%d",&Q);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato and %d Kg Rice . Do you want buy another ?\n\t 1. Dal \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q2,q21);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Dal");
                         scanf("%d",&q211);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato ,%d Kg Tomato and %d Kg Rice .",Q,q2,q21);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }

               else if(s21==2)
               {    printf("Please Enter the Quantity of Dal");
                    scanf("%d",&q211);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Tomato \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Tomato");
                         scanf("%d",&q2);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal .",Q,q2,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==3)
               {
                    printf("\n\tSir, you chose %d Kg Potato and %d Kg Tomato . ",Q,q2);

                         r1=(q21*20);
                         printf("\n%d Kg Rice is %d Taka",q21,p1);

                         d1=(q2*160);
                         printf("\n%d Kg Tomato is %d Taka",q2,d1);
                         printf("\n___________________________");
                         P1=r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);


               }
          }
          else if(s2==2)
          {    printf("Please Enter the Quantity of Rice");
               scanf("%d",&q21);
               printf("\n\tSir, you chose %d Kg Potato and %d Kg Rice . Do you want buy another ?\n\t 1. Tomato\n\t 2. Dal \n\t 3. No Thanks\n\n\tPlease Select which you want:",Q,q21);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Tomato");
                    scanf("%d",&q2);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato and %d Kg Rice . Do you want buy another ?\n\t 1. Dal \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q2,q21);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Dal");
                         scanf("%d",&q211);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                     else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato ,%d Kg Tomato and %d Kg Rice  .",Q,q2,q21);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         t1=(q211*160);
                         printf("\n%d Kg Tomato is %d Taka",q2,d1);
                         printf("\n___________________________");
                         P1=p1+r1+t1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                     }

               }
               else if(s21==2)
               {    printf("Please Enter the Quantity of Dal");
                    scanf("%d",&q211);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Tomato \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Tomato");
                         scanf("%d",&q2);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal .",Q,q2,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==3)
               {
                    printf("\n\tSir, you chose %d Kg Tomato and %d Kg Rice . ",q2,q21);
                         p1=(q2*200);
                         printf("\n%d Kg Potato is %d Taka",q2,p1);
                         r1=(q21*160);
                         printf("\n%d Kg Dal is %d Taka",q21,r1);
                         printf("\n___________________________");
                         P1=p1+r1;
                         printf("\nTotal Price is %d Taka Only ",P1);


               }


          }
          else if(s2==3)
          {    printf("Please Enter the Quantity of Dal");
               scanf("%d",&q211);
               printf("\n\tSir, you chose %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Tomato\n\t 2. Rice \n\t 3. No Thanks\n\n\tPlease Select which you want:",q21,q211);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Tomato");
                    scanf("%d",&q2);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato and %d Kg Dal . Do you want buy another ?\n\t 1. Rice \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q2,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Rice");
                         scanf("%d",&q21);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==2)
               {    printf("Please Enter the Quantity of Rice");
                    scanf("%d",&q21);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Tomato \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Tomato");
                         scanf("%d",&q2);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal .",Q,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==3)
               {
                    printf("\n\tSir, you chose %d Kg Rice and %d Kg Dal . ",q21,q211);

                         p1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,p1);

                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);


               }


          }
          else if(s2==4)
          {
               printf("\n\tSir, you chose %d Kg Rice ",q21);
               p1=q21*500;
               printf("\n%d Kg Rice is %d Taka",q21,p1);
               printf("\n___________________________");
               P1=q21;
               printf("\nTotal Price is %d Taka Only ",P1);


          }



     }

     if(serial==4)
     {    printf("Please Enter the Quantity of Dal");
          scanf("%d",&q211);
          printf("\n\tSir, you chose %d Kg Dal. Do you want buy another ? \n\t 1. Tomato\n\t 2. Rice\n\t 3. Potato \n\t 4. No Thanks\n\n\tPlease Select which you want:",q211);
          scanf("%d",&s2);
          if(s2==1)
          {    printf("Please Enter the Quantity of Tomato");
               scanf("%d",&q2);
               printf("\n\tSir, you chose %d Kg Potato and %d Kg Tomato . Do you want buy another ?\n\t 1. Rice\n\t 2. Potato \n\t 3. No Thanks\n\n\tPlease Select which you want:",Q,q2);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Rice");
                    scanf("%d",&q21);
                    printf("\n\tSir, you chose %d Kg Dal , %d Kg Tomato and %d Kg Rice . Do you want buy another ?\n\t 1. Potato \n\t 2. No Thanks\n\n\tPlease Select which you want:",q211,q2,q21);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Potato");
                         scanf("%d",&Q);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato ,%d Kg Tomato and %d Kg Rice .",Q,q2,q21);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }

               else if(s21==2)
               {    printf("Please Enter the Quantity of Tomato");
                    scanf("%d",&q2);
                    printf("\n\tSir, you chose %d Kg Tomato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Potato \n\t 2. No Thanks\n\n\tPlease Select which you want:",q2,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Potato");
                         scanf("%d",&Q);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal .",Q,q2,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Tomato is %d Taka",q2,p1);
                         r1=(q2*200);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==3)
               {
                    printf("\n\tSir, you chose %d Kg Potato and %d Kg Tomato . ",Q,q2);

                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);

                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);


               }
          }
          else if(s2==2)
          {    printf("Please Enter the Quantity of Rice");
               scanf("%d",&q21);
               printf("\n\tSir, you chose %d Kg Dal and %d Kg Rice . Do you want buy another ?\n\t 1. Tomato\n\t 2. Potato \n\t 3. No Thanks\n\n\tPlease Select which you want:",q211,q21);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Tomato");
                    scanf("%d",&q2);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato and %d Kg Rice . Do you want buy another ?\n\t 1. Potato \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q2,q21);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Potato");
                         scanf("%d",&Q);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                     else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato ,%d Kg Tomato and %d Kg Rice  .",Q,q2,q21);
                         p1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         t1=(q211*160);
                         printf("\n%d Kg Tomato is %d Taka",q2,d1);
                         printf("\n___________________________");
                         P1=p1+r1+t1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                     }

               }
               else if(s21==2)
               {    printf("Please Enter the Quantity of potato");
                    scanf("%d",&Q);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Tomato \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Tomato");
                         scanf("%d",&q2);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal .",Q,q2,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==3)
               {
                    printf("\n\tSir, you chose %d Kg Dal and %d Kg Rice . ",q211,q21);

                         p1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,p1);

                         r1=(q21*160);
                         printf("\n%d Kg Dal is %d Taka",q21,r1);
                         printf("\n___________________________");
                         P1=p1+r1;
                         printf("\nTotal Price is %d Taka Only ",P1);


               }


          }
          else if(s2==3)
          {    printf("Please Enter the Quantity of Potato");
               scanf("%d",&Q);
               printf("\n\tSir, you chose %d Kg Potato and %d Kg Dal . Do you want buy another ?\n\t 1. Tomato\n\t 2. Rice \n\t 3. No Thanks\n\n\tPlease Select which you want:",Q,q211);
               scanf("%d",&s21);
               if(s21==1)
               {    printf("Please Enter the Quantity of Tomato");
                    scanf("%d",&q2);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato and %d Kg Dal . Do you want buy another ?\n\t 1. Rice \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q2,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Rice");
                         scanf("%d",&q21);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==2)
               {    printf("Please Enter the Quantity of Rice");
                    scanf("%d",&q21);
                    printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal . Do you want buy another ?\n\t 1. Tomato \n\t 2. No Thanks\n\n\tPlease Select which you want:",Q,q21,q211);
                    scanf("%d",&s211);
                    if(s211==1)
                    {    printf("Please Enter the Quantity of Tomato");
                         scanf("%d",&q2);
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Tomato , %d Kg Rice and %d Kg Dal .",Q,q2,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         t1=(q2*200);
                         printf("\n%d Kg Tomato is %d Taka",q2,t1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+t1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }
                    else if(s211==2)
                     {
                         printf("\n\tSir, you chose %d Kg Potato , %d Kg Rice and %d Kg Dal .",Q,q21,q211);
                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);
                         r1=(q21*50);
                         printf("\n%d Kg Rice is %d Taka",q21,r1);
                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+r1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);
                    }

               }
               else if(s21==3)
               {
                    printf("\n\tSir, you chose %d Kg Potato and %d Kg Dal . ",Q,q211);

                         p1=(Q*20);
                         printf("\n%d Kg Potato is %d Taka",Q,p1);

                         d1=(q211*160);
                         printf("\n%d Kg Dal is %d Taka",q211,d1);
                         printf("\n___________________________");
                         P1=p1+d1;
                         printf("\nTotal Price is %d Taka Only ",P1);


               }


          }
          else if(s2==4)
          {
               printf("\n\tSir, you chose %d Kg Dal ",q211);
               p1=q211*160;
               printf("\n%d Kg Potato is %d Taka",q211,p1);
               printf("\n___________________________");
               P1=p1;
               printf("\nTotal Price is %d Taka Only ",P1);


          }


     }
 getch();









    /* if(serial==1)
     {
          printf("\n\n\tThe price of Potato is 20tk per kg");
          printf("\n\tEnter the product quantity ");
          scanf("%d",&quantity);
          printf("\n\tYou will take %d kg of Potato",quantity);
          price=quantity*20;
          printf("\n\n\tTotal price = %d\n\n\t",price);
     }
     else if(serial==2)
     {
          printf("\n\n\tThe rate of Tomato is 200tk per kg");
          printf("\n\tEnter the product quantity ");
          scanf("%d",&quantity);
          printf("\n\tYou will take %d kg of tomato",quantity);

          price=quantity*200;
          printf("\n\n\tTotal price = %d\n\n\t",price);
     }
     else if(serial==3)
     {
          printf("\n\n\tThe rate of Rice is 50tk per kg");
          printf("\n\tEnter the product quantity ");
          scanf("%d",&quantity);
          printf("\n\tYou will take %d kg of Rice",quantity);

          price=quantity*50;
          printf("\n\n\ttotal price = %d\n\n\t",price);
     }
     else if(serial==4)
     {
          printf("\n\n\tThe rate of Dal is 160tk per kg");
          printf("\n\tEnter the product quantity");
          scanf("%d",&quantity);
          printf("\n\tYou will take %d kg of Dal ",quantity);
          price=quantity*160;
          printf("\n\n\tTotal price = %d\n\n\t",price);
     }
     else
     {
          printf("\n\tSorry,We are out of stock");


     }*/

     return 0;


}

