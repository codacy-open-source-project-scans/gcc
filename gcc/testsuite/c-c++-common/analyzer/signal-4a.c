/* Verify how paths are printed for signal-handler diagnostics.  */

/* { dg-options "-fanalyzer -fdiagnostics-show-line-numbers -fdiagnostics-path-format=inline-events -fdiagnostics-show-caret" } */
/* { dg-enable-nn-line-numbers "" } */
/* { dg-require-effective-target signal } */

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

extern void body_of_program(void);

void custom_logger(const char *msg)
{
  fprintf(stderr, "LOG: %s", msg); /* { dg-warning "call to 'fprintf' from within signal handler" "" { target c } } */
  /* { dg-warning "call to 'int fprintf\\(FILE\\*, const char\\*, ...\\)' from within signal handler" "" { target c++ } .-1 } */
}

static void int_handler(int signum)
{
  custom_logger("got signal");
}

void test (void)
{
  void *ptr = malloc (1024);
  signal(SIGINT, int_handler);
  body_of_program();
  free (ptr);
}

/* "call to 'fprintf' from within signal handler [CWE-479]".  */
/* { dg-begin-multiline-output "" }
   NN |   fprintf(stderr, "LOG: %s", msg);
      |   ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  'test': events 1-2
    |
    |   NN | void test (void)
    |      |      ^~~~
    |      |      |
    |      |      (1) entry to 'test'
    |......
    |   NN |   signal(SIGINT, int_handler);
    |      |   ~~~~~~~~~~~~~~~~~~~~~~~~~~~
    |      |   |
    |      |   (2) registering 'int_handler' as signal handler
    |
  event 3
    |
    |cc1:
    | (3): later on, when the signal is delivered to the process
    |
    +--> 'int_handler': events 4-5
           |
           |   NN | static void int_handler(int signum)
           |      |             ^~~~~~~~~~~
           |      |             |
           |      |             (4) entry to 'int_handler'
           |   NN | {
           |   NN |   custom_logger("got signal");
           |      |   ~~~~~~~~~~~~~~~~~~~~~~~~~~~
           |      |   |
           |      |   (5) calling 'custom_logger' from 'int_handler'
           |
           +--> 'custom_logger': events 6-7
                  |
                  |   NN | void custom_logger(const char *msg)
                  |      |      ^~~~~~~~~~~~~
                  |      |      |
                  |      |      (6) entry to 'custom_logger'
                  |   NN | {
                  |   NN |   fprintf(stderr, "LOG: %s", msg);
                  |      |   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                  |      |   |
                  |      |   (7) call to 'fprintf' from within signal handler
                  |
  { dg-end-multiline-output "" { target c } } */
/* { dg-begin-multiline-output "" }
   NN |   fprintf(stderr, "LOG: %s", msg);
      |   ~~~~~~~^~~~~~~~~~~~~~~~~~~~~~~~
  'void test()': events 1-2
    |
    |   NN | void test (void)
    |      |      ^~~~
    |      |      |
    |      |      (1) entry to 'test'
    |......
    |   NN |   signal(SIGINT, int_handler);
    |      |   ~~~~~~~~~~~~~~~~~~~~~~~~~~~
    |      |         |
    |      |         (2) registering 'void int_handler(int)' as signal handler
    |
  event 3
    |
    |cc1plus:
    | (3): later on, when the signal is delivered to the process
    |
    +--> 'void int_handler(int)': events 4-5
           |
           |   NN | static void int_handler(int signum)
           |      |             ^~~~~~~~~~~
           |      |             |
           |      |             (4) entry to 'int_handler'
           |   NN | {
           |   NN |   custom_logger("got signal");
           |      |   ~~~~~~~~~~~~~~~~~~~~~~~~~~~
           |      |                |
           |      |                (5) calling 'custom_logger' from 'int_handler'
           |
           +--> 'void custom_logger(const char*)': events 6-7
                  |
                  |   NN | void custom_logger(const char *msg)
                  |      |      ^~~~~~~~~~~~~
                  |      |      |
                  |      |      (6) entry to 'custom_logger'
                  |   NN | {
                  |   NN |   fprintf(stderr, "LOG: %s", msg);
                  |      |   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                  |      |          |
                  |      |          (7) call to 'int fprintf(FILE*, const char*, ...)' from within signal handler
                  |
  { dg-end-multiline-output "" { target c++ } } */
