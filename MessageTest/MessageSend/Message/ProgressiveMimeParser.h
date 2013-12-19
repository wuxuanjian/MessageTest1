/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MimePart, NSArray, NSData, NSMutableData;

@interface ProgressiveMimeParser : NSObject
{
    NSMutableData *_data;
    NSArray *_preserveHeaders;
    id _delegate;
    id _context;
    unsigned int _cursor;
    unsigned int _lastLength;
    MimePart *_topLevelPart;
    MimePart *_currentPart;
    NSData *_currentBoundary;
    struct {
        unsigned int delegateBeganMimePart:1;
        unsigned int delegateFinishedMimePart:1;
        unsigned int delegateBeganData:1;
        unsigned int delegateFailed:1;
        unsigned int state:3;
    } _parserFlags;
}

- (id)initWithBodyData:(id)arg1 topLevelHeaders:(id)arg2 headersToPreserve:(id)arg3;
- (void)dealloc;
- (void)start;
- (void)setDelegate:(id)arg1;
- (void)setContext:(id)arg1;
- (id)context;
- (void)noteDataLengthChanged:(unsigned int)arg1;
- (id)topLevelPart;
- (id)currentPart;
- (id)data;
- (void)_initializeTopLevelPartWithHeaders:(id)arg1;
- (void)_continueParsingStartOfPart;
- (void)_continueParsingHeaders;
- (id)_currentBoundary;
- (void)_continueParsingBody;
- (void)_continueParsing;
- (void)_reportError:(id)arg1;

@end
