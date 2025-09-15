#include <iostream>
using namespace std;

int main() {

	// Wrong: missing comma between variable declarations and used "," instead of ";" at the end of the statement
    // float n1 n2 n3,
	float n1, n2, n3; // Fixed: added comma and semicolon

    cout << "Enter three numbers: ";
    // Wrong: used ">" instead of ">>"
    // cin >> n1 > n2 > n3;
    cin >> n1 >> n2 >> n3; // Fixed: use >> for each variable

    // Wrong: used "=" which is assignment, not comparison
    // if(n1 = n2 && n1 >= n3)
    if (n1 >= n2 && n1 >= n3) { // Fixed: use >= to compare values
        cout << "Largest number: " << n1;
    }

    // Wrong: prints n1 instead of n2 and condition was incorrect
    // if(n2 == n1 && n2 >= n3) {
    //     cout << "Largest number: " << n1;
    // }
    if (n2 >= n1 && n2 >= n3) { // Fixed: compare n2 and print n2
        cout << "Largest number: " << n2;
    }

    // Wrong: prints n2 instead of n3
    // if(n3 >= n1 && n3 >= n2)
    //     cout << "Largest number: " << n2;
    if (n3 >= n1 && n3 >= n2) { // Fixed: compare n3 and print n3
        cout << "Largest number: " << n3;
    }

    return 0;
}

