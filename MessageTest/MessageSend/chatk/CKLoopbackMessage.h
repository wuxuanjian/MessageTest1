/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKMessage.h>

@interface CKLoopbackMessage : CKMessage
{
    BOOL _isOutgoing;
    BOOL _isLoopBackRead;
    BOOL _isPlaceholder;
}

- (void)dealloc;
- (id)initWithConversation:(id)arg1 text:(id)arg2 date:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)markAsRead;
- (BOOL)isRead;
- (int)sentCount;
- (void)markAsSent;
- (void)setOutgoing:(BOOL)arg1;
- (id)initPlaceholderConversation:(id)arg1 date:(id)arg2;
- (id)initWithConversation:(id)arg1 text:(id)arg2;
- (BOOL)isOutgoing;

@end

