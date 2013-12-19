/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView;

@interface CKInteractiveImageBalloonView : UIView
{
    UIImageView *_previewView;
    UIImageView *_imageView;
    float _previewAspectRatio;
    float _imageAspectRatio;
}

- (id)initWithPreviewView:(id)arg1 imageView:(id)arg2;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPreviewFrame:(struct CGRect)arg1;
- (void)setImageFrame:(struct CGRect)arg1;
- (void)fitImageToRect:(struct CGRect)arg1;
- (void)setPreviewAlpha:(float)arg1;
- (void)setImageAlpha:(float)arg1;

@end
