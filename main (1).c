#include <stdio.h>
#include <time.h>
#include <unistd.h> 


#define FUSO_BRASILIA_SEGUNDOS (-3 * 60 * 60)

int main() {
    printf(" Horário de Brasília  \n");

    while (1) {
        time_t tempo_atual;
        struct tm *info_tempo;

        time(&tempo_atual);
        
        tempo_atual += FUSO_BRASILIA_SEGUNDOS;
        
        info_tempo = gmtime(&tempo_atual); 

        printf("Hora atual: %02d:%02d:%02d\r", 
               info_tempo->tm_hour, 
               info_tempo->tm_min, 
               info_tempo->tm_sec);
               
        fflush(stdout);
        
        sleep(1); 
    }
    
    return 0;
}