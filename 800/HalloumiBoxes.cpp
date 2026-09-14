#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    cout<<"Enter number of test cases\n";
    int t;
    cin>>t;
    while (t--)
    {
        cout<<"Enter the value of n \n";
        int n;
        cin>>n;
        cout<<"Enter the value of k \n";
        int k;
        cin>>k;

        vector<int>a(n);

        for (int i = 0; i < n ; i++)
        {
            cin >> a[i];
        }

        if ( k >=2 )
        {
            cout<<"YES\n";
        }
        else
        {
            bool sorted = true;
            for (int i = 0; i < n-1 ; i++ )
            {
                if (a[i] > a[i+1])
                {
                    sorted = false;
                    break;
                }
            }

            if (sorted)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }

    return 0;
}