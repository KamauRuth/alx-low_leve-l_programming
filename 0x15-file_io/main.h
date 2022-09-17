<<<<<<< HEAD
#ifndef _MAIN_
#define _MAIN_
=======
#ifndef MAIN_H
#define MAIN_H
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

<<<<<<< HEAD
=======
int _putchar(char c);
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

<<<<<<< HEAD
#endif
=======
#endif /* MAIN_H */

>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
