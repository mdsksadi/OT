#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  string first_name, last_name, phone_number, email;
  int num_cards;

  // Get input from the user
  cout << "Enter first name: ";
  cin >> first_name;
  cout << "Enter last name: ";
  cin >> last_name;
  cout << "Enter phone number: ";
  cin >> phone_number;
  cout << "Enter email: ";
  cin >> email;
  cout << "Enter the number of cards you need: ";
  cin >> num_cards;

  // Set the width of the output field and the border character
  const int field_width = 20;
  const char border_char = '-';

  // Print the cards
  for (int i = 0; i < num_cards; i++) {
    // Print the top border
    cout <<"|"<< setfill(border_char) << setw(field_width) << border_char <<"|"<< endl;
    // Print the fields
    cout << setfill('_');
    cout << "|" << setw(field_width) << left << first_name << "|" << endl;
    cout << "|" << setw(field_width) << left << last_name << "|" << endl;
    cout << "|" << setw(field_width) << left << phone_number << "|" << endl;
    cout << "|" << setw(field_width) << left << email << "|" << endl;
    // Print the bottom border
    cout <<"|"<< setfill(border_char) << setw(field_width) << border_char <<"|"<< endl;
    cout << setfill('_') << endl;
  }

  return 0;
}
