/*-*- Mode: C; c-basic-offset: 8 -*-*/

#ifndef foomounthfoo
#define foomounthfoo

typedef struct Mount Mount;

#include "unit.h"

typedef enum MountState {
        MOUNT_DEAD,
        MOUNT_MOUNTING,
        MOUNT_MOUNTED,
        MOUNT_UNMOUNTING,
        MOUNT_MAINTAINANCE,
        _MOUNT_STATE_MAX
} MountState;

struct Mount {
        Meta meta;

        MountState state;
        char *path;
};

extern const UnitVTable mount_vtable;

#endif
