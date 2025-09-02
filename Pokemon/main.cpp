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

    ProfessorOak(string p_name) {
        name = p_name;
    }

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

    void explainMainQuest(Player& player) {


        cout << "Professor Oak: Oak-ay " << player.name << "!, I am about to explain you about your upcoming grand adventure.\n";

        cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";

        cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League.\n";


        cout << "\n" << player.name << ": Wait... that sounds a lot like every other Pokémon game out there...\n";

        cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.name << "! This is serious business!\n";


        cout << "\nProfessor Oak: To achieve this, you'll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";

        cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there's a limit to how many Pokémon you can carry, so choose wisely!\n";


        cout << "\n" << player.name << ": Sounds like a walk in the park... right?\n";

        cout << "Professor Oak: Hah! That's what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let's just say you'll be starting from square one.\n";


        cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?\n";

        cout << "\n" << player.name << ": Ready as I'll ever be, Professor!\n";


        cout << "\nProfessor Oak: That's the spirit! Now, your journey begins...\n";

        cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";

    }
};

int main() {
    // Create Pokemon and Player objects for the game
    Pokemon charmander("Charmander", PokemonType::Fire, 100); // Using parameterized constructor

    // Continue with the main flow of the game
    ProfessorOak professor("Professor Oak");
    Player player("Ash", charmander);

    // Greet the player and offer Pokemon choices
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // Explain the main quest
    professor.explainMainQuest(player);

    // Placeholder for where the game loop will start
    cout << "\n[Placeholder for the Game Loop]\n";


    return 0;
}
