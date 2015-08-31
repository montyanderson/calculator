#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Calculator" << endl;
    cout << "----------" << endl;

    while(1 > 0) {
        string op;
        double a, b;

        cout << "> ";
        cin >> a >> op >> b;

        if(op == "+")
            cout << a + b << endl;

        if(op == "-")
            cout << a - b << endl;

        if(op == "x" || op == "*")
            cout << a * b << endl;

        if(op == "/")
            cout << a / b << endl;

        if(op == "pow") {
            long int ans = 1;

            for(int i = 0; i < b; i++)
                ans *= a;

            cout << ans;
        }

        if(op == "prime") {
            int total = 0;

            for(int i = (int) a; i <= (int) b; i++) {
                int root = (int) sqrt(i) + 1;
                bool prime = true;

                if(i <= 1)
                    prime = false;

                for(int f = 2; f < root; f++) {
                    if(i % f == 0)
                        prime = false;
                }

                if(prime == true) {
                    cout << i << endl;
                    total++;
                }
            }

            cout << endl << "(" << total << " primes found)" << endl;
        }

    }
}
