#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
const int z_length = 30;
const int a_length = 50;
int z_array[z_length];
int a_array[a_length];
int r_array[z_length + a_length];
for (int i = 0; i < z_length; i++) {
z_array[i] = rand() % 20 - 10;
}
for (int i = 0; i < a_length; i++) {
a_array[i] = rand() % 20 - 10;
}
for (int i = 0; i < z_length; i++) {
r_array[i] = z_array[i];
}
for (int i = 0; i < a_length; i++) {
r_array[i + z_length] = a_array[i];
}

sort(r_array, r_array + z_length + a_length);

cout << "Array Z:" << "\n";
for (int i = 0; i < z_length; i++) {
cout << z_array[i] << " ";
}
cout << "\n" << "Array A:" << "\n";
for (int i = 0; i < a_length; i++) {
cout << a_array[i] << " ";
}
cout << "\n" << "Array R:" << "\n";
for (int i = 0; i < z_length + a_length; i++) {
cout << r_array[i] << " ";
}
}
