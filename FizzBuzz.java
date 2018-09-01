/*
Problem Statement:
 Print all numbers from 1 to range in such a way that if a number is divisible by 3
 fizz gets printed as the output
 if it is divisible by 5, Buzz is the output
 if the no is divisible by both 5 and 3, FizzBuzz is the answer.
*/
import java.util.Scanner;

public class FizzBuzz
{   
    public static void main(String[] args) {
        int range;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Range: ");
        range=sc.nextInt();
        for(int i=1;i<=range;i++)
        {
            if(i%3==0)
                System.out.println("Fizz");
            else if(i%5==0)
                System.out.println("Buzz");
            else
                System.out.println(i);
        }

        sc.close();
    }
}