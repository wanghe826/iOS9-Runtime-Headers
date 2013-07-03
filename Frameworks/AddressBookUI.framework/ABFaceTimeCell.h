/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UILabel, <ABPropertyCellDelegate>, NSDictionary, ABPropertyAction, ABTransportButton;

@interface ABFaceTimeCell : ABContactCell  {
    UILabel *_faceTimeLabel;
    ABTransportButton *_transportIcon1;
    ABTransportButton *_transportIcon2;
    ABPropertyAction *_transportAction1;
    ABPropertyAction *_transportAction2;
    <ABPropertyCellDelegate> *_delegate;
    NSDictionary *_labelTextAttributes;
}

@property(retain) UILabel * faceTimeLabel;
@property(readonly) ABTransportButton * transportIcon1;
@property(readonly) ABTransportButton * transportIcon2;
@property(retain) ABPropertyAction * transportAction1;
@property(retain) ABPropertyAction * transportAction2;
@property <ABPropertyCellDelegate> * delegate;
@property(copy) NSDictionary * labelTextAttributes;

+ (BOOL)requiresConstraintBasedLayout;

- (void)setTransportAction2:(id)arg1;
- (id)transportAction2;
- (void)setTransportAction1:(id)arg1;
- (id)transportAction1;
- (void)setFaceTimeLabel:(id)arg1;
- (id)transportIcon2;
- (id)transportIcon1;
- (id)faceTimeLabel;
- (void)transportButtonClicked:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (id)labelTextAttributes;
- (void)performDefaultAction;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)updateConstraints;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end