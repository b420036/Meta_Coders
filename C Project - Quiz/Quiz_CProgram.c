// This program tests the knowledge of the user by taking a small quiz where the person
// gets to choose from three distinct and interesting topics and gets 5 questions without
// any time limitations.
// It is a really fun way of getting your knowledge tested and even acquiring knowledge!
// This program was made by team 'meta_Coders'.
// Team members are as follows ( in ascending order of their IDs ) :-
//                 AKASH PARIDA        ~~~ ID B420004
//                 PRABHU PREETAM DAS  ~~~ ID B420036
//                 VANSH AGGARWAL      ~~~ ID B420059

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Function prototypes
void scoreBoard(void);
void startGame(void);
void gameHelp(void);
void swap(int *, int *);
void randomize(int[]);
void qSetEntertn(int[]);
void qSetScnTech(int[]);
void qSetCrntAfrs(int[]);
void endGame(int);

// Physically grouped variables definitions using 'struct'
struct play
{
    char name[20];
    int score;
} p; // lets the program access the various variables using the named pointer ('p' in this case) anywhere in the program

// Function main begins program execution
int main(void)
{
    unsigned int action = 0; // variable declaration

    // Instructions and the MENU
    printf("%s", "\n\n\t\tACTION MENU\n");
    printf("%s", "\t\t-----------\n");
    printf("%s", ">> Press \'1\'  to START the game.\n");
    printf("%s", ">> Press \'2\'  to see SCOREBOARD of the game.\n");
    printf("%s", ">> Press \'3\'  to see the game HELP.\n");

    printf("%s", "\n\nI STRONGLY RECOMMEND TO GO FOR THE HELP OPTION FIRST SO THAT\n");
    printf("%s", "YOU ARE THOROUGH WITH THE GAME RULES AND INSTRUCTIONS.\n");

    printf("%s", "\nEnter your choice :  "); // prompt
    scanf("%u", &action); // read the input from the user

    // Carry out the respective actions using the 'switch' selection statement
    switch (action)
    {
    case 1:
        startGame(); // respective function call
        break;

    case 2:
        scoreBoard(); // respective function call
        break;

    case 3:
        gameHelp(); // respective function call
        break;

    default:
        exit(1); // exit the program
        break;
    } // end switch
} // end function main

// User-defined functions definitions

void startGame()
{
    // Local declarations
    int choice;
    int sure;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

main:
    // topic choices
    printf("%s", "\n\nBelow are the topics to choose from.\n");
    printf("%s", "# 1 ~~ Science and Technology\n");
    printf("%s", "# 2 ~~ Entertainment, Movies and Cinema\n");
    printf("%s", "# 3 ~~ Current Affairs\n");
    printf("%s", "\nEnter the number corresponding to the topic you want the quiz on :  "); // prompt
    scanf("%d", &choice); // read the input from the user

    if (0 < choice < 4) {
        printf("\nAre you sure?\nClick \'1\' to proceed, otherwise hit \'0\' : "); // prompt
    } // end if
    else
    {
        printf("Wrong choice! FILL AGAIN.");
        goto main;
    } // end else
    scanf("%d", &sure); // read the input from the user

    if (sure == 1)
    {
        printf("%s", "Now you have to write only your FIRST NAME FOLLOWED IMMEDIATELY BY THE FIRST LETTER OF YOUR SURNAME (WITHOUT ANY SPACES).\n");
        printf("%s", "\n\nPlease, enter your name ( max 20 charaters ) :  "); // prompt
        scanf("%s", p.name); // read the input from the user

        printf("\n............LOADING...........\n\n");
        randomize(arr); // function call
        if (choice == 1)
            qSetScnTech(arr); // respective function call
        else if (choice == 2)
            qSetEntertn(arr); // respective function call
        else if (choice == 3)
            qSetCrntAfrs(arr); // respective function call
    } // end if
    else
        goto main;
} // end function startGame

void qSetEntertn(int arr[])
{
    // Local declarations
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
                count++; // increment of the correct answers' count, if correct, by 1
            else
                count += 0; // increment of the count by 0, if incorrect
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
        } // end switch
    } // end for
    endGame(count); // function call
} // end function qSetEntertn

void qSetScnTech(int arr[])
{
    // Local declarations
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
        } // end switch
    } // end for
    endGame(count); // function call
} // end function qSetScnTech

void qSetCrntAfrs(int arr[])
{
    // Local declarations
    int count = 0;
    int ans;

    for (int i = 0; i < 5; i++)
    {
        int r = arr[i];
        printf("\n%d.) ", i + 1);

        switch (r)
        {
        case 1:
            printf("When will the Assembly Election Results of Four states and one UT be declared? \n\t1. April 30th\n\t2. May 2nd\n\t3. May 30th\n\t4. June 1st");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 2)
                count++;
            else
                count += 0;
            break;

        case 2:
            printf("West Bengal will go into Assembly Polls in how many phases? \n\t1. Five\n\t2. Six\n\t3. Seven\n\t4. Eight");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 4)
                count++;
            else
                count += 0;
            break;

        case 3:
            printf("Which state among the following will not have single-phase elections? \n\t1. Kerala\n\t2. Tamil Nadu\n\t3. Assam\n\t4. None of the above");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 3)
                count++;
            else
                count += 0;
            break;

        case 4:
            printf("Which country has finally permitted the burial of COVID-19 victims after repeated International pleas? \n\t1. Pakistan\n\t2. Bangladesh\n\t3. Sri Lanka\n\t4. India");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 3)
                count++;
            else
                count += 0;
            break;

        case 5:
            printf("The Financial Action Task Force (FATF) on February 25, 2021 retained Pakistan on its 'grey list' till when? \n\t1. June 2021\n\t2. August 2021\n\t3. September 2021\n\t4. October 2021");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 1)
                count++;
            else
                count += 0;
            break;

        case 6:
            printf("Indian social activist Anjali Bhardwaj was honoured with an anti-corruption award by which nation? \n\t1. USA\n\t2. UK\n\t3. France\n\t4. Kanada");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 1)
                count++;
            else
                count += 0;
            break;

        case 7:
            printf("Prime Minister Narendra Modi inaugurated and laid the foundation stone of various developmental initiatives in which state/ UT on February 25, 2021? \n\t1. West Bengal\n\t2. Odisha\n\t3. Puducherry\n\t4. Andhra Pradesh");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 3)
                count++;
            else
                count += 0;
            break;

        case 8:
            printf("Jal Shakti Ministry has selected how many iconic sites for transforming them into Swachh Tourist Destinations under Phase IV of the SIP initiative? \n\t1. 12\n\t2. 11\n\t3. 10\n\t4. 8");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 1)
                count++;
            else
                count += 0;
            break;

        case 9:
            printf("Which country has assumed the Chairmanship of BRICS for 2021? \n\t1. Brazil\n\t2. Russia\n\t3. India\n\t4. China");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 3)
                count++;
            else
                count += 0;
            break;

        case 10:
            printf("Which film won 'Best Film' at the Dadasaheb Phalke International Film Festival Awards 2021? \n\t1. Chhapak\n\t2. Laxmii\n\t3. Dil Bechara\n\t4. Tanhaji");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 4)
                count++;
            else
                count += 0;
            break;
        } // end switch
    } // end for
    endGame(count); // function call
} // end function qSetCrntAfrs

void randomize(int arr[])
{
    srand(time(NULL));
    for (int i = 9; i >= 0; i--)
    {
        int j = rand() % (i + 1);
        swap(&arr[i], &arr[j]);
    } // end for
} // end function randomize

void swap(int *a, int *b)
{
    int temp = *a;
          *a = *b;
          *b = temp;
} // end function swap

void endGame(int count)
{
    // Local declaration
    unsigned int toReset;

    // Opening of the file 'score' which records the names and their points
    FILE *fp;

    if ((fp = fopen("score.txt", "a")) == NULL)
    {
        printf("%s", "\nError in opening the file.\n");
    } // end if

    printf("\n\nYOUR TOTAL SCORE IS: %d OUT OF 25.", count * 5);
    p.score = (count * 5); // determining the points

    // Writting to the file
    fprintf(fp, "%s %d", p.name, p.score);
    fclose(fp);

    // Resetting the game for other players
    printf("%s", "\n\nTo play again, press \'1\' and to exit, press \'0\'\n"); // prompt
    scanf("%u", &toReset); // read the input from the user

    if (toReset == 1)
    {
        printf("%s", "\n\nLet's Play, Again!");
        startGame();
    } // end if
    else
    {
        printf("%s", "\n\nOkay, bye!\nHave a brilliant day ahead!\n\n");
        exit(1);
    } // end else
} // end function endGame

void gameHelp(void)
{
    // Local declaration
    unsigned int actionChoice;

    printf("%s", "\n\n********************---GAME HELP---********************");
    printf("%s", "\n\n--------------------***************--------------------\n");
    printf("%s", "~ There will be a total of 3 topics to choose from.\n");
    printf("%s", "~ Once you choose the topic of your wish you will be prompted to enter you name.\n");
    printf("%s", "~ You have to write only your FIRST NAME FOLLOWED IMMEDIATELY BY THE FIRST LETTER OF YOUR SURNAME (WITHOUT ANY SPACES).\n");
    printf("%s", "~ There will be a total of 5 questions.\n");
    printf("%s", "~ There will be a total of 4 options for each of the 5 questions.\n");
    printf("%s", "~ There will be just one and only one correct option for each of the 5 questions.\n");
    printf("%s", "~ The options will be numbered from \'1\' to \'4\'.\n");
    printf("%s", "~ You have to enter the corresponding number of the option that you think is correct.\n");
    printf("%s", "~ Each question carries only 5 points and no negative marking for wrong answer.\n");
    printf("%s", "~ You will be asked the questions continuously.\n");
    printf("%s", "~ You have to answer each and every question - it is mandatory!.\n");
    printf("%s", "~ You can't go to the next question until you answer the previous one.\n");

    printf("%s", "\n\n\t\t\t  BEST OF LUCK!!!\n");

    printf("%s", "\nTO CONTINUE TO THE QUIZ, PRESS \'1\'\n");
    printf("%s", "TO EXIT THE PROGRAM, PRESS \'0\'");
    printf("%s", "\n\nSo, GAME ON?\n");
    scanf("%u", &actionChoice);

    if (actionChoice == 1)
    {
        printf("%s", "\nYEAH! I KNEW YOU WOULD BE UP FOR THE CHALLENGE!\nHAPPY QUIZ!\n");
        startGame(); // function call
    } // end if
    else
    {
        printf("%s", "\nOkay, bye!\nBut you should have tried this once!\n");
        exit(1);
    } // end else
} //gameHelp ends

void scoreBoard(void)
{
    // Local declaration
    unsigned int nextChoice;

   // Opening the file 'score' and reading the contents
    FILE *fp;

    if ((fp = fopen("score.txt", "r")) == NULL)
    {
        printf("%s", "\n\nError opening the file\n\n");
    } // end if
    else
    {
        printf("%s", "\n\nThe scores are shown in chronological order starting from the fisrt to the latest at the last.");
        printf("%s", "\n\n\t\t\tScore Board\n\n");
        printf("%s", "\t      <NAME>   -->   <POINTS>\n");

        while (fscanf(fp, "%s %d", p.name, &p.score) != EOF)
        {
            printf("%s", "------------------------------------------------\n");
            printf("%20s   -->   %4d\n", p.name, p.score);
        } // end while

        fclose(fp);
    } // end else

    printf("%s", "\nTO CONTINUE TO THE QUIZ, PRESS \'1\'\n");
    printf("%s", "TO EXIT THE PROGRAM, PRESS \'0\'");
    printf("%s", "\n\nSo, want to feature on the SCOREBOARD?\n"); // prompt
    scanf("%u", &nextChoice); // read the input from the user

    if (nextChoice == 1)
    {
        printf("%s", "\nSEE YOU ON THE SCOREBOARD!\nHAPPY QUIZ!\n\n");
        startGame(); // function call
    } // end if
    else
    {
        printf("%s", "\nOkay, bye!\nBut wouldn't have your name looked cool on the SCOREBOARD!?\n");
        exit(1);
    } // end else
} // end function scoreBoard