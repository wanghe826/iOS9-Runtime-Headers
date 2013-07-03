/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIColorScheme, SKUIClientContext, UIControl, UILabel, UIButton, UIView, UIPopoverController, NSArray;

@interface SKUIIPadCustomerReviewsHeaderView : UIControl <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    UIButton *_appSupportButton;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    UIPopoverController *_sortPopoverController;
    int _selectedSortIndex;
    UIView *_separatorView;
    UIButton *_sortButton;
    UILabel *_sortLabel;
    NSArray *_sortTitles;
    UILabel *_titleLabel;
    UIButton *_writeAReviewButton;
}

@property(retain) SKUIColorScheme * colorScheme;
@property(readonly) UIControl * appSupportButton;
@property(readonly) UIControl * writeAReviewButton;
@property int selectedSortIndex;
@property(copy) NSArray * sortTitles;


- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (id)sortTitles;
- (void)_sortButtonAction:(id)arg1;
- (void)_destroySortPopoverController;
- (void)_reloadSortButton;
- (void)setSortTitles:(id)arg1;
- (id)writeAReviewButton;
- (id)appSupportButton;
- (id)initWithClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setSelectedSortIndex:(int)arg1;
- (int)selectedSortIndex;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end