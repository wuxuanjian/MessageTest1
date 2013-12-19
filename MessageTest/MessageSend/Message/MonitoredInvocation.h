/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSInvocation.h"

@class ActivityMonitor;

@interface MonitoredInvocation : NSInvocation
{
    ActivityMonitor *_monitor;
    BOOL _shouldLogInvocation;
}

+ (id)invocationWithMethodSignature:(id)arg1;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(int)arg4 canBeCancelled:(BOOL)arg5;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(int)arg5 canBeCancelled:(BOOL)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(int)arg6 canBeCancelled:(BOOL)arg7;
- (void)dealloc;
- (BOOL)mf_shouldLogInvocation;
- (void)setShouldLogInvocation:(BOOL)arg1;
- (void)invoke;
- (id)description;
@property(readonly, nonatomic) ActivityMonitor *monitor; // @synthesize monitor=_monitor;

@end

