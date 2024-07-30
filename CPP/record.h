/********************
 * FILE: record.h
 * DESC: Header file for record, given by Ravi Naryan, edited by me
 ********************/
#include <string>
#ifndef RECORD_H
#define RECORD_H
struct record {
    std::string name;
    std::string address;
    int birth_year;
    std::string phone_number;
    struct record* next;
};
#endif
