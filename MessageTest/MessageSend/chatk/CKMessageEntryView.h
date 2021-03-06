/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIImageView.h"

#import "UIScrollViewDelegate.h"

@class CKContentEntryView, UIButton, UILabel, UIPanGestureRecognizer, UIView;

@interface CKMessageEntryView : UIImageView <UIScrollViewDelegate>
{
    id _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    id _panGestureRecognizerBlock;
    UIView *_inputFieldBackground;
    CKContentEntryView *_contentField;
    UIImageView *_inputFieldCover;
    UIImageView *_roundedBottomLeftCorner;
    UIView *_dimmingView;
    UIButton *_photoButton;
    UIButton *_sendButton;
    UILabel *_characterCountLabel;
    unsigned int _characterCountNumerator;
    unsigned int _characterCountDenominator;
    BOOL _isCharacterCountVisible;
    BOOL _keyboardVisible;
    BOOL _wasFirstResponderBeforeBubblizing;
    BOOL _dimmed;
    int _animationState;
    int _sendButtonColor;
}

+ (void)initialize;
+ (struct CGRect)sendButtonFrame:(struct CGRect)arg1;
+ (struct CGRect)photoButtonFrame:(struct CGRect)arg1;
+ (struct CGRect)entryAreaViewFrame:(struct CGRect)arg1;
+ (struct CGRect)balloonViewFrame:(struct CGRect)arg1;
+ (struct CGRect)contentFieldViewFrame:(struct CGRect)arg1;
+ (struct CGRect)characterCountFrame:(struct CGRect)arg1;
+ (float)defaultHeight;
+ (float)defaultWidthInPortrait;
@property(nonatomic) int sendButtonColor;
- (void)_updateSendButtonColor;
- (void)setDefaultText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)handlePan:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)send:(id)arg1;
- (id)entryField;
- (BOOL)isReallyFirstResponder;
- (void)layoutSubviews;
- (void)updateForSettingsChange;
@property(nonatomic) int animationState; // @synthesize animationState=_animationState;
- (struct CGRect)contentEntryFrame:(BOOL)arg1;
- (void)enableSendButton;
- (void)disableSendButton;
- (void)updateSendButtonTitle:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)desiredSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)hasAttachments;
- (unsigned int)displayedLines;
- (void)_handleUIApplicationResumed:(id)arg1;
- (void)scrollToBottom:(BOOL)arg1;
@property(nonatomic, getter=isKeyboardVisible) BOOL keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic, getter=isDimmed) BOOL dimmed; // @synthesize dimmed=_dimmed;
- (void)_updateCharacterCountLabel;
- (void)setCharacterCountNumerator:(unsigned int)arg1 denominator:(unsigned int)arg2;
- (void)setCharacterCountVisible:(BOOL)arg1;
- (BOOL)isCharacterCountVisible;
- (BOOL)ckContentEntryViewContentSizeChanged:(id)arg1 height:(float)arg2 animate:(BOOL)arg3;
- (void)ckContentEntryViewPressedSendButton:(id)arg1;
@property(copy, nonatomic) id panGestureRecognizerBlock; // @synthesize panGestureRecognizerBlock=_panGestureRecognizerBlock;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIButton *photoButton; // @synthesize photoButton=_photoButton;

@end

