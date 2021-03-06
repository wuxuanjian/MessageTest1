/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Message/MailMessage.h>

@class DAMailMessage, MailboxUid, Message, NSString;

@interface MFDAMessage : MailMessage
{
    DAMailMessage *_DAMailMessage;
    Message *_rfc822CreatedMessage;
    MailboxUid *_mailbox;
    NSString *_externalConversationID;
}

- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;
- (void)dealloc;
- (id)remoteID;
- (id)externalConversationID;
- (id)mailbox;
- (id)headers;
- (unsigned long long)messageFlags;
- (id)messageBody;
- (BOOL)messageData:(id *)arg1 messageSize:(unsigned int *)arg2 isComplete:(char *)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)remoteMailboxURL;
- (unsigned int)messageSize;
@property(readonly, nonatomic) DAMailMessage *DAMailMessage; // @synthesize DAMailMessage=_DAMailMessage;

@end

