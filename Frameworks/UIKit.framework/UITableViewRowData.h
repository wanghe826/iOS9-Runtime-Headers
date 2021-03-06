/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewRowData : NSObject <NSCopying> {
    BOOL  _estimatesRowHeights;
    NSIndexPath * _gapIndexPath;
    float  _heightForTableHeaderViewHiding;
    float  _minimumRowHeight;
    int  _numSections;
    NSIndexPath * _reorderedIndexPath;
    float  _reorderedRowHeight;
    id * _sectionRowData;
    int  _sectionRowDataCapacity;
    float  _tableBottomPadding;
    float  _tableFooterHeight;
    BOOL  _tableFooterHeightValid;
    float  _tableHeaderHeight;
    BOOL  _tableHeaderHeightValid;
    float  _tableSidePadding;
    BOOL  _tableSidePaddingValid;
    float  _tableTopPadding;
    UITableView * _tableView;
    float  _tableViewWidth;
}

@property (nonatomic) BOOL estimatesRowHeights;
@property (nonatomic, readonly) float heightForAutohidingTableHeaderView;
@property (nonatomic, readonly) float heightForTableHeaderViewHiding;
@property (nonatomic) float minimumRowHeight;
@property (nonatomic, readonly) NSIndexPath *reorderGapIndexPath;
@property (nonatomic, readonly) float reorderedRowHeight;
@property (nonatomic) float tableBottomPadding;
@property (nonatomic) float tableSidePadding;
@property (nonatomic) float tableTopPadding;

- (void).cxx_destruct;
- (void)_assertValidIndexPath:(id)arg1 allowEmptySection:(BOOL)arg2;
- (void)_ensureSectionOffsetIsValidForSection:(int)arg1;
- (id)_nextIndexPathOrSectionHeader:(id)arg1;
- (id)_previousIndexPathOrSectionHeader:(id)arg1;
- (int)_sectionForPoint:(struct CGPoint { float x1; float x2; })arg1 beginningWithSection:(int)arg2 numberOfSections:(int)arg3;
- (int)_sectionRowForGlobalRow:(int)arg1 inSection:(int*)arg2;
- (void)_updateNumSections;
- (void)_updateSectionRowDataArrayForNumSections:(int)arg1;
- (void)_updateTopAndBottomPadding;
- (void)addReorderGapFromIndexPath:(id)arg1;
- (void)adjustSectionOffsetsBeginningAtIndex:(int)arg1 count:(int)arg2 delta:(float)arg3 rowDelta:(int)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)ensureAllSectionsAreValid;
- (BOOL)ensureHeightsFaultedInForIndexPath:(id)arg1 availHeight:(float)arg2 edgeInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 scrollPosition:(int)arg4;
- (BOOL)estimatesRowHeights;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })floatingRectForFooterInSection:(int)arg1 visibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })floatingRectForHeaderInSection:(int)arg1 visibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)footerAlignmentForSection:(int)arg1;
- (int)globalRowForRowAtIndexPath:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })globalRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 canGuess:(BOOL)arg2;
- (BOOL)hasFooterForSection:(int)arg1;
- (BOOL)hasHeaderForSection:(int)arg1;
- (int)headerAlignmentForSection:(int)arg1;
- (float)heightForAutohidingTableHeaderView;
- (float)heightForFooterInSection:(int)arg1 canGuess:(BOOL)arg2;
- (float)heightForHeaderInSection:(int)arg1 canGuess:(BOOL)arg2;
- (float)heightForRow:(int)arg1 inSection:(int)arg2 canGuess:(BOOL)arg3;
- (float)heightForRow:(int)arg1 inSection:(int)arg2 canGuess:(BOOL)arg3 adjustForReorderedRow:(BOOL)arg4;
- (float)heightForSection:(int)arg1;
- (float)heightForTable;
- (float)heightForTableFooterView;
- (float)heightForTableHeaderView;
- (float)heightForTableHeaderViewHiding;
- (id)indexPathForRowAtGlobalRow:(int)arg1;
- (id)indexPathsForRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)indexPathsForRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 extraHitSpaceBetweenRows:(float)arg2;
- (id)initWithTableView:(id)arg1;
- (void)invalidateAllSectionOffsetsAndUpdatePadding;
- (void)invalidateAllSections;
- (void)invalidateSection:(int)arg1;
- (float)maxFooterTitleWidthForSection:(int)arg1;
- (float)maxHeaderTitleWidthForSection:(int)arg1;
- (float)minimumRowHeight;
- (void)moveRowAtIndexPathFrom:(id)arg1 toIndexPath:(id)arg2;
- (int)numberOfRows;
- (int)numberOfRowsBeforeSection:(int)arg1;
- (int)numberOfRowsInSection:(int)arg1;
- (int)numberOfSections;
- (float)offsetForSection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForFooterInSection:(int)arg1 heightCanBeGuessed:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForGlobalRow:(int)arg1 heightCanBeGuessed:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForHeaderInSection:(int)arg1 heightCanBeGuessed:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForRow:(int)arg1 inSection:(int)arg2 heightCanBeGuessed:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForTable;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForTableFooterView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForTableHeaderView;
- (void)removeReorderGapFromIndexPath:(id)arg1;
- (id)reorderGapIndexPath;
- (id)reorderedIndexPath;
- (float)reorderedRowHeight;
- (int)sectionForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)sectionForSectionRowData:(id)arg1;
- (int)sectionLocationForReorderedRow:(int)arg1 inSection:(int)arg2;
- (int)sectionLocationForRow:(int)arg1 inSection:(int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })sectionsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEstimatesRowHeights:(BOOL)arg1;
- (void)setHeight:(float)arg1 forRowAtIndexPath:(id)arg2;
- (void)setHeightForTableHeaderViewHiding:(float)arg1;
- (void)setMinimumRowHeight:(float)arg1;
- (void)setReorderedIndexPath:(id)arg1;
- (void)setTableBottomPadding:(float)arg1;
- (void)setTableSidePadding:(float)arg1;
- (void)setTableTopPadding:(float)arg1;
- (BOOL)shouldStripHeaderTopPaddingForSection:(int)arg1;
- (float)tableBottomPadding;
- (void)tableFooterHeightDidChangeToHeight:(float)arg1;
- (void)tableHeaderHeightDidChangeToHeight:(float)arg1;
- (float)tableSidePadding;
- (float)tableTopPadding;
- (void)tableViewWidthDidChangeToWidth:(float)arg1;
- (id)targetIndexPathForPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
