#include <iostream>
#using namespace std;

int main() {
    int arr[20], odd[20], even[20];
    int o = 0, e = 0;

    for (int i = 0; i < 20; i++) {
        arr[i] = (i + 1) * 3; // values between 1–100

        if (arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    cout << "Odd numbers:\n";
    for (int i = 0; i < o; i++) cout << odd[i] << " ";

    cout << "\nEven numbers:\n";
    for (int i = 0; i < e; i++) cout << even[i] << " ";

    return 0;
}

