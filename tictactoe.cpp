//By : Habiba Abdelhady
#include <bits/stdc++.h>

#define HABIBA ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1}, dy[8] = {1, -1, 0, 0, -1, 1, -1, 1},
    a[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
int x = 0, y = 0;
bool mewon()
{
    for (int i = 0; i < 3; i++)
    {
        if (a[i][0] == 2 && a[i][1] == 2 && a[i][2] == 2)
            return 1;
        if (a[0][i] == 2 && a[1][i] == 2 && a[2][i] == 2)
            return 1;
    }
    if (a[1][1] == a[2][2] && a[2][2] == a[0][0] && a[0][0] == 2)
        return 1;
    if (a[1][1] == a[2][0] && a[2][0] == a[0][2] && a[0][2] == 2)
        return 1;
    return 0;
}
bool userwon()
{
    for (int i = 0; i < 3; i++)
    {
        if (a[i][0] == 1 && a[i][1] == 1 && a[i][2] == 1)
            return 1;
        if (a[0][i] == 1 && a[1][i] == 1 && a[2][i] == 1)
            return 1;
    }
    if (a[1][1] == a[2][2] && a[2][2] == a[0][0] && a[0][0] == 1)
        return 1;
    if (a[1][1] == a[2][0] && a[2][0] == a[0][2] && a[0][2] == 1)
        return 1;
    return 0;
}
bool canwin()
{
    if (a[1][1] == a[2][0] && a[2][0] == 2 && a[0][2] == 0)
    {
        x = 0, y = 2;
        return 1;
    }
    else if (a[1][1] == a[0][2] && a[2][0] == 0 && a[0][2] == 2)
    {
        x = 2, y = 0;
        return 1;
    }
    else if (a[1][1] == 0 && a[0][2] == a[2][0] && a[0][2] == 2)
    {
        x = 1, y = 1;
        return 1;
    }
    else if (a[1][1] == a[2][2] && a[2][2] == 2 && a[0][0] == 0)
    {
        x = 0, y = 0;
        return 1;
    }
    else if (a[1][1] == 0 && a[2][2] == 2 && a[0][0] == a[2][2])
    {
        x = 1, y = 1;
        return 1;
    }
    else if (a[1][1] == a[0][0] && a[2][2] == 0 && a[0][0] == 2)
    {
        x = 2, y = 2;
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i][0] == 2 && a[i][1] == 2 && a[i][2] == 0)
        {
            x = i, y = 2;
            return 1;
        }
        if (a[i][0] == 2 && a[i][1] == 0 && a[i][2] == 2)
        {
            x = i, y = 1;
            return 1;
        }
        if (a[i][0] == 0 && a[i][1] == 2 && a[i][2] == 2)
        {
            x = i, y = 0;
            return 1;
        }
        else if (a[0][i] == 0 && a[1][i] == 2 && a[2][i] == 2)
        {
            x = 0, y = i;
            return 1;
        }
        else if (a[0][i] == 2 && a[1][i] == 0 && a[2][i] == 2)
        {
            x = 1, y = i;
            return 1;
        }
        else if (a[0][i] == 2 && a[1][i] == 2 && a[2][i] == 0)
        {
            x = 2, y = i;
            return 1;
        }
    }
    return 0;
}
bool userwin()
{
    if (a[1][1] == a[2][0] && a[2][0] == 1 && a[0][2] == 0)
    {
        x = 0, y = 2;
        return 1;
    }
    else if (a[1][1] == a[0][2] && a[2][0] == 0 && a[0][2] == 1)
    {
        x = 2, y = 0;
        return 1;
    }
    else if (a[1][1] == 0 && a[0][2] == a[2][0] && a[0][2] == 1)
    {
        x = 1, y = 1;
        return 1;
    }
    else if (a[1][1] == a[2][2] && a[2][2] == 1 && a[0][0] == 0)
    {
        x = 0, y = 0;
        return 1;
    }
    else if (a[1][1] == 0 && a[2][2] == 1 && a[0][0] == a[2][2])
    {
        x = 1, y = 1;
        return 1;
    }
    else if (a[1][1] == a[0][0] && a[2][2] == 0 && a[0][0] == 1)
    {
        x = 2, y = 2;
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i][0] == 1 && a[i][1] == 1 && a[i][2] == 0)
        {
            x = i, y = 2;
            return 1;
        }
        if (a[i][0] == 1 && a[i][1] == 0 && a[i][2] == 1)
        {
            x = i, y = 1;
            return 1;
        }
        if (a[i][0] == 0 && a[i][1] == 1 && a[i][2] == 1)
        {
            x = i, y = 0;
            return 1;
        }
        else if (a[0][i] == 0 && a[1][i] == 1 && a[2][i] == 1)
        {
            x = 0, y = i;
            return 1;
        }
        else if (a[0][i] == 1 && a[1][i] == 0 && a[2][i] == 1)
        {
            x = 1, y = i;
            return 1;
        }
        else if (a[0][i] == 1 && a[1][i] == 1 && a[2][i] == 0)
        {
            x = 2, y = i;
            return 1;
        }
    }
    return 0;
}
void mymove()
{
    x = 0, y = 0;
    if (canwin())
    {
        a[x][y] = 2;
        return;
    }
    else if (userwin())
    {
        a[x][y] = 2;
        return;
    }
    else
    {
        if (a[1][1] == 0)
            a[1][1] = 2;
        else if (a[0][0] == 0)
            a[0][0] = 2;
        else if (a[0][2] == 0)
            a[0][2] = 2;
        else if (a[2][2] == 0)
            a[2][2] = 2;
        else if (a[1][0] == 0)
            a[1][0] = 2;
        else if (a[0][1] == 0)
            a[0][1] = 2;
        else if (a[2][1] == 0)
            a[2][1] = 2;
        else if (a[1][2] == 0)
            a[1][2] = 2;
    }
}
void cat()
{
    cout << "Enter the character you want to use (Just X or O) : ";
    string c;
    cin >> c;
    while (c != "X" && c != "O")
    {
        cout << "\n\nOnly X or O, check well!!\n";
        cout << "Enter the charachter again : ";
        cin >> c;
    }
    c += (c[0] == 'X' ? 'O' : 'X');
    cout << "\nOk you will be " << c[0] << " and I'll be " << c[1];
    this_thread::sleep_for(chrono::seconds(1));
    cout << "\nLet's start the round, you will enter a two integers i, j, the index you want to put you character in (make sure it's unused),\nand I'll choose other index to put my character in.\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout <<"Are you READY? ";
    string resp;
    cin >> resp;
    cout << "\nWhatever, let's Start\n";
    int rounds = 4;
    while (rounds--)
    {
        cout <<"\n";
        for (int i = 3; i > 0; i--)
        {
            this_thread::sleep_for(chrono::seconds(1));
            cout << i << "\n";
        }
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\nRound " << 4 - rounds << "\n";
        char decision = 'r';
        while (decision == 'r')
        {
            cout << "\nEnter two integers, the index you want to place your "
                    "character in : ";
            string ii, jj;
            cin >> ii >> jj;
            while (ii[0] < '1' || jj[0] < '1' || ii[0] > '3' || jj[0] > '3' || ii.size() > 1 || jj.size() > 1 || a[ii[0] - '1'][jj[0] - '1'])
            {
                if (ii[0] > '0' && ii[0] <= '3' && jj[0] > '0' && jj[0] <= '3' && a[ii[0] - '1'][jj[0] - '1'])
                        cout << "\nUsed index\n";
                else
                    cout << "\nInvalid input, make sure that both i&j are integers between 1 and 3, and don't put trailing zeroes!\n";
                cout << "Enter the index again : ";
                cin >> ii >> jj;
            }
            int i = ii[0] - '0', j = jj[0] - '0';
            i--, j--;
            a[i][j] = 1;
            cout << "\nOk, here's the matrix :\n";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << (a[i][j] == 0 ? '.' : (a[i][j] == 1 ? c[0] : c[1]));
                    if (j != 2)
                        cout << " | ";
                }
                if (i != 2)
                    cout << "\n---------";
                cout << "\n";
            }
            cout << "\nPress c to continue, and r to re-choose your index : ";
            cin >> decision;
            if (decision == 'r')
                a[i][j] = 0;
            else
                cout << "INPUT COMPLETED\n\n";
        }
        if (userwon())
        {
            cout << "IDk how did you do this, but congratulations you won :(\n";
            break;
        }
        cout << "It's my turn\n"; 
        this_thread::sleep_for(chrono::seconds(3));
        cout <<"\nI choosed "<<x+1<<" and "<<y+1<<" the matrix now is :\n";
        mymove();
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << (a[i][j] == 0 ? '.' : (a[i][j] == 1 ? c[0] : c[1]));
                if (j != 2)
                    cout << " | ";
            }
            if (i != 2)
                cout << "\n---------";
            cout << "\n";
        }
        if (mewon())
        {
            this_thread::sleep_for(chrono::seconds(1));
            cout << "\nhehehehehe I won, hope you enjoyed this game :)\n";
            break;
        }
        if (!rounds)
        {
            for (int i = 3; i > 0; i--)
            {
                this_thread::sleep_for(chrono::seconds(1));
                cout << i << "\n";
            }
            this_thread::sleep_for(chrono::seconds(1));
            cout << "\nRound " << 5 << "\n";
            char decision = 'r';
            while (decision == 'r')
            {
                cout << "\nEnter two integers, the index you want to place your "
                        "character in : ";
                string ii, jj;
                cin >> ii >> jj;
                while (ii[0] < '1' || jj[0] < '1' || ii[0] > '3' || jj[0] > '3' || ii.size() > 1 || jj.size() > 1 || a[ii[0] - '1'][jj[0] - '1'])
                {
                    if (ii[0] > '0' && ii[0] <= '3' && jj[0] > '0' && jj[0] <= '3' && a[ii[0] - '1'][jj[0] - '1'])
                        cout << "\nUsed index\n";
                    else
                        cout << "\nInvalid input, make sure that both i&j are integers between 1 and 3, and don't put trailing zeroes.!\n";
                    cout << "Enter the index again : ";
                    cin >> ii >> jj;
                }
                int i = ii[0] - '0', j = jj[0] - '0';
                i--, j--;
                a[i][j] = 1;
                cout << "\nOk, here's the matrix :\n";
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        cout << (a[i][j] == 0 ? '.' : (a[i][j] == 1 ? c[0] : c[1]));
                        if (j != 2)
                            cout << " | ";
                    }
                    if (i != 2)
                        cout << "\n---------\n";
                }
                cout << "\nPress c to continue, and r to re-choose your index : ";
                cin >> decision;
                if (decision == 'r')
                    a[i][j] = 0;
                else
                    cout << "INPUT COMPLETED\n";
            }
            if (userwon())
            {
                cout << "\nIDk how did you do this, but congratulations you won :(\n";
                break;
            }
            else
                cout << "\nTied, GG!\n";
        }
    }
    cout << "\nWanna play the game again (y if yes and n if no )? ";
    char s;
    cin >> s;
    while (s != 'y' && s != 'n')
    {
        cout << "\nInvalid input\n";
        cout << "Enter the charachter again : ";
        cin >> s;
    }
    if (s == 'n')
    {
        cout <<"       (\\_/)\n";
        cout <<"   (  =(^Y^)=    Ok Goodbye <3.\n";
        cout <<"____\\_(m___m)_______\n";
        cout << "\n\n";
        exit(0);
    }
}
int main()
{
    cout << "Enter a character or word and press ENTER to start : ";
    string c;
    cin >> c;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "\n\nWelcome to my simple implementation of tic-tac-toe game, in this game, I've designed a logic that is impossible to lose,\nyou can have fun but remember, you CANNOT win this game boahahahahahaha..\n\n";
    this_thread::sleep_for(chrono::seconds(5));
    cout << "Ok, I'll be kind with you, you can choose the character you will "
            "play with, and you can start first too :)\n\n\n";
    while (true)
        cat();
    return 0;
}
