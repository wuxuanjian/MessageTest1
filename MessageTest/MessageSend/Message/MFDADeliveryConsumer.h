/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Message/MFDAMailAccountConsumer.h>

#import "DAMessageSendConsumer.h"

@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer>
{
    int status;
    MFError *_error;
}

- (void)messageSentWithContext:(void *)arg1;
- (void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)dealloc;
@property(retain, nonatomic) MFError *error; // @synthesize error=_error;

@end

