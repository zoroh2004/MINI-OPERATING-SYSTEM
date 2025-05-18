#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int get_days_in_month(int month, int year) {
    if (month == 2) return is_leap_year(year) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

int main() {
    char choice;
    do {
        int year, month;
        cout << "Simple Calendar\n";
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter month (1-12): ";
        cin >> month;
        if (month < 1 || month > 12) {
            cout << "Invalid month!\n";
            continue;
        }
        int days = get_days_in_month(month, year);
        cout << "Month: " << month << ", Year: " << year << endl;
        cout << "Sun Mon Tue Wed Thu Fri Sat\n";
        int start_day = 1; // Simplified: assume month starts on Sunday
        for (int i = 0; i < start_day; i++) cout << "    ";
        for (int day = 1; day <= days; day++) {
            printf("%3d ", day);
            if ((day + start_day) % 7 == 0) cout << endl;
        }
        cout << endl;
        cout << "Display another calendar? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
