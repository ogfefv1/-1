//
//  main.cpp
//  дз 1
//
//  Created by Егор Джемлиханов on 06.09.2024.
//

#include <iostream>
using namespace std;

class Drobi
{
private:
    double chislitel, znamenatel;

public:
    Drobi()
    {
        chislitel = 1;
        znamenatel = 1;
    }

    Drobi(int c, int k)
    {
        if (k == 0)
        {
            cout << "знаменатель не равен 0" << endl;
            chislitel = 0;
            znamenatel = 1;
        }
        else
        {
            chislitel = c;
            znamenatel = k;
        }
    }

    void init(int y, int z)
    {
        if (z == 0)
        {
            cout << "знаменатель не равен 0" << endl;
            chislitel = 0;
            znamenatel = 1;
        }
        else
        {
            chislitel = y;
            znamenatel = z;
        }
    }

    void printDrob()
    {
        cout << chislitel << " / " << znamenatel << endl;
    }

    Drobi Plus(Drobi& k)
    {
        Drobi rez(chislitel + k.chislitel, znamenatel + k.znamenatel);
        return rez;
    }

    Drobi Minus(Drobi& k)
    {
        Drobi rez(chislitel - k.chislitel, znamenatel - k.znamenatel);
        return rez;
    }

    Drobi Umnogenie(Drobi& k)
    {
        Drobi rez(chislitel * k.chislitel, znamenatel * k.znamenatel);
        return rez;
    }

    Drobi Delenie(Drobi& k)
    {
        Drobi rez(chislitel / k.chislitel, znamenatel / k.znamenatel);
        return rez;
    }

    void setChislitel(int c)
    {
        chislitel = c;
    }

    void setZnamenatel(int k)
    {
        if (k == 0)
        {
            cout << "знаменатель не равен 0" << endl;
            znamenatel = 1;
        }
        else
        {
            znamenatel = k;
        }
    }

    int getChislitel()
    {
        return chislitel;
    }

    int getZnamenatel()
    {
        return znamenatel;
    }
};

int main()
{
    Drobi frac1(6, 8);
    Drobi frac2(5, 3);
    Drobi result = frac1.Plus(frac2);
    result.printDrob();
    return 0;
}
