#include<stdio.h>
void Chinese(int a)
{    if(a==0) printf("��������Ŀ����:");
	if(a==1) printf("��ȷ���ǣ�");
	if(a==2) printf("��ȷ:"); 
	if(a==3) printf("����:");
} 
void English(int a)
{   if(a==0) printf("Please enter the number of questions:") ;
	if(a==1) printf("The correct answer is:");
	if(a==2) printf("right:");
	if(a==3) printf("wrong:");
}
void German(int a)
{  if(a==0) printf("Bitte geben Sie die Anzahl der Elemente:"); 
	if(a==1) printf("Die richtige Antwort ist:");
	if(a==2)printf("richtig:");
	if(a==3) printf("Fehler:");
}
void French(int a)
{if(a==0) printf("S'il vous pla?t entrez le nombre de sujets:") ;
if(a==1) printf("La bonne r��ponse est");
if(a==2) printf("correct:");
if(a==3) printf("erreur:");
}
void Japanese(int a)
{ if(a==0) printf("�Ŀ�η��Ť��������Ƥ�������:");
	if(a==1) printf("�������𤨤ϴΤΤȤ���Ǥ�");
	if(a==2) printf("�������Ǥ�:");
	if(a==3) printf("����`:");
}

