#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>

using namespace std;

/**
 * Uso l'osservazione del prefisso e suffisso, ovvero che quando trovo il periodo frazionario avrò che il prefisso sarà sempre uguale al suffisso
 * s1 è la sottostringa che va da 0 alla lunghezza della stringa - p, mentre s2 è il restante della stringa
 * 
 * -->Costo quadratico perchè c'è compare
 * 
 */

int getPeriod(string s)
{
    int n = s.length();
    for (int p=1; p<= n; p++)
    {
        string s1= s.substr(0, n-p);
        string s2= s.substr(p, n-p);
        if(s1.compare(s2) == 0)
        {
            return p;
        }
    }
    
}

int main()
{
    char s[1000];
    printf("Inserire stringa: ");
    scanf("%[^\n]s", s);
    printf("%d", getPeriod(s));

    return 0;
}