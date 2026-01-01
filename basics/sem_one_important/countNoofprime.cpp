#include <iostream>
using namespace std;

    int countPrimes(int n) {
        int count = 0;
        for (int i = 1 ; i < n ; i++)
        {
            int flag = 1;
            for (int j = 2 ; j <= i/2 ; j++){
                if( i % j == 0)
                {
                  flag = 0;
                  break;
                }
            }
            if(flag == 1)
            {
                count++;
            }
           
        }

        cout<<count;

        return 0;
    }

int main ()
{
    int n;
    cin>>n;
    countPrimes(n);
    return 0;
}

