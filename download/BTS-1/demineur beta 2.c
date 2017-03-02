#include<time.h>
#include<myconio.h>

int  tab[12][12]={0},tabB[18][18]={0},tabC[32][18]={0};
char tab2[12][12]={0},tab2B[18][18]={0},tab2C[32][18]={0},touche;
int i=1,j=1 ,present2;
int x=0, y=0;



void inittab() //reinitialiser tableaux débutant si on recommence une partie
{
int i,j;
    for(i=0; i<12; i++)
    {
        for(j=0;j<12; j++)
        {
            tab[i][j]=0;
            tab2[i][j]=0;
        }
    }
}

void inittab2() //reinitialiser tableaux intermédiaire si on recommence une partie
{
int i,j;
    for(i=0; i<18; i++)
    {
        for(j=0;j<18; j++)
        {
            tabB[i][j]=0;
            tab2B[i][j]=0;
        }
    }
}
void inittab3() //reinitialiser tableaux expert si on recommence une partie
{
int i,j;
    for(i=0; i<32; i++)
    {
        for(j=0;j<18; j++)
        {
            tabC[i][j]=0;
            tab2C[i][j]=0;
        }
    }
}
void afficheTab2() //affiche grille de jeu

{
int i,j;
    for(i=1; i<11; i++)
    {
        for(j=1;j<11; j++)
        {
            gotoxy(i,j);
            Sleep(10);
            printf("-");
        }
    }
}
void afficheTab22() //affiche grille de jeu
{
int i,j;
    for(i=1; i<17; i++)
    {
        for(j=1;j<17; j++)
        {
            gotoxy(i,j);
            Sleep(10);
            printf("-");

        }
    }
}

void afficheTab23() //affiche grille de jeu
{
int i,j;
    for(i=1; i<31; i++)
    {
        for(j=1;j<17; j++)
        {
            gotoxy(i,j);
            Sleep(10);
            printf("-");
        }
    }
}


void placeMines()
{
    int k,x,y;
    for(k=0; k<10; k++)
    {
        x = rand()%10+1;
        y = rand()%10+1;
          if (tab[x][y] == 9)
        {
            k--;
        }else

        tab[x][y] = 9;

    }

}
void placeMines2()
{
    int k,x,y;
    for(k=0; k<40; k++)
    {
        x = rand()%16+1;
        y = rand()%16+1;
          if (tabB[x][y] == 9)
        {
            k--;
        }else

        tabB[x][y] = 9;

    }

}


void placeMines3()
{
    int k,x,y;
    for(k=0; k<99; k++)
    {
        x = rand()%16+1;
        y = rand()%30+1;
          if (tabC[x][y] == 9)
        {
            k--;
        }else

        tabC[x][y] = 9;

    }

}


void comptage() // touche fouiller + comptage mine + condition de victoire
{
    int present=0;
    if (touche==102)
    {
    if(tab2[i][j]==0)
    {  present2++;}

        if(present2==90)
        {
            system("cls");
            gotoxy(10,10);
            printf("\n\n\n\t\t\tVous avez gagne :)!!");
            getch();
        system("cls");
        main();
        }
    if(tab[i][j]==9){
        system("cls");
        gotoxy(10,10);
        printf("vous avez perdu! :'(");
        for(i=0;i<3;i++)
        {
            Sleep(1000);
            printf("!");
        }
        getch();
        system("cls");
        main();
        }
        else{
    if(tab[i-1][j]==9)
        {present++;}
    if(tab[i-1][j+1]==9)
        {present++;}
    if(tab[i-1][j-1]==9)
        {present++;}
    if(tab[i][j+1]==9)
        {present++;}
    if(tab[i+1][j]==9)
        {present++;}
    if(tab[i+1][j+1]==9)
        {present++;}
    if(tab[i][j-1]==9)
        {present++;}
    if(tab[i+1][j-1]==9)
        {present++;}
    printf("%d",present);
    }
    tab2[i][j]=1;}
}

void comptage2()
{
    int present=0;
    if (touche==102)
    {
    if(tab2B[i][j]==0)
    {  present2++;}

        if(present2==216)
        {
            system("cls");
            printf("\n\n\n\t\t\tVous avez gagne :D!!");
            getch();
        system("cls");
        main();
        }
    if(tabB[i][j]==9){
        system("cls");
        gotoxy(10,10);
        printf("vous avez perdu! :'(");
        for(i=0;i<3;i++)
        {
            Sleep(1000);
            printf("!");
        }
        getch();
        system("cls");
        main();
        }

        else{
    if(tabB[i-1][j]==9)
        {present++;}
    if(tabB[i-1][j+1]==9)
        {present++;}
    if(tabB[i-1][j-1]==9)
        {present++;}
    if(tabB[i][j+1]==9)
        {present++;}
    if(tabB[i+1][j]==9)
        {present++;}
    if(tabB[i+1][j+1]==9)
        {present++;}
    if(tabB[i][j-1]==9)
        {present++;}
    if(tabB[i+1][j-1]==9)
        {present++;}
    printf("%d",present);
    }
    tab2B[i][j]=1;}
}


void comptage3()
{
    int present=0;

    gotoxy(i,j);
    if (touche==102)
    {
    if(tab2C[i][j]==0)
    {  present2++;}

        if(present2==381)
        {
            system("cls");
            printf("\n\n\n\t\t\tVous avez gagne :D!!");
            getch();
        system("cls");
        main();
        }
      if(tabC[i][j]==9){
        system("cls");
        gotoxy(10,10);
        printf("Vous avez Perdu!");
        for(i=0;i<3;i++)
        {
            Sleep(1000);
            printf("!");
        }
        getch();
        system("cls");
        main();
        }
        else{
    if(tabC[i-1][j]==9)
        {present++;}
    if(tabC[i-1][j+1]==9)
        {present++;}
    if(tabC[i-1][j-1]==9)
        {present++;}
    if(tabC[i][j+1]==9)
        {present++;}
    if(tabC[i+1][j]==9)
        {present++;}
    if(tabC[i+1][j+1]==9)
        {present++;}
    if(tabC[i][j-1]==9)
        {present++;}
    if(tabC[i+1][j-1]==9)
        {present++;}
    printf("%d",present);
    }
    tab2B[i][j]=1;}
}

void cursor() //touche directionnelle + touche drapeau
{
    if(touche == -32)
    {
    touche=getch();
      switch(touche)
      {
        case 72:
        if( j>1){
        j--;}
        else(j=j);
        break;
        case 75:
        if(i>1){
        i--;}
        else(i=i);
        break;
        case 80:
        if(j<10){
        j++;}else(j=j);

        break;
        case 77:
        if( i<10){
        i++;}
        else(i=i);
        break;}}

    if(touche==100)
    {
     if(tab2[i][j]==0)
     {
         tab2[i][j]=2;
         printf("D");
     }else if(tab2[i][j]==2)
         {tab2[i][j]=0;
         printf("-");}
    }gotoxy(i,j);
}

void cursor2()
{
    gotoxy(i,j);
    if(touche == -32)
    {
    touche=getch();
      switch(touche)
      {
        case 72:
        if( j>1){
        j--;}
        else(j=j);
        break;
        case 75:
        if(i>1){
        i--;}
        else(i=i);
        break;
        case 80:
        if(j<16){
        j++;}else(j=j);

        break;
        case 77:
        if( i<16){
        i++;}
        else(i=i);
        break;}}

    gotoxy(i,j);

    if(touche==100)
    {
     if(tab2[i][j]==0)
     {
         tab2[i][j]=2;
         printf("D");
     }else{
         tab2[i][j]=0;
         printf("-");}
    }gotoxy(i,j);

}

void cursor3()
{
    gotoxy(i,j);
    if(touche == -32)
    {
    touche=getch();
      switch(touche)
      {
        case 72:
        if( j>1){
        j--;}
        else(j=j);
        break;
        case 75:
        if(i>1){
        i--;}
        else(i=i);
        break;
        case 80:
        if(j<16){
        j++;}else(j=j);

        break;
        case 77:
        if( i<30){
        i++;}
        else(i=i);
        break;}}

    gotoxy(i,j);

    if(touche==100)
    {
     if(tab2[i][j]==0)
     {
         tab2[i][j]=2;
         printf("D");
     }else{
         tab2[i][j]=0;
         printf("-");}
    }gotoxy(i,j);

}


main()
{
    int choix;

    do{
    do{
        srand(time(NULL));
        system("cls");
        textcolor(WHITE);
        printf("----Menu Principal-----\n\n Veuillez choisir un niveau de difficulte :\n1 - Debutant \n2 - Intermediaire \n3 - Expert \n4 - Quitter \n");
        gotoxy(5,10);
        printf("Commande:  -Se deplacer:fleches directionnelles  \n\t\t-Fouiller:f \n\t\t-Drapeau:d\n\n");
        scanf("%d", &choix);

      switch(choix)
      {
      case 1 :
        system("cls");
        textcolor(GREEN);
         inittab();
         present2=0;
        placeMines();
        afficheTab2();
        gotoxy(1,1);
        do{
            touche=getch();

            comptage();
            cursor();
          }while(touche!=27);
          break;

      case 2 :

        system("cls");
        textcolor(YELLOW);
        inittab2();
        placeMines2();
        afficheTab22();
        gotoxy(1,1);
        do{
            touche=getch();

            comptage2();
            cursor2();
          }while(touche!=27);
          break;

      case 3 :
        system("cls");
        textcolor(RED);
        inittab3();
        placeMines3();
        afficheTab23();
        gotoxy(1,1);
        do{
            touche=getch();

            comptage3();
            cursor3();
          }while(touche!=27);
          break;

      case 4 :
        system("cls");
        printf("\n\n\t\tSee you next time!\n\n\t\t");
        return(0);
        break;
      }
      }while(choix<1 || choix>4);
      }while(choix!=4);
}
