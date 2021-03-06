/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISingleContactTableViewCell : SearchUISingleResultTableViewCell {
    CNAvatarView * _avatarView;
    NSString * _contactIdentifier;
    CNQuickActionsView * _quickActionsView;
}

@property (retain) CNAvatarView *avatarView;
@property (retain) NSString *contactIdentifier;
@property (retain) CNQuickActionsView *quickActionsView;

+ (void)initialize;

- (void).cxx_destruct;
- (id)avatarView;
- (void)clearPurgeableMemory;
- (id)contactIdentifier;
- (id)quickActionsView;
- (void)setAvatarView:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setQuickActionsView:(id)arg1;
- (void)updateThumbnailViewForResult:(id)arg1;
- (void)updateWithContact:(id)arg1 crossFade:(BOOL)arg2;
- (void)updateWithResult:(id)arg1;
- (id)viewForActionButton:(id)arg1 style:(unsigned int)arg2;
- (id)viewForThumbnail;

@end
