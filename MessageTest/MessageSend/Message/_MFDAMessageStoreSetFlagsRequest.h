/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DAMailboxSetFlagsRequest.h"

#import "MFDAMailAccountRequest.h"

@interface _MFDAMessageStoreSetFlagsRequest : DAMailboxSetFlagsRequest <MFDAMailAccountRequest>
{
}

- (unsigned long long)generationNumber;
- (BOOL)shouldSend;
- (id)deferredOperation;

@end

