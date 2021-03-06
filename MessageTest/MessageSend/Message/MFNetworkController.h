/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableSet, NSThread;

@interface MFNetworkController : NSObject
{
    NSLock *_lock;
    struct __CFRunLoop *_rl;
    NSThread *_thread;
    NSMutableArray *_observers;
    struct __SCNetworkReachability *_reachability;
    unsigned int _flags;
    struct __SCDynamicStore *_store;
    struct __CFRunLoopSource *_store_source;
    BOOL _dns;
    struct __CTServerConnection *_telephony;
    struct __CFMachPort *_port;
    struct __CFRunLoopSource *_port_source;
    NSMutableSet *_calls;
    int _interface;
    BOOL _data;
}

+ (id)sharedInstance;
+ (id)networkAssertionWithIdentifier:(id)arg1;
- (id)init;
- (void)_setUpTelephony_nts;
- (void)_tearDownTelephony_nts;
- (void)dealloc;
- (void)invalidate;
- (BOOL)_isNetworkUp_nts;
- (BOOL)isNetworkUp;
- (BOOL)isFatPipe;
- (BOOL)isOnWWAN;
- (BOOL)inAirplaneMode;
- (BOOL)inCallWithNoData;
- (void)_setFlags:(unsigned int)arg1 forReachability:(struct __SCNetworkReachability *)arg2;
- (void)_checkKeys:(id)arg1 forStore:(struct __SCDynamicStore *)arg2;
- (void)_setDataStatus_nts:(id)arg1;
- (void)_handleNotification:(id)arg1 info:(id)arg2 forConnection:(struct __CTServerConnection *)arg3;
- (void)_handleDeath_nts;
- (void)_handleDeath:(struct __CFMachPort *)arg1;
- (id)_networkAssertionWithIdentifier:(id)arg1;
- (id)addNetworkObserverBlock:(id)arg1 queue:(void)arg2;
- (void)removeNetworkObserver:(id)arg1;

@end

