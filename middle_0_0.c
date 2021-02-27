#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void swap (int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 



void printArray (int arr[]) 
{ 
    for (int i = 0; i < 11; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 



void randomize ( int arr[]) 
{ 
    srand ( time(NULL) ); 
    for (int i = 10; i >= 0; i--) 
    { 
        int j = rand() % (i+1); 
        swap(&arr[i], &arr[j]); 
    } 
}

void qSetEntertn(int arr[])
{
    int count = 0;
    int ans;

    for(int i = 0; i < 5; i++)
    {
        int r = arr[i];
        printf("\n\n%d.) ", i+1);
        

        switch(r)
        {
            case 1:
            printf("1.Finish this action movie title, \"Avengers: Age of _____\".\n\t1. Warriors\n\t2. Revolution\n\t3. Evolution\n\t4. Ultron");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 4)
            count++;
            else count += 0;
            break;

            case 2:
            printf("Where was the band Can founded?\n\t1. cologne\n\t2. Berlin\n\t3. Munich\n\t4. Frankfurt");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 1)
            count++;
            else count += 0;
            break;

            case 3:
            printf("Which \"Friend\" asks the question \"How you doin'?\"\n\t1. Joey\n\t2. Chandler\n\t3. Monica\n\t4. Ross");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 1)
            count++;
            else count += 0;
            break;

            case 4:
            printf("For which movie did Leonardo Decaprio won the Oscar? \n\t1. Titanic\n\t2. The Revenent\n\t3. Blood Diamond\n\t4. The Aviator");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 2)
            count++;
            else count += 0;
            break;

            case 5:
            printf("Who sang lead vocals for Men At Work? \n\t1. Jerry Speiser\n\t2. Gerg Ham\n\t3. Colin Hay\n\t4. Ron Strykert");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 3)
            count++;
            else count += 0;
            break;

            case 6:
            printf("The director of 2013's \"Out Of The Furnace\" also directed which Oscar winning film? \n\t1. Hostiles\n\t2. Crazy Heart\n\t3. Black Mass\n\t4. Antlers");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 1)
            count++;
            else count += 0;
            break;

            case 7:
            printf("Which of the following hasn't played the role of spider man in movies? \n\t1. Tom Holland\n\t2. Dark Bell\n\t3. Neil Pattrick Harris\n\t4. Tom Welling");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 4)
            count++;
            else count += 0;
            break;

            case 8:
            printf("Which name is played most number of times by Amitabh Bachchan? \n\t1. Ravi\n\t2. Vijay\n\t3. Ajay\n\t4. Kishan");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 2)
            count++;
            else count += 0;
            break;

            case 9:
            printf("Where was Rajnikanth born? \n\t1. Tamilnadu\n\t2. Andhra Pradesh\n\t3. Kerla\n\t4. Karnataka");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 4)
            count++;
            else count += 0;
            break;

            case 10:
            printf("Who of the following was not a judge in Indian Idol session 1? \n\t1. Sonu Nigam\n\t2. Farha Khan\n\t3. Annu Mallik\n\t4. Vishal Dadlani");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 4)
            count++;
            else count += 0;
            break;          
        }
    }
        printf("\n\nYour total score is %d\n", count*5);

}

void qSetScnTech(int arr[])
{
    int count = 0;
    int ans;

    for(int i = 0; i < 5; i++)
    {
        int r = arr[i];
        printf("\n%d.) ", i+1);

        switch(r)
        {
            case 1:
            printf("Study of plants is called _____ \n\t1. Oncology\n\t2. Biology\n\t3. Pomology\n\t4. Botany");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 4)
            count++;
            else count += 0;
            break;

            case 2:
            printf("How many joints does an ant have in each leg? \n\t1. One\n\t2. Eight\n\t3. Three\n\t4. Four");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 3)
            count++;
            else count += 0;
            break;

            case 3:
            printf("What is the formula of sulphuric acid? \n\t1. H2SO3\n\t2. H2SO4\n\t3. H2SO2\n\t4. H2S2O6");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 2)
            count++;
            else count += 0;
            break;

            case 4:
            printf("If you throw a ball in the air, what curve does it trace out? \n\t1. Circle\n\t2. Parabola\n\t3. Elipse\n\t4. Hyperbola");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 2)
            count++;
            else count += 0;
            break;

            case 5:
            printf("What kind of Amino Acids are reqired specially for bodybuilding? \n\t1. Single Chain\n\t2. Branched Chain\n\t3. Aromatic\n\t4. Sulphur Containing");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 2)
            count++;
            else count += 0;
            break;

            case 6:
            printf("In which year did Neil Armstrong walk on the moon? \n\t1. 1959\n\t2. 1965\n\t3. 1967\n\t4. 1969");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 4)
            count++;
            else count += 0;
            break;

            case 7:
            printf("Heavy water contains what isotopic form of hydrogen? \n\t1. Protium\n\t2. Deuterium\n\t3. Tritium\n\t4. None of the above");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 2)
            count++;
            else count += 0;
            break;

            case 8:
            printf("What is the unit of resistance? \n\t1. Volt\n\t2. Ohm\n\t3. Ampere\n\t4. Sigma");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 2)
            count++;
            else count += 0;
            break;

            case 9:
            printf("Which gas comprises most of Venus' atmosphere? \n\t1. Carbon monoxide\n\t2. Carbon Dioxide\n\t3. Sulphur Dioxide\n\t4. Ozone");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 2)
            count++;
            else count += 0;
            break;

            case 10:
            printf("What element has an atomic number of 40? \n\t1. Krypton\n\t2. Molybdenom\n\t3. Niobium\n\t4. Zicronium");
            printf("Enter your only option:  ");
            scanf("%d", &ans);
            if (ans == 4)
            count++;
            else count += 0;
            break;

            case 11:
            printf("What is the process of breaking down food called? \n\t1. Digestion\n\t2. Respiration\n\t3. Conduction\n\t4. Presipitation");
            printf("Enter your only option:  ");
            scanf("%d", &ans);
            if (ans == 1)
            count++;
            else count += 0;
            break;
        }
    }
    printf("\n\nYour total score is %d\n", count*5);
}






void qSetSports(int arr[])
{
    int count = 0;
    int ans;

    for(int i = 0; i < 7; i++)
    {
        int r = arr[i];
        printf("\n\n%d.) ", i+1);

        switch(r)
        {
            case 1:
            printf(" \n\t1. \t2. \t3. \t4. ");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 1)
            count++;
            else count += 0;
            break;
        }
    }
    printf("\nYour total score is %d\n", count*7);
}

void qSetMyth(int arr[])
{
    int count = 0;
    int ans;

    for(int i = 0; i < 7; i++)
    {
        int r = arr[i];
        printf("\n\n%d.) ", i+1);

        switch(r)
        {
            case 1:
            printf(" \n\t1. \t2. \t3. \t4. ");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 1)
            count++;
            else count += 0;
            break;
        }
    }
    printf("\nYour total score is %d\n", count*7);
}

void qSetCrntAfrs(int arr[])
{
    int count = 0;
    int ans;

    for(int i = 0; i < 7; i++)
    {
        int r = arr[i];
        printf("\n%d.) ", i+1);

        switch(r)
        {
            case 1:
            printf(" \n\t1. \t2. \t3. \t4. ");
            printf("\nEnter your only option:  ");
            scanf("%d", &ans);
            if (ans == 1)
            count++;
            else count += 0;
            break;
        }
    }
    printf("\nYour total score is %d\n", count*7);
}


int main()
{
    int choice;
    int sure;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    
    main:
    printf("1 for Sports\n2 for entertainment\n3 for myth\n4 for Science n Tech\n5 for Current Affairs\n");
    printf("Enter: ");
    scanf("%d", &choice);
    if (0< choice < 6)
    printf("\nAre you sure!, click 1 to proceed, otherwise hit 0: ");
    else
    {
        printf("Wrong choice! FILL AGAIN");
        goto main;
    }
    scanf("%d", &sure); 
    if(sure == 1)
       {
           printf("entering further......");
           randomize(arr);
           printArray(arr);
           if(choice == 1)
              qSetSports(arr);
            else if(choice == 2)
              qSetEntertn(arr);
              else if (choice == 3)
                 qSetMyth(arr);
                 else if(choice == 4)
                    qSetScnTech(arr);
                    else if(choice == 5)
                       qSetCrntAfrs(arr);
       }       
    else goto main;

}