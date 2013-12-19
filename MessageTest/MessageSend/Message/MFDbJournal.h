/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableData, NSString;

@interface MFDbJournal : NSObject
{
    NSString *_path;
    struct _opaque_pthread_mutex_t _lock;
    int _fd;
    NSMutableData *_buffer;
}

+ (id)sharedInstance;
- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (void)_resetBuffer;
- (BOOL)append:(const char *)arg1;
- (BOOL)flush;
- (void)clear;
- (BOOL)_processJournalFile:(id)arg1 db:(struct sqlite3 *)arg2;
- (BOOL)mergeWithDatabase:(struct sqlite3 *)arg1;
- (void)moveOrDeleteFile;

@end
