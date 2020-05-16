//
//  diff.h
//  diff
//
//  Created by Jessica Moreira on 5/14/20.
//  Copyright © 2020 Jessica Moreira. All rights reserved.
//

#ifndef DIFF_H
#define DIFF_H

#include <stdio.h>

char* yesorno(int condition);
FILE* openfile(const char* filename, const char* openflags);

void printleft(const char* left);
void printright(const char* right);
void printboth(const char* left_right);
void printline(void);
void printleftcol(const char* left);
void printnorm(const char* left);
void printchange(const char* left);

void version(void);
void loadfiles(const char* filename1, const char* filename2);
void print_option(const char* name, int value);
void diff_output_conflict_error(void);
void setoption(const char* arg, const char* s, const char* t, int* value);
void showoptions(const char* file1, const char* file2);
void init_options_files(int argc, const char* argv[]);


#endif 