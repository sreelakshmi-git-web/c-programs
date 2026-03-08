int main()
{
 int number,copy=1,digit,reverse=0;
 clrscr();
   while(copy<=200);
   {
   copy=number;
   while(number>0){
    digit=number%10;
    reverse=reverse*10+digit;
    number=number/10;
    }
    if(copy==reverse)
    {
	printf("%d",copy);
	}
	copy++;
	}
 getch();
 return 0;
 }