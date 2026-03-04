// kullanıcı tarafından girilen sayıyı ekrana yazdıran  program 
//c program to take an integer
//as ınput and print it 
#include <stdio.h>
//driver code
int main()
{ 
   //declare the variables 
    int num;
    //take input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);
    //%d : integerin formatı, &num : num değişkeninin adresi, scanf fonksiyonu bu adrese kullanıcı tarafından girilen değeri atar
    //print the input
    //display the integer 
    printf("Entered integer is: %d\n", num);

    return 0;
}



//girilen iki sayıyı toplayan program
#include <stdio.h>
int main() {

    int num1,num2,sum;
    printf("enter first integer\n*");
    scanf("%d",&num1);
    printf("enter second integer\n*");
    scanf("%d",&num2);
    int sum = num1 + num2;
    printf("sum of two integers is %d\n",sum);
    return 0;
}


//iki sayıyı birbiriyle değistiren (SWAP) program
#include <stdio.h>
int main() {
    int a = 5;
    int b = 10;
    int temp; //geçici değişken
    //swapping values of a and b
    temp = a; //temp = 5
    a = b; //a = 10
    b = temp; //b = 5
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
