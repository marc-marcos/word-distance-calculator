#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

struct Letter {
    int x;
    int y;
};

Letter get_letter_from_char(char c) {
    Letter l;

    // first row
    if (c == 'q') {
        l.x = 0;
        l.y = 0;
    }

    else if (c == 'w') {
        l.x = 1;
        l.y = 0;
    }

    else if (c == 'e') {
        l.x = 2;
        l.y = 0;
    }

    else if (c == 'r') {
        l.x = 3;
        l.y = 0;
    }

    else if (c == 't') {
        l.x = 4;
        l.y = 0;
    }

    else if (c == 'y') {
        l.x = 5;
        l.y = 0;
    }

    else if (c == 'u') {
        l.x = 6;
        l.y = 0;
    }

    else if (c == 'i') {
        l.x = 7;
        l.y = 0;
    }

    else if (c == 'o') {
        l.x = 8;
        l.y = 0;
    }

    else if (c == 'p') {
        l.x = 9;
        l.y = 0;
    }

    // second row
    else if (c == 'a') {
        l.x = 0;
        l.y = 1;
    }

    else if (c == 's') {
        l.x = 1;
        l.y = 1;
    }

    else if (c == 'd') {
        l.x = 2;
        l.y = 1;
    }

    else if (c == 'f') {
        l.x = 3;
        l.y = 1;
    }

    else if (c == 'g') {
        l.x = 4;
        l.y = 1;
    }

    else if (c == 'h') {
        l.x = 5;
        l.y = 1;
    }

    else if (c == 'j') {
        l.x = 6;
        l.y = 1;
    }

    else if (c == 'k') {
        l.x = 7;
        l.y = 1;
    }

    else if (c == 'l') {
        l.x = 8;
        l.y = 1;
    }

    else if (c == '0') {
        l.x = 9;
        l.y = 1;
    }

    // third row
    else if (c == 'z') {
        l.x = 0;
        l.y = 2;
    }

    else if (c == 'x') {
        l.x = 1;
        l.y = 2;
    }

    else if (c == 'c') {
        l.x = 2;
        l.y = 2;
    }

    else if (c == 'v') {
        l.x = 3;
        l.y = 2;
    }

    else if (c == 'b') {
        l.x = 4;
        l.y = 2;
    }

    else if (c == 'n') {
        l.x = 5;
        l.y = 2;
    }

    else if (c == 'm') {
        l.x = 6;
        l.y = 2;
    }

    return l;
}

double distance_between_two_letters(Letter a, Letter b) {
    return (sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y)));
}

double distance_of_a_word(string word) {
    int word_length = word.size();
    double total_length = 0;

    for (int i = 0; i < word_length-1; ++i) {
        total_length += distance_between_two_letters(get_letter_from_char(word[i]), get_letter_from_char(word[i+1]));
    }

    return total_length;
}


int main() {
    cout.setf(ios::fixed);
    cout.precision(3);
    double max_distance;
    long long int counter_maxima, counter = 1;

    string max_string;

    string s;
    while (cin >> s) {
        double distance = distance_of_a_word(s);
        if (distance > max_distance) {
            max_string = s;
            max_distance = distance;
            counter_maxima = counter;
        }

        ++counter;
    }

    cout << "palabra más larga: " << max_string << " con una distancia de " << max_distance << " que esta en la posición " << counter_maxima << endl;
    cout << counter << endl;
}