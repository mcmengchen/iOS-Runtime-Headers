/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCaptionBarView : LPComponentView <CAAnimationDelegate> {
    LPComponentView<LPTextStyleable> * _aboveTopCaptionView;
    LPComponentView<LPTextStyleable> * _belowBottomCaptionView;
    LPComponentView<LPTextStyleable> * _bottomCaptionView;
    BOOL  _hasEverBuilt;
    LPiTunesPlaybackInformation * _iTunesPlaybackInformation;
    LPCaptionBarAccessoryView * _leftAccessoryView;
    UIView * _leftIconView;
    LPiTunesPlayButtonView * _playButton;
    LPCaptionBarPresentationProperties * _presentationProperties;
    LPCaptionBarAccessoryView * _rightAccessoryView;
    UIView * _rightIconView;
    LPCaptionBarStyle * _style;
    LPVerticalTextStackView * _textStackView;
    LPComponentView<LPTextStyleable> * _topCaptionView;
    BOOL  _useProgressSpinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useProgressSpinner;

- (void).cxx_destruct;
- (void)_buildViewsForCaptionBarIfNeeded;
- (id)_createIndeterminateProgressIndicator;
- (struct CGSize { float x1; float x2; })_layoutCaptionBarForSize:(struct CGSize { float x1; float x2; })arg1 applyingLayout:(BOOL)arg2;
- (void)animateInWithBaseAnimation:(id)arg1 currentTime:(double)arg2;
- (void)animateOut;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)init;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2;
- (void)layoutComponentView;
- (void)setPlaybackInformation:(id)arg1;
- (void)setUseProgressSpinner:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)useProgressSpinner;

@end