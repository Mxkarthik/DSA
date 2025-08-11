#include <iostream>
using namespace std;

void Average_score (int scores [] ,int total_students )
{
    float total_score = 0;
    float Average = 0;
    for (int i = 0 ; i < total_students ; i++)
    {
        total_score += scores[i];
    }
    Average = (float) (total_score / total_students);
    cout<<"Calculating....."<<endl;
    cout<<"Average is :"<<Average<<endl;

}

void Above_average (int scores [] , int total_students)
{
    int above_average= 0;
    for (int i = 0 ; i < total_students ; i++)
    {
        if (scores[i] > 50)
        {
            above_average++;
        }
    }
    cout<<"Calculating...."<<endl;
    cout<<"No of Above Average Students"<<" "<<above_average<<endl;
}

void Highest_score (string student_names [] , int scores [] , int total_students)
{
    int index_score;
    int INT_MIN = 0;
    // we have to compare each and every student score :
    // we will maintain one variables one to store the index of the highest score 
    for (int i = 0 ; i < total_students ; i++ )
    {
        if (scores[i] > INT_MIN )
        {
            INT_MIN = scores[i];
            index_score = i;
        }
    }

    cout<<"Highest Score :"<<" "<<scores[index_score]<<" "<<"by"<<" "<<student_names[index_score];
}

void Lowest_Score (string student_names [] , int scores [] , int total_students)
{
    int index_score;
    int INT_MIN = 500;
    // we have to compare each and every student score :
    // we will maintain one variables one to store the index of the highest score 
    for (int i = 0 ; i < total_students ; i++ )
    {
        if (scores[i] < INT_MIN )
        {
            INT_MIN = scores[i];
            index_score = i;
        }
    }

    cout<<"Lowest Score :"<<" "<<scores[index_score]<<" "<<"by"<<" "<<student_names[index_score];
}

int main ()
{

    // taking number of students as the input 
    cout<<"Please Enter the no of students :"<<endl;
    int total_students = 0; cin>>total_students; 

    cout<<"Students Profiles"<<endl;

    string student_names [total_students];
    int scores [total_students];

    for (int i = 0 ; i < total_students ; i++)
    {
        cout<<"Please Enter the name of student"<<" "<<i+1<<endl;
        cin>>student_names[i];
        for (int j = 0 ; j < 1 ; j++ )
        {
            cout<<"Please Enter the score of"<<" "<<student_names[i]<<" "<<endl;
            cin>>scores[i];
        }
    }


    cout<<"student profiles :"<<endl; 

    for (int i = 0 ; i < total_students ; i++)
    {
        cout<<student_names[i]<<" "<<" : ";
        for (int j = 0 ; j < 1 ; j++)
        {
            cout<<scores[i]<<endl;
        }
    }


    cout<<"The Total Average of the Class :"<<endl;
    Average_score (scores, total_students);
    cout<<"Students Above Average are :"<<endl;
    Above_average(scores , total_students);

    //calculating highest score 
    cout<<"The Highest Score of the Class :"<<endl;
    Highest_score(student_names , scores , total_students);
    cout<<"The Lowest Score of the class :"<<endl;
    Lowest_Score (student_names  , scores , total_students);
    return 0;
   
}