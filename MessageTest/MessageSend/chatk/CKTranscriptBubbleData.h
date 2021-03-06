/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableArray;

@interface CKTranscriptBubbleData : NSObject
{
    NSMutableArray *_bubbleDataArray;
    float _balloonWidth;
    NSDate *_nextEligibleTimestamp;
}

+ (Class)balloonClassForMessagePart:(id)arg1;
+ (BOOL)messagePartRequiresURLification:(id)arg1;
+ (Class)balloonClassForFlags:(unsigned long)arg1;
+ (Class)balloonClassForMessage:(id)arg1;
+ (unsigned long)_processFlags:(unsigned long)arg1 forText:(id)arg2;
- (void)dealloc;
- (int)count;
- (id)bubbleDataForIndex:(int)arg1;
- (id)data:(id)arg1 forIndex:(int)arg2;
- (BOOL)bubbleData:(id)arg1 isEqualToIndex:(int)arg2;
- (id)deleteMessageAtIndex:(int)arg1;
- (void)_addRow:(int)arg1 toRows:(id)arg2;
- (id)appendBubbleDataForMessage:(id)arg1;
- (id)removeBubbleDataForMessage:(id)arg1;
- (void)clearBubbleData;
- (void)_createArrayIfNeeded;
- (int)_lastIndexExcludingTypingIndicator;
- (void)_createBubbleInfoForImage:(id)arg1 part:(id)arg2 subject:(id)arg3 appendedRows:(id)arg4;
- (int)_appendTextMessage:(id)arg1 part:(id)arg2 size:(struct CGSize)arg3 text:(id)arg4 subject:(id)arg5 bubbleClass:(Class)arg6 messageContinuation:(BOOL)arg7;
- (int)_appendPlaceholderSubject:(id)arg1 forMessage:(id)arg2 size:(struct CGSize)arg3;
- (void)_createSegmentArrayForText:(id)arg1 isSubject:(BOOL)arg2 height:(unsigned int *)arg3 message:(id)arg4 part:(id)arg5 messageContinuation:(BOOL)arg6 appendedRows:(id)arg7;
- (void)_createBubbleInfoForTextMessage:(id)arg1 part:(id)arg2 subject:(id)arg3 appendedRows:(id)arg4;
- (int)_appendDateForMessageIfNeeded:(id)arg1;
- (int)_appendServiceForMessageIfNeeded:(id)arg1;
- (int)_appendMessageStatusForMessageIfNeeded:(id)arg1;
- (int)_appendEntity:(id)arg1;
- (int)_appendDate:(id)arg1;
- (int)_appendService:(id)arg1;
- (int)insertMessageStatus:(int)arg1 forMessage:(id)arg2 date:(id)arg3;
- (id)removeMessageStatus:(int)arg1 forMessage:(id)arg2 andThisStatusForEverythingElse:(int)arg3;
- (int)typingIndicatorRow;
- (BOOL)isShowingTypingIndicator;
- (int)removeTypingIndicator;
- (int)appendTypingIndicatorForEntity:(id)arg1;
- (int)_appendEntityForMessageIfNeeded:(id)arg1;
- (void)_setupNextEligibleTimestamp:(id)arg1;
- (BOOL)_shouldShowTimestampForDate:(id)arg1;
@property(nonatomic) float balloonWidth; // @synthesize balloonWidth=_balloonWidth;

@end

