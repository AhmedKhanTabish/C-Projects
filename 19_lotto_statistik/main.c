#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

#define MAX_LINE_LENGTH 255

/**
 * @brief �ffnet die gew�nschte Datei
 * @param filename: Dateiname
 * @return File Deskriptor der ge�ffneten Datei
 *         NULL falls die Datei nicht ge�ffnet werden
 *         konnte
 */

// Definition
FILE* oeffne_datenbank(const char* filename)
{
    FILE* fd = fopen(filename, "r");

    return fd;
}

/**
 * @brief Liest die n�chste Zeile von fd und schreibt
 *        die Zahlen �bergebenen Array
 * @param fd: File descriptor der zu lesenden Datei
 * @param zahlen: zu f�llender Array
 * @return 1, falls erfolgreich gelesen wurde
           0, falls am Ende der Datei
 */
int lese_naechstes_datum(FILE* fd, int zahlen[6])
{
    char line[MAX_LINE_LENGTH];

    char* pline = fgets(line, MAX_LINE_LENGTH, fd);
    if (pline == NULL)
    {
        // Ende der Datei erreicht
        return 0;
    }

    char* pFieldDate = strtok (line, ";");
    (void) pFieldDate;
    char* pFieldNumbers = strtok(NULL, ";");
    if (pFieldNumbers == NULL) {
        return 0;
    }

    for (int i = 0; i < 6; i++)
    {
        char* pNumber = strtok(pFieldNumbers, "/");
        sscanf(pNumber, "%d", &zahlen[i]);
        pFieldNumbers = NULL;
    }

    return 1;
}

int main()
{
    const char filename[] = "../data/datenbank.csv";
    int lottozahlen[6];
    FILE* fd = oeffne_datenbank(filename);

    if (fd == NULL)
    {
        fprintf(stderr, "Fehler: Datei '%s' konnte nicht geoeffnet werden!", filename);
        exit(1);
    }

    lese_naechstes_datum(fd, lottozahlen);

    return 0;
}
