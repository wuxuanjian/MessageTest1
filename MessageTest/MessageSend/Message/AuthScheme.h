/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface AuthScheme : NSObject
{
}

+ (void)initialize;
+ (id)knownSchemes;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)schemeWithName:(id)arg1;
+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;
- (id)retain;
- (unsigned int)retainCount;
- (oneway void)release;
- (Class)connectionClassForAccountClass:(Class)arg1;
- (Class)authenticatorClass;
- (unsigned int)defaultPortForAccount:(id)arg1;
- (BOOL)hasEncryption;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;

@end

