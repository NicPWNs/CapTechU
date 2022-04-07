#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define FILE_NAME "countryDB.csv"

void DieWithError(char *errorMessage);

char *countryHelper(int idReq) 
{
    char id[6];
    //char code[4];
    //char name[30];
    //char continent[4];
    char buffer[100];
    int records = 0;
    int found_flag = 0;
    static char fullRecord[1000];
    char idReqChar[100];

    idReqChar[0] = '\0';
    sprintf(idReqChar, "%d", idReq);

    FILE *in_fp;
    in_fp = fopen(FILE_NAME, "r");
    if (in_fp == NULL) {
        DieWithError("FOPEN() failed");
    }

    // -------------------------------------------------------------------------------------
    // Only need this section to see that the file can be read, parsed and elements printed
    // -------------------------------------------------------------------------------------
    //while ((fgets(buffer,80,in_fp) != NULL)) {
    //  printf("print buffer %s\n", buffer); 
    //  strncpy(id,strtok(buffer,","), 6);
    //  printf("id  = %s \n",id);
    //  strncpy(code,strtok(NULL,","), 4);
    //  printf("code  = %s \n",code);
    //  strncpy(name,strtok(NULL,","), 30);
    //  printf("name  = %s \n", name);
    //  strncpy(continent,strtok(NULL,","), 4);
    //  printf("continent  = %s \n", continent);
    // Note buffer is slightly changed with strtok
    //  sscanf(buffer,"%s %[^,] %[^,] %[^,] \n", id, code, name, continent);
    //  printf("%s %s %s %s\n", id, code, name, continent);
    //}

    //if (fseek(in_fp, 0L, SEEK_SET) != 0) {
    //   DieWithError("FSEEK() failed");
    //}

    // -------------------------------------------------------------------------------------
    // Linear search from the beginning of the file and then break 
    // Not that effecient, but a way to search and find a record in small files
    // Gets out of the while as soon as the record is found...may need to parse the rest of the
    // buffer data depending on how it is to be returned
    // -------------------------------------------------------------------------------------

    while ((fgets(buffer, 80, in_fp) != NULL)) {
        records++;
        //      printf("print buffer %s\n", buffer);
        strncpy(id, strtok(buffer, ","), 6);
        //      printf(" [%s] [%s]\n", id, id_to_check);

        if (strcmp(id, idReqChar) == 0) {
            printf("\n\n We found the record with id = [%s]\n", id);
            found_flag = 1;
            break;
        }
    }

    if (found_flag) {
        printf(" We searched through %d records to find the record desired \n\n", records);
    }
    else {
        printf(" We searched through %d records and didnt find the record desired \n\n", records);
    }
    fclose(in_fp);
    
    return fullRecord;
}
