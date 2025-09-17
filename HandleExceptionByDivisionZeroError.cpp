//Ayush Yadav
//24070123028

#include <iostream>
using namespace std;

int main() {
    float n1, n2, ans;

    cout << "Enter values for number 1 and number 2: ";
    cin >> n1 >> n2;

    try {
        if (n2 == 0) {
            throw n2;  
        } else {
            ans = n1 / n2;
            cout << "Answer = " << ans << endl;
        }
    } catch (float num) {
        cout << "\nERROR: Division by " << num << " is not allowed." << endl;
    }

    return 0;
}

/*Output
Enter values for number 1 and number 2: 1 5
Answer = 0.2
*/
