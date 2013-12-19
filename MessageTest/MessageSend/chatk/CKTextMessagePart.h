/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKMessagePart.h>

@class NSString;

@interface CKTextMessagePart : CKMessagePart
{
    NSString *_text;
    NSString *_contentLocation;
}

- (id)detachedCopy;
- (BOOL)isDisplayable;
- (int)type;
- (id)initWithText:(id)arg1;
- (id)text;
- (void)dealloc;
- (id)description;
- (void)copyToPasteboard;
@property(copy, nonatomic) NSString *contentLocation; // @synthesize contentLocation=_contentLocation;

@end

