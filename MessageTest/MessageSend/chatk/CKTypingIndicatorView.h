/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView;

@interface CKTypingIndicatorView : UIView
{
    UIImageView *_typingIndicatorImageView;
    UIImageView *_contactImageView;
    BOOL _editing;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setContactImage:(id)arg1;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;

@end

