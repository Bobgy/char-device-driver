#ifndef __CHAR_DEVICE_H__
#define __CHAR_DEVICE_H__

#define MAJOR_DEVICE_NUM 30
#define MAX_MINOR_NUM   4

#define MEMDEV_NUM 4
#define MEMDEV_SIZE 32

#define LED 16

struct mem_dev {
    char *data;
    unsigned long size;
};

#endif
