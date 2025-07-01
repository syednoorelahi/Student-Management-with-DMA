#include<iostream>
using namespace std;

void Total_marks(string *subjects, int *marks, int &size)
{
    int sum = 0;
    int subj_marks;

    for(int i=0; i<size; i++)
    {
        sum = sum + *(marks+i);
    }

    cout << "Sum of all subjects marks are: " << sum << endl;
    cout << "Enter Subject which you wants to remove " << endl;
    cin >> subj_marks;

    for(int i=0; i<size; i++)
    {
        if(subj_marks==*(marks+i))
        {
            for(int j=i; j<size-1; j++)
            {
                marks[j]=marks[j+1];
            }
            size--;
            i--;
        }
       
    }

    for(int i=0; i< size; i++)
    {
        cout << "Marks are: " << *(marks+i) << endl;
    }

}
int main()
{
    int size=6;
    string *subjects = new string[size];
    int *marks = new int[size];
    cout << "Enter Marks and Subject name " << endl << endl;

    for(int i=0; i<size; i++)
    {
        cout << "Enter Subject Name ";
        cin >>  *(subjects+i);
        cout << " Enter Marks ";
        cin >>  *(marks+i);
    }

    Total_marks(subjects, marks, size);

    delete[] subjects;
    delete[] marks;
    return 0;

}