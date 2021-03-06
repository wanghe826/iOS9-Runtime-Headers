/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLocationShareOfferChatItem : CKBalloonChatItem {
    FMFLocation * _lastKnownLocation;
}

@property (nonatomic, retain) FMFLocation *lastKnownLocation;
@property (nonatomic, readonly) NSString *locationText;
@property (nonatomic, readonly) int offerState;
@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly) NSString *titleText;

+ (id)placeholderPreviewCache;
+ (id)titleBarMaskImageForWidth:(float)arg1;

- (id)_desaturatedImageForImage:(id)arg1;
- (void)_generateMapPreview;
- (id)_generatePlaceholderThumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_generateThumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 withCoordinate:(struct { double x1; double x2; })arg3 forState:(int)arg4;
- (void)_handleLocationDidChangeNotification:(id)arg1;
- (id)_previewCacheKey:(unsigned int)arg1;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)arg1;
- (void)dealloc;
- (BOOL)failed;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(float)arg2;
- (BOOL)isFromMe;
- (id)lastKnownLocation;
- (id)locationText;
- (int)offerState;
- (id)previewForWidth:(float)arg1 orientation:(BOOL)arg2;
- (void)savePreview:(id)arg1 toURL:(id)arg2;
- (id)savedPreviewFromURL:(id)arg1;
- (id)sender;
- (void)setLastKnownLocation:(id)arg1;
- (id)time;
- (id)titleText;

@end
