#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector <int> Ncoins( vector <int> &coins , int & Amount)
{
    vector <int> answer;
    int notes = 0;
    int i = 0 ; 
    while (Amount  && i < coins.size())
    {
        notes = Amount/coins[i]; 

        while(notes--)
        {
            answer.push_back(coins[i]);
        }
        Amount%=coins[i];
        i++;
    }
    if (Amount > 0) {
        cout << "\n[Note: Exact change could not be fully made. Remaining: " << Amount << "]\n";
    }
    return answer;
}

int main ()
{
    int sizeofcoins = 0;
    int Amount;
    cout<<"Enter number of coins \n";
    cin>>sizeofcoins;
    
    vector <int> coins(sizeofcoins);
    cout<<"Enter coins \n";
    for (int i = 0 ; i < sizeofcoins ; i++)
    {
        cin>>coins[i];
    }

    sort(coins.rbegin(), coins.rend());
    cout<<"Enter the Amount \n";
    cin>>Amount;
    // Answer 
    vector <int> result = Ncoins(coins,Amount);
    for (int i = 0 ; i < result.size() ; i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}