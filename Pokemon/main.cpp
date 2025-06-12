#include <iostream>

using namespace std;

int main() {
    string chosen_room;

    cout << "Welcome, brave adventurer!\n";
    cout << "You find yourself standing in front of a massive, ancient castle.\n";
    cout << "The walls are cracked with age,\n";
    cout << "and the doors creak as they slowly open in front of you.\n";
    cout << "Inside, there are many rooms, each more mysterious than the last.\n";
    cout << "Some may hold treasures beyond imagination,\n";
    cout << "while others may hide dangers lurking in the shadows.\n";

    cout << "Professor Oak: Choose wisely...\n";
    cout << "1. Charmander - The fire type. A real hothead!\n";
    cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
    cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

    int choice;
    cout << "Enter the castle, choose your room by entering a number (1, 2, or 3): ";
    cin >> choice;
    
    switch (choice) {
    case 1:
        chosen_room = "Room 1";
        cout << "A room full of gold coins! You can retire now, you lucky soul!\n";
        break;

    case 2:
        chosen_room = "Room 2";
        cout << "A library of ancient books! You gain immense knowledge, but beware… some knowledge comes with a price.\n";
        break;

    case 3:
        chosen_room = "Room 3";
        cout << "A sleeping dragon! You barely escape with your life. Perhaps next time, choose more wisely...\n";
        break;

    default:
        cout << "A secret passage to the dungeon! Beware, danger lies ahead in the dark corridors.\n";
        chosen_room = "Dark Room"; // Default if no valid choice is made
        break;
    }

    return 0;
}
