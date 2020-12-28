#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* arg[])
{
    //Variables
    //cartes player 1
    int c1 = 0;
    char couleur_c1;
    int c2 = 0;
    char couleur_c2;
    int c3 = 0;
    char couleur_c3;
    int c4 = 0;
    char couleur_c4;
    int c5 = 0;
    char couleur_c5;
    //cartes player2
    int c6 = 0;
    char couleur_c6;
    int c7 = 0;
    char couleur_c7;
    int c8 = 0;
    char couleur_c8;
    int c9 = 0;
    char couleur_c9;
    int c10 = 0;
    char couleur_c10;
    //Tri des cartes
    int a1=0;
    int a2=0;
    int b1=0;
    int b2=0;
    int k1=0;
    int k2=0;
    int d1=0;
    int d2=0;
    int e1=0;
    int e2=0;
    //combinaison
    int quinte_flush_player1=0;
    int quinte_flush_player2=0;
    int carre_player1=0;
    int carre_player2=0;
    int full_player1=0;
    int full_player2=0;
    int couleur_player1=0;
    int couleur_player2=0;
    int suite_player1=0;
    int suite_player2=0;
    int brelan_player1=0;
    int brelan_player2=0;
    int double_paire_player1=0;
    int double_paire_player2=0;
    int paire_player1=0;
    int paire_player2=0;
    int carte_haute_player1=0;
    int carte_haute_player2=0;

    //entrées
    scanf("%d %c %d %c %d %c %d %c %d %c %d %c %d %c %d %c %d %c %d %c",
          &c1, &couleur_c1, &c2, &couleur_c2, &c3, &couleur_c3, &c4, &couleur_c4, &c5, &couleur_c5,
          &c6, &couleur_c6, &c7, &couleur_c7, &c8, &couleur_c8, &c9, &couleur_c9, &c10, &couleur_c10);

    //printf("player1 :%d %c %d %c %d %c %d %c %d %c\n",
          // c1, couleur_c1, c2, couleur_c2, c3, couleur_c3, c4, couleur_c4, c5, couleur_c5);
   // printf("player2 :%d %c %d %c %d %c %d %c %d %c\n",
           //c6, couleur_c6, c7, couleur_c7, c8, couleur_c8, c9, couleur_c9, c10, couleur_c10);

//Tri carte1player1
if ((c1>=c2)&&(c1>=c3)&&(c1>=c4)&&(c1>=c5))
    {
        a1 = c1;
    }
    else if ((c2>=c3)&&(c2>=c4)&&(c2>=c5)&&(c2>=c1))
    {
        a1 = c2;
    }
    else if ((c3>=c4)&&(c3>=c5)&&(c3>=c1)&&(c3>=c2))
    {
        a1 = c3;
    }
    else if ((c4>=c5)&&(c4>=c1)&&(c4>=c2)&&(c4>=c3))
    {
        a1 =c4;
    }
    else if ((c5>=c1)&&(c5>=c2)&&(c5>=c3)&&(c5>=c4))
    {
        a1 = c5;
    }

//Tri carte5player1
    if ((c1<=c2)&&(c1<=c3)&&(c1<=c4)&&(c1<=c5))
    {
        e1 = c1;
    }
    else if ((c2<=c3)&&(c2<=c4)&&(c2<=c5)&&(c2<=c1))
    {
        e1 = c2;
    }
    else if ((c3<=c4)&&(c3<=c5)&&(c3<=c1)&&(c3<=c2))
    {
        e1 = c3;
    }
    else if ((c4<=c5)&&(c4<=c1)&&(c4<=c2)&&(c4<=c3))
    {
        e1 = c4;
    }
    else if ((c5<=c1)&&(c5<=c2)&&(c5<=c3)&&(c5<=c4))
    {
        e1 = c5;
    }

//Tri carte2player1
    if (c1=a1)
    {
        if ((c2>=c3)&&(c2>=c4)&&(c2>=c5))
        {
            b1 = c2;
        }
        if ((c3>=c4)&&(c3>=c5)&&(c3>=c2))
        {
            b1 = c3;
        }
        if ((c4>=c5)&&(c4>=c2)&&(c4>=c3))
        {
            b1 = c4;
        }
        if ((c5>=c2)&&(c5>=c3)&&(c5>=c4))
        {
            b1 = c5;
        }
    }
    else if (c2=a1)
    {
        if ((c1>=c3)&&(c1>=c4)&&(c1>=c5))
        {
            b1 = c1;
        }
        if ((c3>=c4)&&(c3>=c5)&&(c3>=c1))
        {
            b1 = c3;
        }
        if ((c4>=c5)&&(c4>=c1)&&(c4>=c3))
        {
            b1 = c4;
        }
        if ((c5>=c1)&&(c5>=c3)&&(c5>=c4))
        {
            b1 = c5;
        }
    }
    else if (c3=a1)
    {
        if ((c1>=c2)&&(c1>=c4)&&(c1>=c5))
        {
            b1 = c1;
        }
        if ((c2>=c4)&&(c2>=c5)&&(c2>=c1))
        {
            b1 = c2;
        }
        if ((c4>=c5)&&(c4>=c1)&&(c4>=c2))
        {
            b1 = c4;
        }
        if ((c5>=c1)&&(c5>=c2)&&(c5>=c4))
        {
            b1 = c5;
        }
    }
    else if (c4=a1)
    {
        if ((c1>=c2)&&(c1>=c3)&&(c1>=c5))
        {
            b1 = c1;
        }
        if ((c2>=c3)&&(c2>=c5)&&(c2>=c1))
        {
            b1 = c2;
        }
        if ((c3>=c5)&&(c3>=c1)&&(c3>=c2))
        {
            b1 = c3;
        }
        if ((c5>=c1)&&(c5>=c2)&&(c5>=c3))
        {
            b1 = c5;
        }
    }
    else if (c5=a1)
    {
        if ((c1>=c2)&&(c1>=c3)&&(c1>=c4))
        {
            b1 = c1;
        }
        if ((c2>=c3)&&(c2>=c4)&&(c2>=c1))
        {
            b1 = c2;
        }
        if ((c3>=c4)&&(c3>=c1)&&(c3>=c2))
        {
            b1 = c3;
        }
        if ((c4>=c1)&&(c4>=c2)&&(c4>=c3))
        {
            b1 = c4;
        }
    }

//Tri carte4player1
    if (c1=e1)
    {
        if ((c2<=c3)&&(c2<=c4)&&(c2<=c5))
        {
            d1 = c2;
        }
        if ((c3<=c4)&&(c3<=c5)&&(c3<=c2))
        {
            d1 = c3;
        }
        if ((c4<=c5)&&(c4<=c2)&&(c4<=c3))
        {
            d1 = c4;
        }
        if ((c5<=c2)&&(c5<=c3)&&(c5<=c4))
        {
            d1 = c5;
        }
    }
    else if (c2=e1)
    {
        if ((c1<=c3)&&(c1<=c4)&&(c1<=c5))
        {
            d1 = c1;
        }
        if ((c3<=c4)&&(c3<=c5)&&(c3<=c1))
        {
            d1 = c3;
        }
        if ((c4<=c5)&&(c4<=c1)&&(c4<=c3))
        {
            d1 = c4;
        }
        if ((c5<=c1)&&(c5<=c3)&&(c5<=c4))
        {
            d1 = c5;
        }
    }
    else if (c3=e1)
    {
        if ((c1<=c2)&&(c1<=c4)&&(c1<=c5))
        {
            d1 = c1;
        }
        if ((c2<=c4)&&(c2<=c5)&&(c2<=c1))
        {
            d1 = c2;
        }
        if ((c4<=c5)&&(c4<=c1)&&(c4<=c2))
        {
            d1 = c4;
        }
        if ((c5<=c1)&&(c5<=c2)&&(c5<=c4))
        {
            d1 = c5;
        }
    }
    else if (c4=e1)
    {
        if ((c1<=c2)&&(c1<=c3)&&(c1<=c5))
        {
            d1 = c1;
        }
        if ((c2<=c3)&&(c2<=c5)&&(c2<=c1))
        {
            d1 = c2;
        }
        if ((c3<=c5)&&(c3<=c1)&&(c3<=c2))
        {
            d1 = c3;
        }
        if ((c5<=c1)&&(c5<=c2)&&(c5<=c3))
        {
            d1 = c5;
        }
    }
    else if (c5=e1)
    {
        if ((c1<=c2)&&(c1<=c3)&&(c1<=c4))
        {
            d1 = c1;
        }
        if ((c2<=c3)&&(c2<=c4)&&(c2<=c1))
        {
            d1 = c2;
        }
        if ((c3<=c4)&&(c3<=c1)&&(c3<=c2))
        {
            d1 = c3;
        }
        if ((c4<=c1)&&(c4<=c2)&&(c4<=c3))
        {
            d1 = c4;
        }
    }

//Tri carte3player1
    if ((c1 != a1)&&(c1 != b1)&&(c1 != d1)&&(c1 != e1))
    {
        k1 = c1;
    }
    if ((c2 != a1)&&(c2 != b1)&&(c2 != d1)&&(c2 != e1))
    {
        k1 = c2;
    }
    if ((c3 != a1)&&(c3 != b1)&&(c3 != d1)&&(c3 != e1))
    {
        k1 = c3;
    }
    if ((c4 != a1)&&(c4 != b1)&&(c4 != d1)&&(c4 != e1))
    {
        k1 = c4;
    }
    if ((c5 != a1)&&(c5 != b1)&&(c5 != d1)&&(c5 != e1))
    {
        k1 = c5;
    }


//Tri carte1player2
 if ((c6>=c7)&&(c6>=c8)&&(c6>=c9)&&(c6>=c10))
    {
        a2 = c6;
    }
    else if ((c7>=c8)&&(c7>=c9)&&(c7>=c10)&&(c7>=c6))
    {
        a2 = c7;
    }
    else if ((c8>=c9)&&(c8>=c10)&&(c8>=c6)&&(c8>=c7))
    {
        a2 = c8;
    }
    else if ((c9>=c10)&&(c9>=c6)&&(c9>=c7)&&(c9>=c8))
    {
        a2 = c9;
    }
    else if ((c10>=c6)&&(c10>=c7)&&(c10>=c8)&&(c10>=c9))
    {
        a2 = c10;
    }

 //Tri carte5player2
if ((c6<=c7)&&(c6<=c8)&&(c6<=c9)&&(c6<=c10))
    {
        e2 = c6;
    }
    else if ((c7<=c8)&&(c7<=c9)&&(c7<=c10)&&(c7<=c6))
    {
        e2 = c7;
    }
    else if ((c8<=c9)&&(c8<=c10)&&(c8<=c6)&&(c8<=c7))
    {
        e2 = c8;
    }
    else if ((c9<=c10)&&(c9<=c6)&&(c9<=c7)&&(c9<=c8))
    {
        e2 = c9;
    }
    else if ((c10<=c6)&&(c10<=c7)&&(c10<=c8)&&(c10<=c9))
    {
        e2 = c10;
    }

//Tri carte2player2
    if (c6=a2)
    {
        if ((c7>=c8)&&(c7>=c9)&&(c7>=c10))
        {
            b2 = c7;
        }
        if ((c8>=c9)&&(c8>=c10)&&(c8>=c7))
        {
            b2 = c8;
        }
        if ((c9>=c10)&&(c9>=c7)&&(c9>=c8))
        {
            b2 = c9;
        }
        if ((c10>=c7)&&(c10>=c8)&&(c10>=c9))
        {
            b2 = c10;
        }
    }
    else if (c7=a2)
    {
        if ((c6>=c8)&&(c6>=c9)&&(c6>=c10))
        {
            b2 = c6;
        }
        if ((c8>=c9)&&(c8>=c10)&&(c8>=c6))
        {
            b2 = c8;
        }
        if ((c9>=c10)&&(c9>=c6)&&(c9>=c8))
        {
            b2 = c9;
        }
        if ((c10>=c6)&&(c10>=c8)&&(c10>=c9))
        {
            b2 = c10;
        }
    }
    else if (c8=a2)
    {
        if ((c6>=c7)&&(c6>=c9)&&(c6>=c10))
        {
            b2 = c6;
        }
        if ((c7>=c9)&&(c7>=c10)&&(c7>=c6))
        {
            b2 = c7;
        }
        if ((c9>=c10)&&(c9>=c6)&&(c4>=c7))
        {
            b2 = c4;
        }
        if ((c10>=c6)&&(c10>=c7)&&(c10>=c9))
        {
            b2 = c10;
        }
    }
    else if (c9=a2)
    {
        if ((c6>=c7)&&(c6>=c8)&&(c6>=c10))
        {
            c6 = b2;
        }
        if ((c7>=c8)&&(c7>=c10)&&(c7>=c6))
        {
            c7 = b2;
        }
        if ((c8>=c10)&&(c8>=c6)&&(c8>=c7))
        {
            c8 = b2;
        }
        if ((c10>=c6)&&(c10>=c7)&&(c10>=c8))
        {
            c10 =b2;
        }
    }
    else if (c10=a2)
    {
        if ((c6>=c7)&&(c6>=c8)&&(c6>=c9))
        {
            b2 = c6;
        }
        if ((c7>=c8)&&(c7>=c9)&&(c7>=c6))
        {
            b2 = c7;
        }
        if ((c8>=c9)&&(c8>=c6)&&(c8>=c7))
        {
            b2 = c8;
        }
        if ((c9>=c6)&&(c9>=c7)&&(c9>=c8))
        {
            b2 = c9;
        }
    }

//Tri carte4player2
    if (c6=e2)
    {
        if ((c7<=c8)&&(c7<=c9)&&(c7<=c10))
        {
            d2 = c7;
        }
        if ((c8<=c9)&&(c8<=c10)&&(c8<=c7))
        {
            d2 = c8;
        }
        if ((c9<=c10)&&(c9<=c7)&&(c9<=c8))
        {
            d2 = c9;
        }
        if ((c10<=c7)&&(c10<=c8)&&(c10<=c9))
        {
            d2 = c10;
        }
    }
    else if (c7=e2)
    {
        if ((c6<=c8)&&(c6<=c9)&&(c6<=c10))
        {
            d2 = c6;
        }
        if ((c8<=c9)&&(c8<=c10)&&(c8<=c6))
        {
            d2 = c8;
        }
        if ((c9<=c10)&&(c9<=c6)&&(c9<=c8))
        {
            d2 = c9;
        }
        if ((c10<=c6)&&(c10<=c8)&&(c10<=c9))
        {
            d2 = c10;
        }
    }
    else if (c8=e2)
    {
        if ((c6<=c7)&&(c6<=c9)&&(c6<=c10))
        {
            d2 = c6;
        }
        if ((c7<=c9)&&(c7<=c10)&&(c7<=c6))
        {
            d2 = c7;
        }
        if ((c9<=c10)&&(c9<=c6)&&(c9<=c7))
        {
            d2 = c9;
        }
        if ((c10<=c6)&&(c10<=c7)&&(c10<=c9))
        {
            d2 = c10;
        }
    }
    else if (c9=e2)
    {
        if ((c6<=c7)&&(c6<=c8)&&(c6<=c10))
        {
            d2 = c6;
        }
        if ((c7<=c8)&&(c7<=c10)&&(c7<=c6))
        {
            d2 = c7;
        }
        if ((c8<=c10)&&(c8<=c6)&&(c8<=c7))
        {
            d2 = c8;
        }
        if ((c10<=c6)&&(c10<=c7)&&(c10<=c8))
        {
            d2 = c10;
        }
    }
    else if (c10=e2)
    {
        if ((c6<=c7)&&(c6<=c8)&&(c6<=c9))
        {
            d2 = c6;
        }
        if ((c7<=c8)&&(c7<=c9)&&(c7<=c6))
        {
            d2 = c7;
        }
        if ((c8<=c9)&&(c8<=c6)&&(c8<=c7))
        {
            d2 = c8;
        }
        if ((c9<=c6)&&(c9<=c7)&&(c9<=c8))
        {
            d2 = c9;
        }
    }

//Tri carte3player2
    if ((c6 != a2)&&(c6 != b2)&&(c6 != d2)&&(c6 != e2))
    {
        k2 = c6;
    }
    if ((c7 != a2)&&(c7 != b2)&&(c7 != d2)&&(c7 != e2))
    {
        k2 = c7;
    }
    if ((c8 != a2)&&(c8 != b2)&&(c8 != d2)&&(c8 != e2))
    {
        k2 = c8;
    }
    if ((c9 != a2)&&(c9 != b2)&&(c9 != d2)&&(c9 != e2))
    {
        k2 = c9;
    }
    if ((c1 != a2)&&(c10 != b2)&&(c10 != d2)&&(c10 != e2))
    {
        k2 = c10;
    }


//Quinte flush
    if ((couleur_c1==couleur_c2)&&(couleur_c1==couleur_c3)&&(couleur_c1==couleur_c4)&&(couleur_c1==couleur_c5)
        && (a1-1==b1)&&(b1-1==k1)&&(k1-1==d1)&&(d1-1==e1))
        {
            quinte_flush_player1=1;
        }
    if ((couleur_c6==couleur_c7)&&(couleur_c6==couleur_c8)&&(couleur_c6==couleur_c9)&&(couleur_c6==couleur_c10)
        && (a2-1==b2)&&(b2-1==k2)&&(k2-1==d2)&&(d2-1==e2))
        {
            quinte_flush_player2=1;
        }

//Carré
    if (((a1==b1)&&(a1==k1)&&(a1==d1))  ||  ((a1==b1)&&(a1==k1)&&(a1==e1))
        ||((a1==b1)&&(a1==d1)&&(a1==e1))    ||  ((a1==k1)&&(a1==d1)&&(a1==e1))
        ||((b1==a1)&&(b1==k1)&&(b1==d1))    ||  ((b1==a1)&&(b1==k1)&&(b1==e1))
        ||((b1==a1)&&(b1==d1)&&(b1==e1))    ||  ((b1==k1)&&(b1==d1)&&(b1==e1))
        ||((k1==d1)&&(k1==b1)&&(k1==a1))    ||  ((k1==e1)&&(k1==b1)&&(k1==a1))
        ||((k1==e1)&&(k1==d1)&&(k1==a1))    ||  ((k1==e1)&&(k1==d1)&&(k1==b1))
        ||((d1==a1)&&(d1==b1)&&(d1==k1))    ||  ((d1==e1)&&(d1==a1)&&(d1==b1))
        ||((d1==e1)&&(d1==a1)&&(d1==k1))    ||  ((d1==e1)&&(d1==b1)&&(d1==k1))
        ||((e1==a1)&&(e1==b1)&&(e1==k1))    ||  ((e1==a1)&&(e1==b1)&&(e1==d1))
        ||((e1==a1)&&(e1==k1)&&(e1==d1))    ||  ((e1==b1)&&(e1==k1)&&(e1==d1)))
    {
        carre_player1=1;
    }
    if (((a2==b2)&&(a2==k2)&&(a2==d2))  ||  ((a2==b2)&&(a2==k2)&&(a2==e2))
        ||((a2==b2)&&(a2==d2)&&(a2==e2))    ||  ((a2==k2)&&(a2=d2)&&(a2==e2))
        ||((b2==a2)&&(b2==k2)&&(b2==d2))    ||  ((b2==a2)&&(b2==k2)&&(b2==e2))
        ||((b2==a2)&&(b2==d2)&&(b2==e2))    ||  ((b2==k2)&&(b2==d2)&&(b2==e2))
        ||((k2==d2)&&(k2==b2)&&(k2==a2))    ||  ((k2==e2)&&(k2==b2)&&(k2==a2))
        ||((k2==e2)&&(k2==d2)&&(k2==a2))    ||  ((k2==e2)&&(k2==d2)&&(k2==b2))
        ||((d2==a2)&&(d2==b2)&&(d2==k2))    ||  ((d2==e2)&&(d2==a2)&&(d2==b2))
        ||((d2==e2)&&(d2==a2)&&(d2==k2))    ||  ((d2==e2)&&(d2==b2)&&(d2==k2))
        ||((e2==a2)&&(e2==b2)&&(e2==k2))    ||  ((e2==a2)&&(e2==b2)&&(e2==d2))
        ||((e2==a2)&&(e2==k2)&&(e2==d2))    ||  ((e2==b2)&&(e2==k2)&&(e2==d2)))
    {
        carre_player2=1;
    }

//Full
    if (((a1 = ((b1 || k1 || d1 || e1)&&(b1 || k1 || d1 || e1)))
        || (b1 =((a1 || k1 || d1 || e1)&&(a1 || k1 || d1 || e1)))
        || (k1 =((a1 || b1 || d1 || e1)&&(a1 || b1 || d1 || e1)))
        || (d1 =((a1 || b1 || k1 || e1)&&(a1 || b1 || k1 || e1)))
        || (e1 =((a1 || b1 || k1 || d1)&&(a1 || b1 || k1 || d1))))
        &&((a1==b1)||(a1==k1)||(a1==d1)||(a1==e1)
        ||(b1==k1)||(b1==d1)||(b1==e1)
        ||(k1==d1)||(k1==e1)
        ||(d1==e1)))
    {
        full_player1=1;
    }
    if (((a2 = ((b2 || k2 || d2 || e2)&&(b2 || k2 || d2 || e2)))
        || (b2 =((a2 || k2 || d2 || e2)&&(a2 || k2 || d2 || e2)))
        || (k2 =((a2 || b2 || d2 || e2)&&(a2 || b2 || d2 || e2)))
        || (d2 =((a2 || b2 || k2 || e2)&&(a2 || b2 || k2 || e2)))
        || (e2 =((a2 || b2 || k2 || d2)&&(a2 || b2 || k2 || d2))))
        &&((a2==b2)||(a2==k2)||(a2==d2)||(a2==e2)
        ||(b2==k2)||(b2==d2)||(b2==e2)
        ||(k2==d2)||(k2==e2)
        ||(d2==e2)))
    {
        full_player2=1;
    }


//Couleur
    if ((couleur_c1==couleur_c2)&&(couleur_c1==couleur_c3)&&(couleur_c1==couleur_c4)&&(couleur_c1==couleur_c5))
    {
        couleur_player1=1;
    }
    if ((couleur_c6==couleur_c7)&&(couleur_c6==couleur_c8)&&(couleur_c6==couleur_c9)&&(couleur_c6==couleur_c10))
    {
        couleur_player2=1;
    }

//Suite
    if ((a1-1==b1)&&(b1-1==k1)&&(k1-1==d1)&&(d1-1==e1))
    {
        suite_player1=1;
    }
    if ((a2-1==b2)&&(b2-1==k2)&&(k2-1==d2)&&(d2-1==e2))
    {
        suite_player2=1;
    }

//Brelan
    if ((a1 = ((b1 || k1 || d1 || e1)&&(b1 || k1 || d1 || e1)))
        || (b1 =((a1 || k1 || d1 || e1)&&(a1 || k1 || d1 || e1)))
        || (k1 =((a1 || b1 || d1 || e1)&&(a1 || b1 || d1 || e1)))
        || (d1 =((a1 || b1 || k1 || e1)&&(a1 || b1 || k1 || e1)))
        || (e1 =((a1 || b1 || k1 || d1)&&(a1 || b1 || k1 || d1))))
    {
        brelan_player1=1;
    }
    if ((a2 = ((b2 || k2 || d2 || e2)&&(b2 || k2 || d2 || e2)))
        || (b2 =((a2 || k2 || d2 || e2)&&(a2 || k2 || d2 || e2)))
        || (k2 =((a2 || b2 || d2 || e2)&&(a2 || b2 || d2 || e2)))
        || (d2 =((a2 || b2 || k2 || e2)&&(a2 || b2 || k2 || e2)))
        || (e2 =((a2 || b2 || k2 || d2)&&(a2 || b2 || k2 || d2))))
    {
        brelan_player2=1;
    }

//Double paire
    if (((a1==b1)||(a1==k1)||(a1==d1)||(a1==e1)
        ||(b1==k1)||(b1==d1)||(b1==e1)
        ||(k1==d1)||(k1==e1)
        ||(d1==e1))&&((a1==b1)||(a1==k1)||(a1==d1)||(a1==e1)
        ||(b1==k1)||(b1==d1)||(b1==e1)
        ||(k1==d1)||(k1==e1)
        ||(d1==e1)))
    {
        double_paire_player1=1;
    }
    if (((a2==b2)||(a2==k2)||(a2==d2)||(a2==e2)
        ||(b2==k2)||(b2==d2)||(b2==e2)
        ||(k2==d2)||(k2==e2)
        ||(d2==e2))&&((a2==b2)||(a2==k2)||(a2==d2)||(a2==e2)
        ||(b2==k2)||(b2==d2)||(b2==e2)
        ||(k2==d2)||(k2==e2)
        ||(d2==e2)))
    {
        double_paire_player2=1;
    }

//paire
    if ((a1==b1)||(a1==k1)||(a1==d1)||(a1==e1)
        ||(b1==k1)||(b1==d1)||(b1==e1)
        ||(k1==d1)||(k1==e1)
        ||(d1==e1))
    {
        paire_player1=1;
    }
    if ((a2==b2)||(a2==k2)||(a2==d2)||(a2==e2)
        ||(b2==k2)||(b2==d2)||(b2==e2)
        ||(k2==d2)||(k2==e2)
        ||(d2==e2))
    {
        paire_player2=1;
    }

//Carte haute
    if (!(quinte_flush_player1 && carre_player1 && full_player1 && couleur_player1
          && suite_player1 && brelan_player1 && double_paire_player1 && paire_player1))
    {
        carte_haute_player1=1;
    }

    if (!(quinte_flush_player2 && carre_player2 && full_player2 && couleur_player2
          && suite_player2 && brelan_player2 && double_paire_player2 && paire_player2))
    {
        carte_haute_player2=1;
    }


//player1 wins
    if ((quinte_flush_player1 &&(carre_player2 || full_player2 || couleur_player2 || suite_player2 ||
                                brelan_player2 || double_paire_player2 || paire_player2 || carte_haute_player2))
        || (carre_player1 && (full_player2 || couleur_player2 || suite_player2 || brelan_player2
                                || double_paire_player2 || paire_player2 || carte_haute_player2))
        || (full_player1 && (couleur_player2 || suite_player2 || brelan_player2
                                || double_paire_player2 || paire_player2 || carte_haute_player2))
        || (couleur_player1 && (suite_player2 || brelan_player2 || double_paire_player2 || paire_player2
                                || carte_haute_player2))
        || (suite_player1 && (brelan_player2 || double_paire_player2 || paire_player2 || carte_haute_player2))
        || (brelan_player1 && (double_paire_player2 || paire_player2 || carte_haute_player2))
        || (double_paire_player1 && (paire_player2 || carte_haute_player2))
        || (paire_player1 &&(carte_haute_player2)))
    {
        printf("Player1 wins\n");
    }

//player2 wins
    else if ((quinte_flush_player2 &&(carre_player1 || full_player1 || couleur_player1 || suite_player1 ||
                                brelan_player1 || double_paire_player1 || paire_player1 || carte_haute_player1))
        || (carre_player2 && (full_player1 || couleur_player1 || suite_player1 || brelan_player1
                                || double_paire_player1 || paire_player1 || carte_haute_player1))
        || (full_player2 && (couleur_player1 || suite_player1 || brelan_player1
                                || double_paire_player1 || paire_player1 || carte_haute_player1))
        || (couleur_player2 && (suite_player1 || brelan_player1 || double_paire_player1 || paire_player1
                                || carte_haute_player1))
        || (suite_player2 && (brelan_player1 || double_paire_player1 || paire_player1 || carte_haute_player1))
        || (brelan_player2 && (double_paire_player1 || paire_player1 || carte_haute_player1))
        || (double_paire_player2 && (paire_player1 || carte_haute_player1))
        || (paire_player2 &&(carte_haute_player1)))
    {
        printf("Player2 wins\n");
    }

//égalité player1/player2
    else if ((quinte_flush_player1 && quinte_flush_player2)
             || (carre_player1 && carre_player2)
             || (full_player1 && full_player2)
             || (couleur_player1 && couleur_player2)
             || (suite_player1 && suite_player2)
             || (brelan_player1 && brelan_player2)
             || (double_paire_player1 && double_paire_player2)
             || (paire_player1 && paire_player2)
             || (carte_haute_player1 && carte_haute_player2))
    {
        printf("Draw\n");
    }

    return 0;
}
