#include <iostream>
using namespace std;

class subjects 
{
    int maths = 90;
    int physics =  77;
    int chemistry = 69;

    public:
    void show(void);
}

void subjects :: show(void)
{
    cout<<maths<<physics<<chemistry;
}
int main ()
{
    subjects s;
}