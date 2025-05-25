#include <iostream>
#include <string>

using namespace std;

int main() {
    int moodOption, energyOption, preferenceOption;
    string retry;
    bool running = true;

    cout << "Welcome to the Mood-Based Music Recommender!" << endl;
    cout << "-------------------------------------------" << endl;

    while (running) {
        // Mood selection
        do {
            cout << "\nHow are you feeling today?" << endl;
            cout << "  1. Happy" << endl;
            cout << "  2. Sad" << endl;
            cout << "  3. Angry" << endl;
            cout << "  4. Relaxed" << endl;
            cout << "Enter the number of your choice: ";
            cin >> moodOption;
            if (moodOption < 1 || moodOption > 4) {
                cout << "Invalid option. Please try again." << endl;
            }
        } while (moodOption < 1 || moodOption > 4);

        // Energy selection
        do {
            cout << "\nDo you want energy or calmness?" << endl;
            cout << "  1. Energy" << endl;
            cout << "  2. Calmness" << endl;
            cout << "Enter the number of your choice: ";
            cin >> energyOption;
            if (energyOption < 1 || energyOption > 2) {
                cout << "Invalid option. Please try again." << endl;
            }
        } while (energyOption < 1 || energyOption > 2);

        // Preference selection
        do {
            cout << "\nDo you prefer lyrics or instrumental?" << endl;
            cout << "  1. Lyrics" << endl;
            cout << "  2. Instrumental" << endl;
            cout << "Enter the number of your choice: ";
            cin >> preferenceOption;
            if (preferenceOption < 1 || preferenceOption > 2) {
                cout << "Invalid option. Please try again." << endl;
            }
        } while (preferenceOption < 1 || preferenceOption > 2);

        cout << "\nBased on your mood, here's your recommendation:" << endl;
        cout << "-------------------------------------------" << endl;

        // Map options to strings for easier logic
        string mood, energy, preference;
        switch (moodOption) {
            case 1: mood = "Happy"; break;
            case 2: mood = "Sad"; break;
            case 3: mood = "Angry"; break;
            case 4: mood = "Relaxed"; break;
        }
        energy = (energyOption == 1) ? "Energy" : "Calmness";
        preference = (preferenceOption == 1) ? "Lyrics" : "Instrumental";

        if (mood == "Happy") {
            if (energy == "Energy") {
                if (preference == "Lyrics") {
                    cout << "Genre: Bollywood Pop" << endl;
                    cout << "Song: 'Chaiyya Chaiyya' by A.R. Rahman (Movie: Dil Se, Year: 1998, Singer: Sukhwinder Singh)" << endl;
                } else {
                    cout << "Genre: Indian Electronic" << endl;
                    cout << "Song: 'Jai Ho' by A.R. Rahman (Movie: Slumdog Millionaire, Year: 2008, Singer: Sukhwinder Singh)" << endl;
                }
            } else {
                if (preference == "Lyrics") {
                    cout << "Genre: Indie Pop" << endl;
                    cout << "Song: 'Tum Hi Ho' by Arijit Singh (Movie: Aashiqui 2, Year: 2013, Singer: Arijit Singh)" << endl;
                } else {
                    cout << "Genre: Lo-Fi" << endl;
                    cout << "Song: 'Lofi Hip Hop Radio - beats to relax/study to'" << endl;
                }
            }
        } else if (mood == "Sad") {
            if (energy == "Energy") {
                if (preference == "Lyrics") {
                    cout << "Genre: Rock" << endl;
                    cout << "Song: 'Tum Se Hi' by Pritam (Movie: Jab We Met, Year: 2007, Singer: Mohit Chauhan)" << endl;
                } else {
                    cout << "Genre: Post-Rock" << endl;
                    cout << "Song: 'Raabta' by Pritam (Movie: Agent Vinod, Year: 2012, Singer: Pritam)" << endl;
                }
            } else {
                if (preference == "Lyrics") {
                    cout << "Genre: Indie Folk" << endl;
                    cout << "Song: 'Raabta' by Pritam (Movie: Agent Vinod, Year: 2012, Singer: Pritam)" << endl;
                } else {
                    cout << "Genre: Ambient" << endl;
                    cout << "Song: 'Raabta' by Pritam (Movie: Agent Vinod, Year: 2012, Singer: Pritam)" << endl;
                }
            }
        } else if (mood == "Angry") {
            if (energy == "Energy") {
                if (preference == "Lyrics") {
                    cout << "Genre: Metal" << endl;
                    cout << "Song: 'Tum Se Hi' by Pritam (Movie: Jab We Met, Year: 2007, Singer: Mohit Chauhan)" << endl;
                } else {
                    cout << "Genre: Industrial" << endl;
                    cout << "Song: 'Raabta' by Pritam (Movie: Agent Vinod, Year: 2012, Singer: Pritam)" << endl;
                }
            } else {
                if (preference == "Lyrics") {
                    cout << "Genre: Alternative Rock" << endl;
                    cout << "Song: 'Tum Se Hi' by Pritam (Movie: Jab We Met, Year: 2007, Singer: Mohit Chauhan)" << endl;
                } else {
                    cout << "Genre: Experimental" << endl;
                    cout << "Song: 'Raabta' by Pritam (Movie: Agent Vinod, Year: 2012, Singer: Pritam)" << endl;
                }
            }
        } else if (mood == "Relaxed") {
            if (energy == "Energy") {
                if (preference == "Lyrics") {
                    cout << "Genre: Jazz" << endl;
                    cout << "Song: 'Tum Se Hi' by Pritam (Movie: Jab We Met, Year: 2007, Singer: Mohit Chauhan)" << endl;
                } else {
                    cout << "Genre: Classical" << endl;
                    cout << "Song: 'Raabta' by Pritam (Movie: Agent Vinod, Year: 2012, Singer: Pritam)" << endl;
                }
            } else {
                if (preference == "Lyrics") {
                    cout << "Genre: Acoustic" << endl;
                    cout << "Song: 'Tum Se Hi' by Pritam (Movie: Jab We Met, Year: 2007, Singer: Mohit Chauhan)" << endl;
                } else {
                    cout << "Genre: Lo-Fi" << endl;
                    cout << "Song: 'Lofi Hip Hop Radio - beats to relax/study to'" << endl;
                }
            }
        }

        cout << "\nDo you want to try again? (yes/no): ";
        cin >> retry;
        if (retry != "yes" && retry != "Yes") {
            running = false;
        }
    }

    cout << "\nThank you for using the Mood-Based Music Recommender!" << endl;
    return 0;
} 