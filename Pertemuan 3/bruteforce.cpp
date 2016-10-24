#include <stdio.h>
// #include <conio.h>
#include <curses.h>
#include <iostream>
#include <cstdlib>

void pangkat(),faktorial(),bsort();
main()
{
start:
int x;
// system("clear");
system("cls");
printf ("\n \t Algoritma Brute Force \n");
printf ("\n =========================================");
printf ("\n \t 1. Program Pangkat");
printf ("\n \t 2. Porgram Faktorial");
printf ("\n \t 3. Sorting Bilangan");
printf ("\n \t 4. Exit ");
printf ("\n ========================================= \n");
printf ("\n Masukkan Pilihan (1-4) : ");
scanf ("%d",&x);
switch(x){
case 1  : pangkat ();
	 goto start;
case 2  : faktorial();
	 goto start;
case 3  : bsort();
	 goto start;
// case 4  : system("EXIT");
case 4 : exit(0);
return 0;
default : system("CLS");
	 printf("\n \n \n \n \n \n \t \t \t Anda Salah memasukkan Input");
	 printf("\n \t \t Program Akan Direstart Setelah Anda Menekan Tombol Enter");
	 getch();
	 goto start;
	 }
}

void pangkat(){
	int a,n,hasil;
	printf("masukan nilai a : ");
	scanf("%d",&a);
	printf("masukan pangkat : ");
	scanf("%d",&n);
	hasil=1;
	printf("\n%d ^ %d = ",a,n);
	for(int i=0;i<n;i++){
		hasil=hasil*a;
		printf("%d",a);
		if(i!=n-1){
			printf(" * ");
		}
		
	}
	printf(" = %d",hasil);
	getch();
}

void faktorial(){
	int a,n,fak;
	printf("masukan faktorial : ");
	scanf("%d", &n);
	printf("%d! = ",n);
	fak=1;
	for(a=n;a>=1;a--){
		fak=fak*a;
		printf("%d",a);
				if(a!=1){
			printf(" * ");
		}
	}
	printf(" = %d", fak);
	getch();
}

void bsort(){
  int i,j,temp,n,bil[100];
  printf ("Masukkan jumlah bilangan : " );
  scanf ("%d",&n);
	for(i=0;i<n;i++)
	{
		printf ("Bilangan ke-%d \t: ",i+1);
		scanf ("%d",&bil[i]); }
		printf ("\n");
		for(i=0;i<n-1;i++)
			{
				for(j=n-1;j>i;j--)
				{
					if (bil[i] > bil[j])
					{
					temp = bil[i];
					bil[i] = bil[j];
					bil[j] = temp;
					}
				}
			}
	printf ("Sorting : ");
	for(i=0;i<n;i++)
	{
		printf ("%d",bil[i]);
		if (i!= n-1)
		{
			printf (",");
		}
	}
	getch();
}


