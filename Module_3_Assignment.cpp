//	Program:	Gully Cricket Game
//  Author: 	Samir Ali


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class CricketGame {

	public:
		string name;
		string players[7];
		int runs;
};

void welcomeUsers();
void startInning(int, string, string);
void displayPlayers(string[], string[]);
void selectBatsmanAndBowler(CricketGame, CricketGame);
string selectPlayer(string[]);
int playInning();
void displayScore(CricketGame);
void decideWinner(int, int);

string currentBatsman, currentBowler;


int main() {

	welcomeUsers();

	CricketGame teamA;
	teamA.players[0] = "Samir";
	teamA.players[1] = "Saurav";
	teamA.players[2] = "Ankit";
	teamA.players[3] = "Suraj";
	teamA.players[4] = "Vishal";
	teamA.players[5] = "Tasleem";
	teamA.players[6] = "Mannan";
	teamA.name = "TeamA";

	CricketGame teamB;
	teamB.players[0] =  "Chandan";
	teamB.players[1] =  "Amaan";
	teamB.players[2] =  "Ritesh";
	teamB.players[3] =  "Daniyal";
	teamB.players[4] =  "Saidullah";
	teamB.players[5] =  "Kapil";
	teamB.players[6] =  "Jitendra";
	teamB.name = "TeamB";

    displayPlayers(teamA.players, teamB.players);

    startInning(1, teamA.name, teamB.name);
    selectBatsmanAndBowler(teamA, teamB);
    teamA.runs = playInning();
    displayScore(teamA);

    cout << "\n*********** TeamB needs " << teamA.runs + 1 << " runs to win ***********" << endl << endl;

    startInning(2, teamB.name, teamA.name);
    selectBatsmanAndBowler(teamB, teamA);
    teamB.runs = playInning();
    displayScore(teamB);

    decideWinner(teamA.runs, teamB.runs);

    return 0;
}

// welcome message 
void welcomeUsers() {

    cout << "*********************************************" << endl;
    cout << "|=========== GULLY CRICKET GAME ===========|" << endl;
    cout << "|                                          |" << endl;
    cout << "|        Welcome to Gully Cricket          |" << endl;
    cout << "*********************************************" << endl;
}

void displayPlayers(string playersA[7], string playersB[7]) {

	cout << "\nPress Enter to Display All players: ";
	cin.get();

    cout << "--------------------------\t\t--------------------------" << endl;
    cout << "|=======  Team-A  =======|\t\t|=======  Team-B  =======|" << endl;
    cout << "--------------------------\t\t--------------------------" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "|\t";
        cout << "[" << i << "] " << playersA[i] << "\t |";
        cout << "\t\t|\t";
        cout << "[" << i << "] " << playersB[i] << "\t |";
        cout << endl;
    }
    cout << "--------------------------\t\t--------------------------" << endl << endl;
}

// Select Batsman and Bowler 
void selectBatsmanAndBowler(CricketGame batTeam, CricketGame bowlTeam) {

    cout << "Press Enter to select Batsman and Bowler: ";
    cin.get();

    currentBatsman = selectPlayer(batTeam.players);
    currentBowler = selectPlayer(bowlTeam.players);

    cout << "----------------------------------------------------" << endl;
    cout << "\t\t " << batTeam.name << ": Batsman - " << currentBatsman <<endl;
    cout << "\t\t " << bowlTeam.name <<": Bowler  - " << currentBowler <<endl;
    cout << "----------------------------------------------------" << endl << endl;
}

// Select a player 
string selectPlayer(string players[3]) {

    int randomValue;

    srand(time(NULL));
    randomValue = rand() % 3; // Generates either 0, 1, or 2

    string selectedPlayerName = players[randomValue];
    return selectedPlayerName;
}

// Start inning by displaying initial inning details 
void startInning(int inning, string batTeam, string bowlTeam) {

	cout << "Press Enter to start inning " << inning;
    cin.get();

    cout << "|------------ Inning " << inning << " Starts ------------|" << endl;
    cout << "|----- " << batTeam << " is batting and " << bowlTeam << " is bowling -----|" << endl << endl;
}

/* Play one inning (6 balls) */
int playInning() {

    int runs = 0;
    const int MAX_BALLS = 6;

    for (int i = 0; i < MAX_BALLS; i++) {

        cout << "Press Enter to bowl...";
        cin.get();

        cout << "Bowling..." << endl << endl;

        int randomValue;
        srand(time(NULL));
        randomValue = rand() % 7;   // 0, 1, 2, 3, 4, 5, or 6 
        runs = runs + randomValue;

        cout << "----------------------------------------------------" << endl;
        cout << "|\t\t" << currentBowler << " to " << currentBatsman << " " << randomValue << " runs" << endl;
        cout << "----------------------------------------------------" << endl << endl;
    }

    return runs;
}

// Display runs scored by batting team in the inning 
void displayScore(CricketGame team) {

    cout << "----------------------------------------------------" << endl;
    cout << "\t\t " << team.name << " scored " << team.runs << " runs." << endl;
    cout << "----------------------------------------------------" << endl << endl;
}

// Decide winner by comparing final scores of both the teams 
void decideWinner(int teamAScore, int teamBScore) {

	cout << "----------------------------------------------------" << endl;

    if (teamAScore > teamBScore) {
        cout << "\t\t Team A is the Winner" << endl;
    } else if (teamAScore < teamBScore) {
        cout<< "\t\t Team B is the Winner" << endl;
    } else {
        cout << "\t\t Match Draw" << endl;
    }

    cout << "----------------------------------------------------" << endl << endl;
}
