//// This is going to be fun !
//// Make a program that generates a random number and ask the player to guess it . IF the player guess is higher 
//// than the actual number , the program displayes
//// "LOWER NUMBER PLEASE" . Similarly if the user guess is too low , the program prints "HIGHER NUMBER PLEASE". 
//// When the user guesses the correct number, the program displayes the number of guesses the player used to arrive at the number.

# include<stdio.h>
# include<conio.h>
# include<stdlib.h> /// <-----|ONLY THIS IS USED TO GENERATE SAME RANDOM NUMBER EACH TIME.
# include<time.h>   /// <-----|      Both are used to generate a different random number each time. 

int main()
{
    int number , guess , nguesses=1;                //// Try yourself : Put nguesses=0 then, run program and then see what happens.
    srand(time(0));

    number = rand()%100 + 1 ;                     /// Note : [ rand()%100 ] <------ This will all ways give any random no. b/w 0 to 20.
                                                  /// Note :  But  [ rand()%100 ] + 1 <------ This will all ways give any random no. b/w 1 to 100.

    //  printf("The number is %d . \n",number);           /// <------- Commenting out this line is very important . As to hide the guessed number .

   //  /// I want to keep running the loop until the right number is guessed.
   printf("\n Let me play with you ,Guess the number b/w 1 to 100 :---- \n");

   do
   {
     scanf("%d" , &guess);

      if(guess>number)
      {
         printf("Guess Lower number please !! \n"); 
      }

       else if (guess<number)
      {
         printf("Guess higher number please !! \n");
      }
       
      else
      {
         printf("BINGO !! You got the right no. \n And You guessed it in %d attempts \n",nguesses);
      }
        nguesses++;   
   } 
   while( guess != number);



   if(nguesses<5)
   {
     printf("Excellent---> First rank.");
   } 


   else if (nguesses<10)
   {
     printf("Good---> Second rank.");
   }


   else if (nguesses<15)
   {
     printf("Not bad---> Third rank.");
   }


   else
   {
     printf("TRY YOUR LUCK NEXT TIME.");
   }
  

   getch();
   return(0);
}








// # include<stdio.h>
// # include<conio.h>
// int main()
// {
//    char ch[20] , t='\0';
//    int i =0;

//    printf("\n Enter your secret password only alphabets [max length 10] : ");

//    while (i<=9)
//    {
//       ch[i] = getch();
//       t=ch[i];

//       if (t==13) break;
//       else printf("*");
//       i++; 
//    }

//     ch[i] ='\0';
//     i=0;
    
//     printf("\n");
//     printf("\n Your password is : %s ",ch);

//    getch();
//    return(0);
// }









// # include<stdio.h>
// # include<conio.h>
// # include<stdlib.h> /// <-----|ONLY THIS IS USED TO GENERATE SAME RANDOM NUMBER EACH TIME.
// # include<time.h>   /// <-----|      Both are used to generate a different random number each time. 

// int main()
// {
//     int number ,t ;
//     int i =0;
//     int guess , nguesses=1;                //// Try yourself : Put nguesses=0 then, run program and then see what happens.

//     srand(time(0));

//     number = rand()%100 + 1 ;                     /// Note : [ rand()%100 ] <------ This will all ways give any random no. b/w 0 to 20.
//                                                   /// Note :  But  [ rand()%100 ] + 1 <------ This will all ways give any random no. b/w 1 to 100.
//    //  printf("The number is %d . \n",number);

//    // char ch[20] , t='\0';
   

//    // printf("\n Enter your secret password only alphabets [max length 10] : ");




//    while (i<=100)
//    {
//       number = getch();
//       t=number;

//       if (t==13) break;
//       else printf("*");
//       i++;
//    }

//     number ='\64';                                /// Change this number and play with computer.
//     i=0;

//     printf("\n");
//     printf("\n Hey buddy I have guessed a number : %d ",number);

   


//     do
//     {
//      printf("\n let me play with you, Guess the number b/w 1 to 100 :---- \n");
//      scanf(" %d" , &guess);

//        if(guess>number)
//        {
//           printf("Guess Lower number please !! \n"); 
//        }

//        else if (guess<number)
//        {
//           printf("Guess higher number please !! \n");
//        }
       
//        else
//        {
//           printf(" BINGO !! You got the right no. \n And You guessed it in %d attempts. \n",nguesses);
//        }
//         nguesses++;   
//     } 
//     while( guess != number);




//     if(nguesses<5)
//     {
//      printf("Excellent---> First rank.");
//     } 


//      else if (nguesses<10)
//     {
//      printf("Good---> Second rank.");
//     }


//      else if (nguesses<15)
//     {
//      printf("Not bad---> Third rank.");
//     }


//      else
//     {
//      printf("TRY YOUR LUCK NEXT TIME.");
//     }
  

//     getch();
//     return(0);
// }