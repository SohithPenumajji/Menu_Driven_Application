#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers{};
    char selection {};

    do {
        // Display menu
        cout << "\nP - Print a number" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display the mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;  // Corrected the typo
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;

        if (selection == 'p' || selection == 'P') {
            if (numbers.empty())  // Use empty() to check if the vector is empty
                cout << "[] The list is empty" << endl;
            else {
                cout << "[";
                for (auto num : numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
        } else if (selection == 'a' || selection == 'A') {
            int num_to_add;
            cout << "Enter integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;  // Added a space for clarity
        } else if (selection == 'm' || selection == 'M') {
            if (numbers.empty())
                cout << "Unable to calculate mean - no data" << endl;
            else {
                int total = 0;  // Initialize 'total' to zero
                for (auto num : numbers)
                    total += num;  // Use '+=' to accumulate the total
                cout << "The mean is " << static_cast<double>(total) / numbers.size() << endl;
            }
        } else if (selection == 's' || selection == 'S') {
            if (numbers.empty())
                cout << "Unable to determine the smallest number - list is empty" << endl;
            else {
                int smallest = numbers[0];  // Use [] to access elements
                for (auto num : numbers)
                    if (num < smallest)
                        smallest = num;  // Corrected the assignment
                cout << "Smallest number is: " << smallest << endl;
            }
        } else if (selection == 'l' || selection == 'L') {
            if (numbers.empty())
                cout << "Unable to determine the largest number - list is empty" << endl;
            else {
                int largest = numbers[0];  // Use [] to access elements
                for (auto num : numbers)
                    if (num > largest)
                        largest = num;  // Corrected the assignment
                cout << "Largest number is: " << largest << endl;
            }
        } else if (selection == 'q' || selection == 'Q') {
            cout << "Goodbye" << endl;  // Corrected the message
        } else {
            cout << "Unknown selection - Please try again" << endl;
        }

    } while (selection != 'q' && selection != 'Q');

    return 0;
}
