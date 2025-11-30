#ifndef VIOLATION_H
#define VIOLATION_H

typedef struct {
    char plate[20];
    char type[60];
    float fine;
    int paid;
    int repeat_count;
} Record;

void loadData(Record *list, int *size);
void saveData(Record *list, int size);
void addRecord(Record *list, int *size);
void listRecords(Record *list, int size);
void payFine(Record *list, int size);
void summaryReport(Record *list, int size);

#endif
