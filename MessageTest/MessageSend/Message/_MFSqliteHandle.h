/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MFMailMessageLibrary;

@interface _MFSqliteHandle : NSObject
{
    MFMailMessageLibrary *library;
    struct sqlite3 *db;
}

+ (id)handleForDB:(struct sqlite3 *)arg1 library:(id)arg2;
- (void)closeConnection;

@end

