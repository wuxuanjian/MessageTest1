/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct _CommandStackEntry {
    struct *_field1;
    id _field2;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _opaque_pthread_mutex_t {
    long __sig;
    char __opaque[40];
};

struct internal_state;

struct z_stream_s {
    char *_field1;
    unsigned int _field2;
    unsigned int _field3;
    char *_field4;
    unsigned int _field5;
    unsigned int _field6;
    char *_field7;
    struct internal_state *_field8;
    void *_field9;
    void *_field10;
    void *_field11;
    int _field12;
    unsigned int _field13;
    unsigned int _field14;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :2;
} CDStruct_3441fd00;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    char _field3;
    char _field4;
} CDStruct_87ebd36c;

