#include<stdio.h>
void main()
{
	
//variable declaration
int phy, che, mat, eng, tot;

//initialization
phy = 75;
che = 55;
mat = 60;
eng = 85;

//calculation
tot = phy+che+mat+eng;

//output
printf("Marks in Physics\t=\t %d\n\n",phy);
printf("Marks in Chemistry\t=\t %d\n\n",che);
printf("Marks in Maths\t\t=\t %d\n\n",mat);
printf("Marks in English\t=\t %d\n\n\n",eng);
printf("Total Marks of Students\t=\t %d ",tot);
 
}
