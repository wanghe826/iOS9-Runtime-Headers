/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewFocusUpdateContext : UIFocusUpdateContext {
    BOOL  _didSetNextFocusedIndexPath;
    BOOL  _didSetPreviouslyFocusedIndexPath;
    NSIndexPath * _nextFocusedIndexPath;
    NSIndexPath * _previouslyFocusedIndexPath;
    UITableView * _tableView;
}

@property (nonatomic, readonly) NSIndexPath *nextFocusedIndexPath;
@property (nonatomic, readonly) NSIndexPath *previouslyFocusedIndexPath;
@property (nonatomic, readonly) UITableView *tableView;

+ (id)_contextWithContext:(id)arg1 tableView:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithContext:(id)arg1 tableView:(id)arg2;
- (void)_setInitialNextFocusedView:(id)arg1;
- (void)_setPreviouslyFocusedView:(id)arg1;
- (id)nextFocusedIndexPath;
- (id)previouslyFocusedIndexPath;
- (id)tableView;

@end
