#include <iostream>
#include <string>
using namespace std;

// បង្កើត Function មួយឈ្មោះថា getGrade
// វាទទួលពិន្ទុចូល (int score) ហើយបញ្ចេញនិទ្ទេសមកវិញ (string)
string getGrade(int score) {
    if (score >= 90) return "A";
    else if (score >= 80) return "B";
    else if (score >= 70) return "C";
    else if (score >= 60) return "D";
    else return "F";
}

int main() {
    int myScore = 85;
    

    // យើងគ្រាន់តែហៅ (Call) Function មកប្រើ មិនបាច់សរសេរ if-else វែងៗទៀតទេ
    
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    
    string study[n];
    int score[n];
    
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i+1 << " name: ";
        cin >> study[i];
        
        cout << "Student " << i+1 << " score: ";
        cin >> score[i];
        
    }
    int gread;
    for(int p=0 ; p < n ; p++){
       gread = getGrade(score[p]);
    }

    return 0;
}