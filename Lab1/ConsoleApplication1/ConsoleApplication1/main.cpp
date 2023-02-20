#include <iostream>

using namespace std;

//PROBLEMA 2
void fileSum(const char* file) {
    FILE* f;
    int rez = fopen_s(&f, file, "r");
    int sum = 0;
    int nr;
    if (rez != NULL) {
        printf("File not found");
    }
    char* line = new char[256];
    while (fgets(line, 256 , f) != NULL) {
        nr = 0;
        while (*line != '\n' && *line != NULL) {
            nr = nr * 10 + *line - '0';
            line++;
        }
        sum += nr;
    }
    printf("%d\n", sum);
}

//PROBLEMA 3
int compareWords(const char* word1, const char* word2) {
    if (strlen(word1) > strlen(word2)) {
        return 1;
    }
    else if (strlen(word1) < strlen(word2)) {
        return -1;
    }
    else {
        return strcmp(word1, word2);
    }
}
void wordsSort() {
    char* s = new char[100];
    printf("Introduceti o propozitie\n");
    fgets(s, 100, stdin);
    char* cuvinte [10];
    char* cuvant = new char[50];
    int i = 0, j = 0;
    while (*s) {
        if (*s != ' ') {
            cuvant[i++] = *s;   
        }
        else {
            if (i != 0) {
                cuvant[i++] = '\0';
                cuvinte[j++] = cuvant;
                cuvant = new char[50];
                i = 0;
            }
        }
        s++;
    }
    cuvant[--i] = '\0';
    cuvinte[j++] = cuvant;

    char* swap = new char[50];
    for (int x = 0; x < j-1; x++) {
        for (int y = x + 1; y < j; y++) {
            if (compareWords(cuvinte[x], cuvinte[y]) == -1) {
                swap = cuvinte[x];
                cuvinte[x] = cuvinte[y];
                cuvinte[y] = swap;
            }
        }
    }
    for (int x = 0; x < j; x++) {
        printf("%s\n", cuvinte[x]);
    }
}

//PROBLEMA 4

bool isPrime(int n)

{

    for (int tr = 2; tr < n / 2; tr++)

        if ((n % tr) == 0)

            return false;

    return true;

}



int main()
{
    fileSum("ini.txt");

    wordsSort();
    int n;

    cout << "Enter a number:";

    cin >> n;

    if (isPrime(n))

        cout << n << " is prime !";

    else

        cout << n << " is NOT prime !";

    return 0;
}