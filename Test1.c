#include<stdio.h>

void firstandlastdigitsum(){
    
int n;

int lastdigit;

printf("Enter the number \n");
scanf("%d",&n);

lastdigit = n % 10;

while(n > 10){

    n = n / 10;
}

printf("the Sum of the first and last digit of the number is: %d \n",lastdigit + n);
}

void prodcutno(){
    
int num;
 int product = 1;
printf("Enter The number \n");
scanf("%d",&num);

while(num > 0){

int rem = num % 10;

product = product * rem;

num = num / 10;

}

printf("The product of the number is %d \n",product);
}

void sumofnumber(){

    int n;
int sum = 0;

    printf("Enter The Number \n");
    scanf("%d",&n);

    while(n > 0){

        int rem = n % 10;
        sum = sum + rem ;
        
        n = n / 10;

    }

    printf("The sum of the number is %d \n",sum);
}

void factor(){

    int num;

printf("enter the no.");

scanf("%d",&num);

for(int i = 1; i<=  num; i++){

    if(num % i == 0){

        printf("%d \t",i);
    }
}

printf("\n");

}

void factorial(){

    int n;
    int factotial = 1;

    printf("enter the no.: \n");
scanf("%d",&n);

 for( int i = 1; i <= n; i++){

  factotial = factotial * i;

 }
 printf("the factorial of %d is",factotial);
}

void hcf(){

    int n1, n2;

 printf("enter the no. \n");
    scanf("%d",&n1);

     printf("enter the no. \n");
    scanf("%d",&n2);

    int hcf = 0;

    for(int i = 1; i <= n1; i++){

        if(n1 % i == 0 && n2 % i == 0){

            hcf=i;
}

}

 printf("%d",hcf);

}

void palidrome(){

        int num;

    int reverse = 0;

    printf("enter the no.");
    scanf("%d",&num);

     int originalnum = num;

while(num>0){
     int rem = num % 10;
    reverse = reverse * 10 + rem;
    num = num / 10;

}

if(originalnum == reverse){
    printf("no. is palindrome");
}

else{
    printf("no. is not a palindrome");
}
}

void power(){

    int num, power,ans = 1;

    printf("enter the number:");
    scanf("%d",&num);

    printf("enter the power:");
    scanf("%d",&power);

    for( int i = 1; i <= power; i++){
         ans = ans*num;
    }

    printf("the power of %d is: ",ans);
}

  void reverseno(){
    int reverse = 0;
    
    int num = 654321;

while (num > 0) {
        int rem = num % 10;  
        reverse = reverse * 10 + rem; 
        num = num / 10;    
    }



    printf("The reverse digit is: %d\n", reverse);
  }

  void Numberinword(){

    int num;

    int reverse = 0;

    printf("enter the no. \n");
    scanf("%d",&num);

while (num > 0) {
        int rem = num % 10;  
        reverse = reverse * 10 + rem; 
        num = num / 10;   

    }

while(reverse > 0 ){
    int lastdigit = reverse % 10 ;

      switch(lastdigit){
    
    case 0:
    printf("zero ");
    break;

      case 1:
    printf("one ");
    break;

    case 2:
    printf("two ");
    break;

    case 3:
    printf("three ");
    break;

    case 4:
    printf("four ");
    break;

    case 5:
    printf("five ");
    break;

    case 6:
    printf("six ");
    break;

    case 7:
    printf("seven ");
    break;

    case 8:
    printf("eight ");
    break;

    case 9:
    printf("nine ");
    break;

    default:
    printf("you enter the wrong choice\n");
   
    }

  reverse = reverse / 10;

}

  }

int main(){

    firstandlastdigitsum();
    
    prodcutno();

    sumofnumber();

    factor();

    factorial();

    hcf();

    palidrome();

    power();

    reverseno();

    Numberinword();

    return 0;
}