#include <iostream>
#include<string>

using namespace std;

enum class PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

enum class PokemonType
{
    Fire,
    Electric,
    Grass,
    Water,
    Earth,
    Normal
};

class Pokemon {
public:
    string name;
    PokemonType type;
    int health;

    Pokemon() {
        name = "Pikachu";
        type = PokemonType::Electric;
        health = 10;
    }
    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
    }
    Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
    }

    void attack() {
        cout << name << " attacks with a powerful move!\n";
    }
};

class Player
{
public:
    string name;
    Pokemon chosenPokemon;

    Player() {
        name = "Trainer";
        chosenPokemon = Pokemon();
    }
    Player(string p_name, Pokemon p_chosenPokemon) {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
    }
    Player(const Player& other) {
        name = other.name;
        chosenPokemon = other.chosenPokemon;
    }

    void choosePokemon(int choice) {
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::Charmander:
            chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            break;
        case PokemonChoice::Bulbasaur:
            chosenPokemon = Pokemon("Bulbasur", PokemonType::Grass, 100);
            break;
        case PokemonChoice::Squirtle:
            chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            break;
        default:
            chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
            break;
        }

        cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
    }
};

class ProfessorOak {
    // Attributes
public:
    string name;

    // Method to greet the player
    void greetPlayer(Player& player) {
        cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
        cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
        cout << name << ": But enough about me. Let's talk about you!\n";
    }

    // Method to ask the player to choose a Pokemon
    void offerPokemonChoices(Player& player) {
        cout << name << ": First, tell me, what's your name?\n";
        getline(cin, player.name);
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        cout << name << ": You must be eager to start your adventure. But first, you'll need a Pokemon of your own!\n";

        // Presenting Pokemon choices 
        cout << name << ": I have three Pokemon here with me. They're all quite feisty!\n";
        cout << name << ": Choose wisely...\n"; std::cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        int choice;
        cout << name << ": So, which one will it be? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice-1);
    }
};

int main() {
    // Creating Objects of ProfessorOak, Pokemon and Player class
    ProfessorOak professor;
    Pokemon placeholderPokemon;
    Player player;

    //Assigning Values to placeholderPokemon attributes
    placeholderPokemon.name = "Pikachu";
    placeholderPokemon.type = PokemonType::Electric;
    placeholderPokemon.health = 40;

    //Assigning Values to player attributes
    player.name = "Trainer";

    //Assigning Values to ProfessorOak attributes
    professor.name = "Professor Oak";

    // Greet the player and offer Pokemon choices 
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Conclude the first chapter 
    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";


    return 0;
}
