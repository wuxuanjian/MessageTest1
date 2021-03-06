/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ChatKit/CKWebBalloonView.h>

@class UIImageView;

@interface CKWebImageBalloonView : CKWebBalloonView
{
    struct CGSize _originalImageSize;
    UIImageView *_stillImage;
}

+ (struct CGPoint)entryFieldBalloonOffset;
+ (float)entryFieldBalloonAdditionalHeight;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)setText:(id)arg1;
- (float)heightForWidth:(float)arg1;
- (float)tightenedWidth;
- (void)tighten;
- (void)setImage:(id)arg1 mimeType:(id)arg2;
- (void)setImageWithFilename:(id)arg1;
- (void)setStillImage:(id)arg1;
- (id)_htmlForImageWithFilename:(id)arg1 size:(struct CGSize)arg2;
- (id)_htmlForImageWithData:(id)arg1 mimeType:(id)arg2 size:(struct CGSize)arg3;
- (struct CGSize)_scaledImageSize;
- (void)_wvSetHTML:(id)arg1;
@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=_originalImageSize;

@end

