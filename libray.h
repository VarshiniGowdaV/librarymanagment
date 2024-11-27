#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_BOOKS 100
#define MAX_USERS 100
#define MAX_DEPARTMENTS 10

// Structures
typedef struct {
    char username[20];
    char password[20];
} admin;

typedef struct {
    char user_name[50];
    char address[100];
    char phone_number[15];
} user;

typedef struct {
    char book_name[50];
    char book_author[50];
    int id;
    int total_copies;
    int available_copies;
} book;

typedef struct {
    char user_name[50];
    char book_name[50];
    char borrowed_date[12];
} borrowed_book;

typedef struct {
    char user_name[50];
    char book_name[50];
    char returned_date[12];
} returned_book;

typedef struct {
    char dept_name[50];
    int id;
} department;



#endif
