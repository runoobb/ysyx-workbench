#include <trace.h>
#include <common.h>

#define IRINGBUF_SIZE 16

static char **iringbuf;

static int head;

static int size_avail;

void init_iringbuf()
{
    size_avail = IRINGBUF_SIZE;
    head = 0;
    iringbuf = (char **)malloc((IRINGBUF_SIZE) * (sizeof(char *)));
    for(int i = 0; i < IRINGBUF_SIZE; i++)
    {
        iringbuf[i] = (char *)malloc(128 * sizeof(char));
    }
    return;
}

void iringbuf_display()
{
    if(size_avail == 0)
    {
        for(int i = head; i < IRINGBUF_SIZE; i++)
        {
            printf("%s\n", iringbuf[i]);
        }

        for(int i = 0; i < head; i++)
        {
            if(i == head - 1)
                printf("%s%s\n", iringbuf[i], "(Woops, Bug Here)");
            else
                printf("%s\n", iringbuf[i]);
        }
    }

    else{
        for(int i = 0; i < IRINGBUF_SIZE - size_avail; i++)
        {
            if(i == IRINGBUF_SIZE - size_avail - 1)
                printf("%s%s\n", iringbuf[i], "(Woops, Bug Here)");
            else
                printf("%s\n", iringbuf[i]);
        }
    }
}

//head points to the farthest instruction in the iringbuf
void iringbuf_update(char *inst)
{
    if(size_avail > 0){
        strcpy(iringbuf[(IRINGBUF_SIZE) - size_avail], inst);
        size_avail -= 1;
    }
    else{
        strcpy(iringbuf[head], inst);
        head = (head + 1) % (IRINGBUF_SIZE);
    }
}

void iringbuf_free()
{
    for(int i = 0; i < IRINGBUF_SIZE; i++)
        free(iringbuf[i]);
    free(iringbuf);
    return;
}