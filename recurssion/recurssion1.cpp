#include <iostream>
using namespace std;


// there are two type of values 
// the first one is called L values which have specific location in memory (eg.variables)
// the second onr is called r values which are also called as temperory values that dont have a special memory address
// so we can't pass L values like pass by refernce to the recurssieve function because . the values sum(number/10) and sum(number % 10) are temperory variables and 
// dont have specific address hence therefore we can use pass by refernce in the resursive function
int sum(int number)
{
    //base case:
    if (number <= 9 && number>=0 ) return number;

    return (sum(number / 10)) + (sum( number % 10));
}



int main()
{
    int number;
    cout<<"Please Enter the number that you want sum of"<<" "<<endl;
    cin>>number;

    cout<<"Here is the Value of the sum "<<" "<<endl;
    int sum_value = sum(number);
    cout<<sum_value;
} 