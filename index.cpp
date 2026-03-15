#include <iostream>
using namespace std;

// រកពិទ្ទុ
    string getGrade(int score) 
    {
        if (score >= 90) return "A";
        else if (score >= 80) return "B";
        else if (score >= 70) return "C";
        else if (score >= 60) return "D";
        else return "F";
    }
// រកចំនួ​avg
    double score(int csore[],int n)
    {   int n;int sum=0;
        for( int i=0 ; i<=n ; i++)
        {
            sum+=csore[i];
        }
        return (double)sum / n;
    }
// ចំនួនតូចធំ
    int mixendmax(int mix ,int max)
    {
        mix=csore;
        if()
    }
    int main() {

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string study[n];
    int myscore[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i+1 << " name: ";
        cin >> study[i];

        cout << "Student " << i+1 << " score: ";
        cin >> myscore[i];
    }

    double average = score(myscore,n);

    int max = myscore[0];
    int min = myscore[0];
    string study_max = study[0];
    string study_min = study[0];

    cout << "\n----- Student Result -----\n";

    for(int i = 0; i < n; i++)
    {
        cout << study[i] << " = " << myscore[i]
             << " Grade: " <<getGrade(myscore[i])<< endl;

        if(myscore[i] > max)
        {
            max = myscore[i];
            study_max = study[i];
        }

        if(myscore[i] < min)
        {
            min = myscore[i];
            study_min = study[i];
        }
    }

    cout << "\nTotal score = " << endl;
    cout << "Average = " << average << endl;
    cout << "Top student = " << study_max << " (" << max << ")" << endl;
    cout << "Lowest student = " << study_min << " (" << min << ")" << endl;

    return 0;
}