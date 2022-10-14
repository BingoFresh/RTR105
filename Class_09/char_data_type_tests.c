// "Ievads algoritmu valodā C" Juris Ziemelis
#include<stdio.h>

int main()
 {
 char a; //mainīga ar identifikatoru (vai vārdu) "a" deklerēšana
	//ar identifikatoru "a" viennozīmīgi tiek sasaistīts kāds atmiņas apgabals - kur (vieta) un cik (izmērs)
	//uz jautājumu detalizēti kur? (adrese) atbildēsim cita nod
	// cik? - 1 byte, jo ... char ( atbilstoši datu tipam)
	//komentārs par vārdu (vai identifikatoru) - drīkst saturēt burtus (ir starpība starp lieliem un maziem
	//burtiem - a nav A - case sensitive), ciparus bet nedrīkst sākties ar ciparu,
	//var būt mnemonisks, piemēram - cilindra_tilpums
printf("a mainīgā vērtība (kā simbols)  uzreiz pēc deklerēšanas: %c\n ",a);
printf("a mainīgā vērtība (kā dec skaitlis)  uzreiz pēc deklerēšanas: %d\n ",a);
printf("a mainīgā vērtība (kā hex skaitlis)  uzreiz pēc deklerēšanas: %#x\n ",a);
printf("a mainīgā vērtība (kā oct skaitlis)  uzreiz pēc deklerēšanas: %#o\n ",a);
//; ; ; ; ; ; ; ;//daudzi tukšie operatori

//; ; ; ; ; ; ; ;//daudzi tukšie operatori
//int a; < nedrīkst šādi pārdeklerēt mainīgo
//mainīgā būtība - mainīties
a = 89; //"=" zīme ir piešķiršanas operācija
	// pa kreisi ir - 89 - atbilstoši noformējumam (pierakstam) tā ir int tipa konstante =>
	//89 = 64(2^6)+16(2^4)+8(2^3)+1(2^0)
	//0000 0000  0000 0000  0000 0000  0101 1001
	// a = 89; > mainīgā a 1 baitā tiek ierakstīts 0101 1001
printf("a mainīgā vērtība (kā simbols)  pēc piešķiršanas: %c\n ",a);
printf("a mainīgā vērtība (kā dec skaitlis)  pēc piešķiršanas: %d\n ",a);
printf("a mainīgā vērtība (kā hex skaitlis)  pēc piešķiršanas: %#x\n ",a);
printf("a mainīgā vērtība (kā oct skaitlis)  pēc piešķiršanas: %#o\n ",a);

 return 0;
 }
