#include <iostream>
#include <cstdlib>
using namespace std;

int gen_random_number()
{
    return rand() % 100 + 1;
}

int get_player_guess()
{
    int guess;
    cout << endl << "Enter your guess (1..100): ";
    cin >> guess;
    return guess;
}

void print_ans(int guess, int secret_number)
{
    if (guess > secret_number) {
        cout << "Your number is too big." << endl;
    } else if (guess < secret_number) {
        cout << "Your number is too small." << endl;
    } else {
        cout << "Congratulation! You win." << endl;
    }
}

int main()
{
    int secret_number = gen_random_number();
    int guess, so_lan=0;
    do
    {
        so_lan++;
        guess = get_player_guess();
        print_ans(guess, secret_number);
    }
    while(guess != secret_number);
    cout << "So lan doan: " << so_lan << endl;
    cout << "Diem cua ban: " << 100-so_lan << endl;
}
