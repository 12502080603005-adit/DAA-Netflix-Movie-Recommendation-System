#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>

using namespace std;

struct Movie {
    string name;
    string genre;
    float rating;
};

string toLowerCase(string text) {
    transform(text.begin(), text.end(), text.begin(),
        [](unsigned char c) {
            return static_cast<char>(tolower(c));
        });

    return text;
}

void displayMovies(const vector<Movie>& movies,
                   const string& preferredGenre) {
    bool found = false;

    cout << "\n========================================\n";
    cout << "       RECOMMENDED MOVIES\n";
    cout << "========================================\n";

    cout << fixed << setprecision(1);

    for (const Movie& movie : movies) {
        if (toLowerCase(movie.genre) ==
            toLowerCase(preferredGenre)) {

            cout << "\nMovie Name : " << movie.name << endl;
            cout << "Genre      : " << movie.genre << endl;
            cout << "Rating     : " << movie.rating << "/10" << endl;

            cout << "----------------------------------------\n";

            found = true;
        }
    }

    if (!found) {
        cout << "\nNo movies found for this genre.\n";
    }
}

int main() {
    vector<Movie> movies = {
        {"Inception", "Sci-Fi", 8.8},
        {"Interstellar", "Sci-Fi", 8.7},
        {"The Matrix", "Sci-Fi", 8.7},
        {"The Dark Knight", "Action", 9.0},
        {"Avengers Endgame", "Action", 8.4},
        {"John Wick", "Action", 7.4},
        {"The Hangover", "Comedy", 7.7},
        {"Home Alone", "Comedy", 7.7},
        {"The Mask", "Comedy", 6.9},
        {"The Conjuring", "Horror", 7.5},
        {"A Quiet Place", "Horror", 7.5},
        {"Insidious", "Horror", 6.8},
        {"Titanic", "Romance", 7.9},
        {"The Notebook", "Romance", 7.8},
        {"La La Land", "Romance", 8.0}
    };

    int choice;
    string preferredGenre;

    cout << "========================================\n";
    cout << "    NETFLIX MOVIE RECOMMENDATION SYSTEM\n";
    cout << "========================================\n";

    cout << "\nChoose Your Preferred Genre:\n";
    cout << "1. Sci-Fi\n";
    cout << "2. Action\n";
    cout << "3. Comedy\n";
    cout << "4. Horror\n";
    cout << "5. Romance\n";

    cout << "\nEnter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            preferredGenre = "Sci-Fi";
            break;

        case 2:
            preferredGenre = "Action";
            break;

        case 3:
            preferredGenre = "Comedy";
            break;

        case 4:
            preferredGenre = "Horror";
            break;

        case 5:
            preferredGenre = "Romance";
            break;

        default:
            cout << "\nInvalid choice! Please select 1 to 5.\n";
            return 0;
    }

    cout << "\nYour Preferred Genre: "
         << preferredGenre << endl;

    displayMovies(movies, preferredGenre);

    cout << "\nThank you for using the Movie Recommendation System!\n";

    return 0;
}
