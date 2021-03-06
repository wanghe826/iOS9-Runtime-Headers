/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell {
    UIButton * _reportSpamButton;
}

@property (nonatomic, copy) NSAttributedString *attributedButtonText;
@property (nonatomic, retain) UIButton *reportSpamButton;

+ (id)reportSpamButton;

- (id)attributedButtonText;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (id)reportSpamButton;
- (void)setAttributedButtonText:(id)arg1;
- (void)setReportSpamButton:(id)arg1;

@end
