#include <iostream>

using namespace std;

int main()
{
    char text[] = { "No maey Yu znoy zgyq oy g ykixkz gtj o gs mrgj zngz eua yurbk oz Vrkgyk hk coykx gtj jutz zkrr gteutk ghuaz znoy zgyq Zu iusvrkzk oz eua tkkj zu avrugj zu euax moznah tkc zgyq cozn jkiovnkx gtj tgsk oz roqk Euax Tgsk Euax Lgbuaxozk Iuruax" };

    for (int i = 0; i < sizeof(text); i++)
    {
        if (text[i] != ' ')
        {
            text[i] -= 6;
        }
        if (text[i] == '[')
            text[i] = 'u';

        if (text[i] == '_')
            text[i] = 'y';

        if (text[i] == '\\')
            text[i] = 'v';

        if (text[i] == ']')
            text[i] = 'w';

        if (text[i] == '?')
            text[i] = 'y';

        cout << text[i];
    }
    cout << endl;
}
