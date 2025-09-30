#include <iostream>
using namespace std;

int main ()
{
    int n_p, n_s , required;

    printf("Enter the value of no of packets");
    scanf("%d",&n_p);
    printf("\nEnter the value of no of students");
    scanf("%d",&n_s);
    required = (n_s) - (n_p * 4);
    // required packets 
    printf("required = %d", (n_s - required)/4);
}

// total = n_p * 4 => n_p = total/4 
// required = (n_p * 4)- (n_s) => required + (n_s) = (n_p*4) => required + (n_S)/4 = n_p 
// required = (n_s) - (n_p * 4);  => required-n_s = -(n_p * 4) => (n_s - required)/4 = n_p
// if i apply (n_p * 4)- (n_s) this i am getting negitive chocolates but i need packets not chocolates right 
// if the inputs are 2 , 19 the required chocalates are -11 
// now the question comes how can i tell the computer to make this calculation 
// that mean i need 3 packets more 

// packet = 4 choclates