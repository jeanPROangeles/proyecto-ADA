#include <iostream>
#include <sstream>
#include <string>
#include <vector>
//#include <algorithm>
using namespace std;

#define SWITCHC1 1
#define SWITCHC2 2
#define SWITCHC3 3
#define SWITCHC4 4

vector<char> C1(8, 0);

vector<char> C2(32, 0);

vector<char> C3(64, 0);

vector<char> C4(128, 0);

void fillSets ()
{
    int i;

    //Conjunto 1
    C1[0] = 97;     //a
    C1[1] = 101;    //e
    C1[2] = 105;    //i
    C1[3] = 111;    //o
    C1[4] = 117;    //u
    C1[5] = SWITCHC2;
    C1[6] = SWITCHC3;
    C1[7] = SWITCHC4;

    //Conjunto 2
    C2[0] = 97;     //a
    C2[1] = 101;    //e
    C2[2] = 105;    //i
    C2[3] = 111;    //o
    C2[4] = 117;    //u
    C2[5] = 65;     //A
    C2[6] = 69;     //E
    C2[7] = 73;
    C2[8] = 79;
    C2[9] = 85;     //U
    for (i=10; i<=19; i++)
        C2[i] = (char)(i+38);   //0...9
    for (i=20; i<=28; i++)
        C2[i] = (char)(i+12);   // ...(
    C2[29] = SWITCHC3;
    C2[30] = SWITCHC4;
    C2[31] = SWITCHC1;

    //Conjunto 3
    for (i=0; i<=25; i++)
        C3[i] = (char)(i+97);   //a...z
    for (i=26; i<=56; i++)
        C3[i] = (char)(i+39);   //A...Z + [..._
    for (i=57; i<=60; i++)
        C3[i] = (char)(i+66);   //{...~
    C3[61] = SWITCHC4;
    C3[62] = SWITCHC1;
    C3[63] = SWITCHC2;

    //Conjunto 4
    for (i=0; i<=94; i++)
        C4[i] = (char)(i+32);
    C4[125] = SWITCHC1;
    C4[126] = SWITCHC2;
    C4[127] = SWITCHC3;
}

int findSmallestSet (char c)
{
    if (c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
        return 1;
    else
        if (c == 65 || c == 69 || c == 73 || c == 79 || c == 85 || (48<=c && c<=57) || (32<=c && c<=40))
            return 2;
        else
            if (65<=c && c<=126 && c!=96)
                return 3;
            else
                return 4;
}

int getNumBits (int nSet)
{
    switch (nSet)
    {
        case 1:
            return 3;
        case 2:
            return 5;
        case 3:
            return 6;
        case 4:
            return 7;
        default:
            return -1;
    }
}

int findIndexOnSet (int ascii, int nSet)
{
    vector<char>* selectedSet;

    switch (nSet)
    {
        case 1:
            selectedSet = &C1;
            break;
        case 2:
            selectedSet = &C2;
            break;
        case 3:
            selectedSet = &C3;
            break;
        case 4:
        default:
            selectedSet = &C4;
    }

    for (int i=0; i < (*selectedSet).size(); i++)
    {
        if (ascii == (*selectedSet)[i])
            return i;
    }

    return -1;
}

string codificaBinario (int base10Num, int nBits)
{
    string base2Num;

    while (base10Num > 0)
    {
        base2Num = (char)(base10Num % 2 + 48) + base2Num;

        base10Num /= 2;
    }

    for (int i = base2Num.size(); i < nBits; i++)
        base2Num = '0' + base2Num;

    return base2Num;
}

int main()
{
    string s;
    cout << "Ingrese la cadena: ";
    getline(cin, s);

    stringstream ss(s);
    char c;

    string result;

    fillSets();

    int prevSet = 0;

    int currentSet;

    while (ss.get(c))
    {
        currentSet = findSmallestSet(c);

        if (prevSet == 0)
        {
            result += codificaBinario(currentSet-1, 2);
        }
        else
        {
            if (prevSet != currentSet)
                result += codificaBinario( findIndexOnSet(currentSet, prevSet), getNumBits(prevSet) );
        }

        result += codificaBinario( findIndexOnSet((int)c, currentSet), getNumBits(currentSet) );

        prevSet = currentSet;
    }

    cout << result;

    return 0;
}
