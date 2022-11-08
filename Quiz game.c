#include<stdio.h>
#include<stdlib.h>
int tech( );
int sports( );
int pol( );
int edu( );
void main(){


int res;
printf("Welcome to Quiz Game ");
while(1){
printf("\nQuize topics are : ");
printf("\n1.Technology \t 2.Sports \t 3.Politics \t 4.Education \t 5.Exit");
int ch=printf("\nEnter your favourite topic");
scanf("%d",&ch);


switch(ch)
{
	case 1:
		res=tech( );
		break;
	case 2:
		res=sports( );
		break;
	case 3:
		res=pol( );
		break;
	case 4:
		res=edu( );
	default:
		exit(0);
}
}
}
int tech( ){
	int a,s=0;
	printf("What is part of a database that holds only one type of information ? \n 1.Report \t 2.Field \t 3.Record \t 4.File");
	printf("\nChoose the correct answer : ");
	scanf("%d",&a);
	if(a==2){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int b;
	printf("\n'OS' computer abbreviation usually means ? \n 1.Order of significance \t 2.Open Software \t 3.Operating System \t 4.Optical Sensor");
	printf("\nChoose the answer : ");
	scanf("%d",&b);
	if(b==3){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int c;
	printf("\nIn which decade with the firs transatlantic radio broadcast occur ? \n 1.1850s \t 2.1860s \t 3.1870s \t 4.1900");
	printf("\nChoose the answer : ");
	scanf("%d",&c);
	if(c==4){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int d;
	printf("\n'.MOV' extension refers usually to what kind of file ? \n 1.Image file \t 2.Animation/movie file \t 3.Audio file \t 4.MS Office document");
	printf("\nChoose the answer : ");
	scanf("%d",&d);
	if(d==2){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int e;
	printf("\n'Pragati' is a Corporate Social Responsibility (CSR) initiative of which technological company in India ? \n 1.Google \t 2.Microsoft \t 3.Facebook \t 4.Amazon");
	printf("\nChoose the answer : ");
	scanf("%d",&e);
	if(e==3){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	printf("\nYour score is %d",s);
	printf("\nGame Over");
}
int sports( ){
	int a,s=0;
	printf("\nWaca cricket ground is located in ____ . \n 1.Adelaide \t 2.Perth \t 3.Auckland \t 4.Durban ");
	printf("\nChoose the correct answer : ");
	scanf("%d",&a);
	if(a==2){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int b;
	printf("\nWho has become the first Indian fencer to qualify for Tokyo Olympic Games ? \n 1.Kavitha Devi \t 2.Bhavani Devi \t 3.Daina Devi \t 4.Kaushik Vedika");
	printf("\nChoose the answer : ");
	scanf("%d",&b);
	if(b==2){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int c;
	printf("\nWhich of the following football clubs wins FIFA club world cup 2020 ? \n 1.Juventus F. C \t 2.FC Barcelona \t 3.Manchester United \t 4.Bayern Munich");
	printf("\nChoose the answer : ");
	scanf("%d",&c);
	if(c==4){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int d;
	printf("\nWho was the first Indian Women to get an Olympic medal ? \n 1.P.T. Usha \t 2.Sania Mirza \t 3.Aarti Saha \t 4.Karnam Malleswari");
	printf("\nChoose the answer : ");
	scanf("%d",&d);
	if(d==3){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int e;
	printf("\nThe famous C.K. Naidu Trophy is associated with which sports ? \n 1.Cricket \t 2.Badminton \t 3.Hockey \t 4.Lawn Tennis");
	printf("\nChoose the answer : ");
	scanf("%d",&e);
	if(e==1){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	printf("\n Your score is %d",s);
	printf("\nGame Over");
}
int pol( ){
	int a,s=0;
	printf("The members of the rajya sabha are elected by \n 1.the people \n 2.Lok Sabha \n 3.elected members of the legislative assembly \n 4.elected members of the legislative council ");
	printf("\nChoose the correct answer : ");
	scanf("%d",&a);
	if(a==3){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int b;
	printf("\nThe power to decide an election petition is vested in the \n 1.Parliament \t 2.Supreme Court \t 3.High Courts \t 4.Election Commission");
	printf("\nChoose the answer : ");
	scanf("%d",&b);
	if(b==3){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int c;
	printf("\nThe present Lok Sabha is the \n 1.14th \t 2.15th \t 3.16th \t 4.17th");
	printf("\nChoose the answer : ");
	scanf("%d",&c);
	if(c==4){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int d;
	printf("\nThe power to proprogue the Lok Sabha rests with \n 1.the speaker \t 2.the president \t 3.the prime minister \t 4.the minister for parloamentary affairs");
	printf("\nChoose the answer : ");
	scanf("%d",&d);
	if(d==2){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int e;
	printf("\nThe minimum age required to become the prime minister of india is : \n 1.25 \t 2.30 \t 3.40 \t 4.35");
	printf("\nChoose the answer : ");
	scanf("%d",&e);
	if(e==1){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	printf("\n Your score is %d",s);
	printf("\nGame Over");
}
int edu( ){
	int a,s=0;
	printf("\n Which e-learning platform has been featured in time maganize's 2021 list of 100 most influential companies ?\n 1.Byju's \t 2.Edukart \t 3.Unacademy \t 4.Toppr");
	printf("\nChoose the correct answer : ");
	scanf("%d",&a);
	if(a==1){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int b;
	printf("\nWhich course will be discontinued as per National Education Policy(NEP) 2020 ? \n 1.M.Com \t 2.M.Ed \t 3.M.Phil \t 4.MBA");
	printf("\nChoose the answer : ");
	scanf("%d",&b);
	if(b==3){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int c;
	printf("\n'Education of the masses' is the concept of __ \n 1.Vivekananda \t 2.Edward James Olmos \t 3.Helen Keller \t 4.Emma Hart Willard");
	printf("\nChoose the answer : ");
	scanf("%d",&c);
	if(c==1){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int d;
	printf("\nEducation is prrimary a/an __ institution \n1.economic \t 2.formative \t 3.religious \t 4.all these");
	printf("\nChoose the answer : ");
	scanf("%d",&d);
	if(d==2){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	int e;
	printf("\n___ is not a proper method of teaching according to idealism. \n1.Dialectical method \t 2.Intuitive method \t 3.Experimental method \t 4.Conceptual method");
	printf("\nChoose the answer : ");
	scanf("%d",&e);
	if(e==3){
		printf("Correct Answer");
		s=s+10;
	}else{
		printf("Wrong Answer");
		s=s+0;
	}
	printf("\n Your score is %d",s);
	printf("\nGame Over");
}