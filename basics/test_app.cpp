#include <iostream>
using namespace std;


float persentage (int total_marks , int correct)
{
    float result = (float) correct /total_marks * 100;
    return result;
}

char grade (int total_marks , int correct)
{
    float r_persentage = persentage(total_marks , correct);

    if ( r_persentage > 80 )
    {
        return 'A';
    }
    else if (r_persentage > 50 && r_persentage <= 80)
    {
        return 'B';
    }
    else if (r_persentage < 50)
    {
        return 'F';
    }
}


int main ()
{
    
    // defining questions 
    string questions [5]= {"What is the value of 2+1" , "What is the value of 3+8" , "What is the value of 6+4" , "What is the value of 3+4" , "What is the value of 2+0"};
    int options [5] [4] = {
        {3 , 1 , 2 , 0} , {5 , 8  , 11 , 10} , {9, 1 , 3 , 10} , {7 , 9 , 10 , 8} , {2, 1, 3 , 9}
    };

    // answers for the above values :
    int answer[5] = {1,3,4,1,1};

    int *response = new int [5];
    // total marks for the test 
    int total_marks = 5;

    for ( int i = 0 ; i < 5 ; i++)
    {
        // displaying question number
        cout<<"Question:"<<i+1 <<endl;
        cout<<questions[i]<<endl;

        //options
        for (int k = 0 ; k < 4 ; k++)
        {
            cout<<k+1<<")"<<options [i] [k]<<endl;
        }
        cout<<"Enter Response";
        cin>>response[i];
    }


    int correct = 0 ; int wrong = 0;

    for (int i = 0 ; i < 5 ; i++)
    {
        if(response[i] == answer[i])
        {
            correct ++;
        }
        else
        {
            wrong++;
        }
    }

    cout<<"The value of persentage is :"<<persentage(total_marks , correct)<<endl;
    cout<<"Your grade:"<<grade(total_marks , correct)<<endl;
    cout<<"Correct :"<<correct<<endl;
    cout<<"Wrong :"<<wrong<<endl;

    return 0;

}