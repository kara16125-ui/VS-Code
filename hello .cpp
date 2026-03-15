#include <iostream>
using namespace std;

/// @brief 
/// @return 
int main() 
{
    int rows = 5; // ចំនួនជួរដែលយើងចង់បាន

    for (int i = 1; i <= rows; i++) {
        
        // ១. Loop សម្រាប់ដកឃ្លា (Space)
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // ២. Loop សម្រាប់បង្ហាញផ្កាយ (Stars)
        // រូបមន្តលេខសេសគឺ (2 * i - 1)
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        // ចុះបន្ទាត់បន្ទាប់ពីចប់ជួរនីមួយៗ
        cout << endl;
    }

    return 0;
}