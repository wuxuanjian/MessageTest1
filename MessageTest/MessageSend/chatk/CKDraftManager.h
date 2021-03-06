/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDraftManager : NSObject
{
    NSMutableDictionary *_cachedDrafts;
    NSMutableSet *_dirtyDraftIDs;
    NSArray *_pendingRecipients;
}

+ (id)sharedInstance;
+ (void)_createPendingRecipientPath;
+ (id)_pendingRecipientFile;
+ (id)_draftSavePath;
+ (void)_createDraftSavePath;
- (id)init;
- (void)dealloc;
- (void)_clearDraftForConversation:(id)arg1;
- (id)draftForConversation:(id)arg1;
- (void)setDraft:(id)arg1 forConversation:(id)arg2;
- (id)draftForPendingConversationWithRecipients:(id *)arg1;
- (void)setDraftForPendingConversation:(id)arg1 withRecipients:(id)arg2;
- (void)clearDraftForPendingConversation;
- (void)save:(BOOL)arg1;
- (id)_draftForKey:(id)arg1;
- (void)_setDraft:(id)arg1 forKey:(id)arg2;
- (void)_setPendingRecipients:(id)arg1;
- (id)_pendingRecipients;

@end

