#include<iostream>
#include<time.h>

using namespace std;

class Board {
public:
    Board() {
        initializeBoard();
    }

    void initializeBoard() {
        for (int i = 0; i < 25; ++i) {
            board[i] = i + 1;
        }
    }

    int* getBoard() {
        return board;
    }

private:
    int board[25];
};

class Shuffle {
public:
    static void shuffleBoard(int* board) {
        srand(time(NULL));
        int temp, idx1, idx2;
        for (int i = 0; i < 100; ++i) {
            idx1 = rand() % 25;
            idx2 = rand() % 25;
            temp = board[idx1];
            board[idx1] = board[idx2];
            board[idx2] = temp;
        }
    }
};

class Display {
public:
    static void displayBoard(int* board) {
        system("cls");
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (board[i * 5 + j] == INT_MAX) {
                    cout << "*\t";
                }
                else {
                    cout << board[i * 5 + j] << "\t";
                }
            }
            cout << endl;
        }
    }
};

class Marker {
public:
    static bool markNumber(int* board, int num) {
        for (int i = 0; i < 25; ++i) {
            if (board[i] == num) {
                board[i] = INT_MAX;
                return true;
            }
        }
        return false;
    }
};

class Checker {
public:
    static int checkBingo(int* board) {
        int bingoCount = 0;
        int star1, star2;

        for (int i = 0; i < 5; ++i) {
            star1 = star2 = 0;
            for (int j = 0; j < 5; ++j) {
                if (board[i * 5 + j] == INT_MAX) {
                    ++star1;
                }
                if (board[j * 5 + i] == INT_MAX) {
                    ++star2;
                }
            }
            if (star1 == 5) ++bingoCount;
            if (star2 == 5) ++bingoCount;
        }

        star1 = 0;
        for (int i = 0; i < 25; i += 6) {
            if (board[i] == INT_MAX) ++star1;
        }
        if (star1 == 5) ++bingoCount;

        star1 = 0;
        for (int i = 4; i <= 20; i += 4) {
            if (board[i] == INT_MAX) ++star1;
        }
        if (star1 == 5) ++bingoCount;

        return bingoCount;
    }
};

class Bingo {
public:
    Bingo() {
        shuffleBoard();
    }

    void play() {
        while (true) {
            Display::displayBoard(board.getBoard());
            if (Checker::checkBingo(board.getBoard()) >= 3) {
                cout << "3빙고 게임 종료" << endl;
                break;
            }
            cout << "빙고 : " << Checker::checkBingo(board.getBoard()) << endl;
            cout << "숫자를 입력하세요 : ";
            int input;
            cin >> input;

            if (input < 1 || input > 25) {
                break;
            }
            if (!Marker::markNumber(board.getBoard(), input)) {
                continue;
            }
        }
    }

private:
    Board board;

    void shuffleBoard() {
        Shuffle::shuffleBoard(board.getBoard());
    }
};

int main() {
    Bingo game;
    game.play();
    return 0;
}
