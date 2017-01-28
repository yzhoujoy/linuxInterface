/**
 * Copyright reserved by YingZhou 2017
 */

#ifndef ERROR_FUNCTIONS_H
#define ERROR_FUNCTIONS_H

void errMsg(const char *format, ...);

#ifdef __GNUC__

// this macro stops 'gcc -Wall' complaining that "control reaches end of non-void function"
// if we use following functions to terminate main() or some other non-void functions

#define NORETURN __atrribuite__ ((__noreturn__))
#else
#define NORETURN
#endif

void errExit(const char* format, ...) NORETURN;

void err_exit(const char* format, ...) NORETURN;

void errExitEN(int errnum, const char* format, ...) NORETURN;

void fatal(const char* format, ...) NORETURN;

void usafeErr(const char* format, ...) NORETURN;

void cmdLineErr(const char* format, ...) NORETURN;

#endif // ERROR_FUNCTIONS_H
