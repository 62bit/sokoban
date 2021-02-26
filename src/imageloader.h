#ifndef IMAGE_LOADER_H
#define IMAGE_LOADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
    I_PNG,
    I_JPG
} IMAGE_TYPE;

static void load_png(const char *filepath)
{
    // Read file into buffer
    char *buffer;
    int size = 0;
    FILE *file = fopen(filepath, "rb");

    if (file)
    {
        fseek(file, 0, SEEK_END);
        size = ftell(file);
        rewind(file);
        buffer = (char *)malloc((sizeof(char) * size));
        fread(buffer, sizeof(char), size, file);
    }
    else
    {
        printf("Image file is not found: %s\n", filepath);
        exit(1);
    }

    // Parse Data

    unsigned int lenght;

    printf("%c", buffer[0]);
    printf("%c", buffer[1]);
    printf("%c", buffer[2]);
    printf("%c\n", buffer[3]);

    printf("%x %x %x %x Lenght of image data: %i\n", (&lenght)[0], (&lenght)[1], (&lenght)[2], (&lenght)[3], lenght);
}

#endif
