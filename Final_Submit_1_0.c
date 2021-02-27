/*  This is meta_coders.
    Vansh, Akash, Prabhu
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>

//Function Declarations
void highScore(void); 
void startGame(void);
void gameHelp(void);
void swap(int*, int*);
void randomize(int []);
void qSetEntertn(int []);
void qSetScnTech(int []);
void qSetCrntAfrs(int []);
void endGame(int);
        

int main(void)
{
   unsigned int action = 0;
                                                                                            //Disclamer and Informations
   printf("%s", "\n\n\t\tACTION MENU\n");
   printf("%s", "\t\t-----------\n");
   printf("%s", ">> Press \'1\'  to START the game.\n");                                    //Prompt
   printf("%s", ">> Press \'2\'  to see LEADER BOARD of the game.\n");                      
   printf("%s", ">> Press \'3\'  to see the game HELP.\n");

   printf("%s", "\n\nI STRONGLY RECOMMEND TO GO FOR THE HELP OPTION FIRST SO THAT\n");
   printf("%s", "YOU ARE THOROUGH WITH THE GAME RULES AND INSTRUCTIONS.\n");

   printf("%s", "\nEnter your choice :  ");
   scanf("%u", &action);                                                                   // read the input from the user

   switch (action)
   {
   case 1:
      startGame();                                    
      break;

   case 2:
      highScore();
      break;

   case 3:
      gameHelp();
      break;

   default:
      exit(1);
      break;
   }  //switch
}  //main



void startGame()
{
   int choice;
   int sure;
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
main:
   printf("%s", "\n\nBelow are the topics to choose from.\n");
   printf("%s", "# 1 ~~ Science and Technology\n");
   printf("%s", "# 2 ~~ Entertainment, Movies and Cinema\n");
   printf("%s", "# 3 ~~ Current Affairs\n");
   printf("%s", "\nEnter the number corresponding to the topic you want the quiz on :  ");

   scanf("%d", &choice);
   if (0 < choice < 4)
      printf("\nAre you sure!, click 1 to proceed, otherwise hit 0 : ");
   else
   {
      printf("Wrong choice! FILL AGAIN");
      goto main;
   }
   scanf("%d", &sure);
   if (sure == 1)
   {
      printf("\nProceeding..........\n\n");
      randomize(arr);
      if (choice == 1)
         qSetScnTech(arr);
      else if (choice == 2)
         qSetEntertn(arr);
      else if (choice == 3)
         qSetCrntAfrs(arr);
   }
   else
      goto main;
}


void qSetEntertn(int arr[])
{
   int count = 0;
   int ans;

   for (int i = 0; i < 5; i++)
   {
      int r = arr[i];
      printf("\n\n%d.) ", i + 1);

      switch (r)
      {
      case 1:
         printf("1.Finish this action movie title, \"Avengers: Age of _____\".\n\t1. Warriors\n\t2. Revolution\n\t3. Evolution\n\t4. Ultron");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 4)
            count++;
         else
            count += 0;
         break;

      case 2:
         printf("Where was the band Can founded?\n\t1. cologne\n\t2. Berlin\n\t3. Munich\n\t4. Frankfurt");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 1)
            count++;
         else
            count += 0;
         break;

      case 3:
         printf("Which \"Friend\" asks the question \"How you doin'?\"\n\t1. Joey\n\t2. Chandler\n\t3. Monica\n\t4. Ross");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 1)
            count++;
         else
            count += 0;
         break;

      case 4:
         printf("For which movie did Leonardo Decaprio won the Oscar? \n\t1. Titanic\n\t2. The Revenent\n\t3. Blood Diamond\n\t4. The Aviator");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 2)
            count++;
         else
            count += 0;
         break;

      case 5:
         printf("Who sang lead vocals for Men At Work? \n\t1. Jerry Speiser\n\t2. Gerg Ham\n\t3. Colin Hay\n\t4. Ron Strykert");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 3)
            count++;
         else
            count += 0;
         break;

      case 6:
         printf("The director of 2013's \"Out Of The Furnace\" also directed which Oscar winning film? \n\t1. Hostiles\n\t2. Crazy Heart\n\t3. Black Mass\n\t4. Antlers");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 1)
            count++;
         else
            count += 0;
         break;

      case 7:
         printf("Which of the following hasn't played the role of spider man in movies? \n\t1. Tom Holland\n\t2. Dark Bell\n\t3. Neil Pattrick Harris\n\t4. Tom Welling");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 4)
            count++;
         else
            count += 0;
         break;

      case 8:
         printf("Which name is played most number of times by Amitabh Bachchan? \n\t1. Ravi\n\t2. Vijay\n\t3. Ajay\n\t4. Kishan");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 2)
            count++;
         else
            count += 0;
         break;

      case 9:
         printf("Where was Rajnikanth born? \n\t1. Tamilnadu\n\t2. Andhra Pradesh\n\t3. Kerla\n\t4. Karnataka");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 4)
            count++;
         else
            count += 0;
         break;

      case 10:
         printf("Who of the following was not a judge in Indian Idol session 1? \n\t1. Sonu Nigam\n\t2. Farha Khan\n\t3. Annu Mallik\n\t4. Vishal Dadlani");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 4)
            count++;
         else
            count += 0;
         break;
      }
   }
   endGame(count);
}

void qSetScnTech(int arr[])
{
   int count = 0;
   int ans;

   for (int i = 0; i < 5; i++)
   {
      int r = arr[i];
      printf("\n%d.) ", i + 1);

      switch (r)
      {
      case 1:
         printf("Study of plants is called _____ \n\t1. Oncology\n\t2. Biology\n\t3. Pomology\n\t4. Botany");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 4)
            count++;
         else
            count += 0;
         break;

      case 2:
         printf("How many joints does an ant have in each leg? \n\t1. One\n\t2. Eight\n\t3. Three\n\t4. Four");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 3)
            count++;
         else
            count += 0;
         break;

      case 3:
         printf("What is the formula of sulphuric acid? \n\t1. H2SO3\n\t2. H2SO4\n\t3. H2SO2\n\t4. H2S2O6");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 2)
            count++;
         else
            count += 0;
         break;

      case 4:
         printf("If you throw a ball in the air, what curve does it trace out? \n\t1. Circle\n\t2. Parabola\n\t3. Elipse\n\t4. Hyperbola");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 2)
            count++;
         else
            count += 0;
         break;

      case 5:
         printf("What kind of Amino Acids are reqired specially for bodybuilding? \n\t1. Single Chain\n\t2. Branched Chain\n\t3. Aromatic\n\t4. Sulphur Containing");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 2)
            count++;
         else
            count += 0;
         break;

      case 6:
         printf("In which year did Neil Armstrong walk on the moon? \n\t1. 1959\n\t2. 1965\n\t3. 1967\n\t4. 1969");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 4)
            count++;
         else
            count += 0;
         break;

      case 7:
         printf("Heavy water contains what isotopic form of hydrogen? \n\t1. Protium\n\t2. Deuterium\n\t3. Tritium\n\t4. None of the above");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 2)
            count++;
         else
            count += 0;
         break;

      case 8:
         printf("What is the unit of resistance? \n\t1. Volt\n\t2. Ohm\n\t3. Ampere\n\t4. Sigma");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 2)
            count++;
         else
            count += 0;
         break;

      case 9:
         printf("Which gas comprises most of Venus' atmosphere? \n\t1. Carbon monoxide\n\t2. Carbon Dioxide\n\t3. Sulphur Dioxide\n\t4. Ozone");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 2)
            count++;
         else
            count += 0;
         break;

      case 10:
         printf("What element has an atomic number of 40? \n\t1. Krypton\n\t2. Molybdenom\n\t3. Niobium\n\t4. Zicronium");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 4)
            count++;
         else
            count += 0;
         break;
      }
   }
   endGame(count);
}

void qSetCrntAfrs(int arr[])
{
   int count = 0;
   int ans;

   for (int i = 0; i < 5; i++)
   {
      int r = arr[i];
      printf("\n%d.) ", i + 1);

      switch (r)
      {
      case 1:
         printf(" \n\t1. \t2. \t3. \t4. ");
         printf("\nEnter your only option:  ");
         scanf("%d", &ans);
         if (ans == 1)
            count++;
         else
            count += 0;
         break;
      }
   }
   endGame(count);
}


void swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}


void randomize(int arr[])
{
   srand(time(NULL));
   for (int i = 9; i >= 0; i--)
   {
      int j = rand() % (i + 1);
      swap(&arr[i], &arr[j]);
   }
}

struct play                                                                                  //Initialization of player name and score
{
   char name[20];
   int score;
} p; 


void endGame( int count)
{
   FILE *fp;

   if ((fp = fopen("score.txt", "a")) == NULL)
   {
      printf("%s", "\nError in opening the file.\n");
   }

   printf("YOUR TOTAL SCORE IS: %d.", count*5);
   printf("%s", "\n\nPlease, enter your name ( max 20 charaters including spaces ) :  ");
   scanf("%s", p.name);
   p.score = ( count * 5 );
   int toReset;
   // Writting to the file
   fprintf( fp, "%s %d", p.name, p.score );
   fclose( fp );

   // Resetting the game for other players
   printf( "%s", "\n\nTo play again, press \'1\' and to exit, press \'0\'\n" );
   scanf( "%u", &toReset );

   if( toReset == 1 ) {
      printf( "%s", "\n\nLet's Play, Again!" );
      startGame( );
   }
   else
   {
      printf( "%s", "\n\nOkay, bye!\nHave a brilliant day ahead!\n\n" );
      exit( 1 );
   }

}



//Information provided to help the User
void gameHelp(void)
{
   unsigned int actionChoice;

   printf("%s", "\n\n********************---GAME HELP---********************");
   printf("%s", "\n\n--------------------***************--------------------\n");
   printf("%s", "~ There will be a total of 5 questions.\n");
   printf("%s", "~ There will be a total of 4 options for each of the 5 questions.\n");
   printf("%s", "~ There will be just one and only one correct option for each of the 5 questions.\n");
   printf("%s", "~ The options will be numbered from \'1\' to \'4\'\n");
   printf("%s", "~ You have to enter the corresponding number of the option that you think is correct\n");
   printf("%s", "~ Each question carries only 5 points and no negative marking for wrong answer.\n");
   printf("%s", "~ You will be asked the questions continuously.\n");

   printf("%s", "\n\n\t\t\t  BEST OF LUCK!!!\n");

   printf("%s", "\nTO CONTINUE TO THE QUIZ, PRESS \'1\'\n");
   printf("%s", "TO EXIT THE PROGRAM, PRESS \'0\'");
   printf("%s", "\n\nSo, GAME ON?\n");
   scanf("%u", &actionChoice);

   if (actionChoice == 1)
   {
      printf("%s", "\nYEAH! I KNEW YOU WOULD BE UP FOR THE CHALLENGE!\nHAPPY QUIZ!\n");
      startGame();
   }
   else
   {
      printf("%s", "\nOkay, bye!\nBut you should have tried this once!\n");
      exit(1);
   }
}  //gameHelp ends


//Display the highest score and the player name
void highScore(void)
{
   unsigned int nextChoice;

   FILE *fp;

   if ((fp = fopen("score.txt", "r")) == NULL)
   {
      printf("%s", "\n\nError opening the file\n\n");
   }
   else
   {
      printf("%s", "\n\n\t\t\tHigh Scores\n\n");
      printf("%s", "<NAME>   -->   <POINTS>\n");

      while (fscanf(fp, "%s %d", p.name, &p.score) != EOF)
      {
         printf("%s", "------------------------------------------------\n");
         printf("%20s   -->   %4d\n", p.name, p.score);
      }

      fclose(fp);
   }

   printf("%s", "\nTO CONTINUE TO THE QUIZ, PRESS \'1\'\n");
   printf("%s", "TO EXIT THE PROGRAM, PRESS \'0\'");
   printf("%s", "\n\nSo, wnat to feature on the LEADERBOARD?\n");
   scanf("%u", &nextChoice);

   if (nextChoice == 1)
   {
      printf("%s", "\nSEE YOU ON THE LEADERBOARD!\nHAPPY QUIZ!\n");
      startGame();
   }
   else
   {
      printf("%s", "\nOkay, bye!\nBut wouldn't your name on the leaderboard look cool??\n");
      exit(1);
   }
}  //highScore ends
