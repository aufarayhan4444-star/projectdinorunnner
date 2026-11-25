#include <curses.h>                      
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
#include <windows.h>
#include <mmsystem.h>
#endif                                   

// Menambahkan suara   
void mainkanMusik(const char* file) {
#ifdef _WIN32
    PlaySoundA(file, NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
#endif
}

void stopMusik() {
#ifdef _WIN32
    PlaySoundA(NULL, 0, SND_PURGE);
#endif
}

void bunyi(int frek, int durasi) {
#ifdef _WIN32
    Beep(frek, durasi);
#else
    beep();
#endif
} 
