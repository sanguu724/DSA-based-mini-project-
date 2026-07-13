#include <iostream>

char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

void display() {
    cout << "\n";
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int pos;
    char player='X';

    display();

    for(int k=0;k<9;k++) {
        cout << "\nPlayer " << player << " Enter Position: ";
        cin >> pos;

        int r=(pos-1)/3;
        int c=(pos-1)%3;

        if(board[r][c]!='X' && board[r][c]!='O')
            board[r][c]=player;
        else {
            cout<<"Already Filled!";
            k--;
            continue;
        }

        display();

        player=(player=='X')?'O':'X';
    }

    return 0;
}