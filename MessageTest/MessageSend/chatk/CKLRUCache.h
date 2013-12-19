/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface CKLRUCache : NSObject
{
    unsigned int _capacity;
    NSMutableDictionary *_cacheDict;
    NSMutableArray *_orderArray;
}

- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
@property(readonly, nonatomic) unsigned int count;
@property(nonatomic) unsigned int capacity;
- (id)objectForKey:(id)arg1;
- (void)_removeLRUObject;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)allObjects;

@end

