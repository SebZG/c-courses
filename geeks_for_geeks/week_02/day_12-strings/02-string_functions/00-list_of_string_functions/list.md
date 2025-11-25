| Function  | Description                                                |          Syntax          |
| :-------: | :--------------------------------------------------------- | :----------------------: |
| strlen()  | Find the length of a string excluding '\0' NULL character. |       strlen(str);       |
| strcpy()  | Copies a string from the source to the destination.        |    strcpy(dest, src);    |
| strncpy() | Copies n characters from source to the destination.        | strncpy( dest, src, n ); |
| strcat()  | Concatenate one string to the end of another.              |    strcat(dest, src);    |
| strncat() | Concatenate n characters                                   |  strncat(dest, src, n);  |
| strcmp()  | Compares these two strings lexicographically.              |     strcmp(s1, s2);      |
| strncmp() | Compares first n characters                                |   strncmp(s1, s2, n);    |
| strchr()  | Find the first occurrence of a character                   |      strchr(s, c);       |
| strrchr() | Find the last occurrence of a character                    |      strchr(s, ch);      |
| strstr()  | First occurrence of a substring                            |     strstr(s, subS);     |
| sprintf() | Format a string and store it in a string buffer.           | sprintf(s, format, ...); |
|  strok()  | Split a string into tokens based on specified delimiters.  |    strtok(s, delim);     |
